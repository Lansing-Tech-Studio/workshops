# DHT22 + WiFi JSON endpoint

ESP32 reads a DHT22 every 3 s and serves the latest reading as JSON on
`http://<esp32-ip>/api/sensor`. A standalone HTML page
([`display.html`](display.html)) polls that endpoint and renders a
big-screen temperature + humidity display.

## First-time setup

1. Copy [`include/secrets.h.example`](include/secrets.h.example) to
   `include/secrets.h` and fill in your 2.4 GHz WiFi SSID + password.
   `secrets.h` is gitignored.
2. Build and upload: `pio run -t upload`
3. Open the Serial Monitor (115200) and note the printed IP address and
   MAC address.

## Test the endpoint

From any machine on the same WiFi:

```sh
curl http://<esp32-ip>/api/sensor
```

Expected response:

```json
{
  "status": "ok",
  "temp_c": 25.3,
  "temp_f": 77.54,
  "humidity": 43.2,
  "age_ms": 1247
}
```

`age_ms` is how long ago the cached reading was taken. If a sensor read
fails, the endpoint keeps serving the last good value rather than NaN.

## Big-screen display

Open [`display.html`](display.html) in any browser. Either:

- edit the `DEFAULT_IP` constant near the top of the file, or
- pass the IP via URL: `display.html?ip=192.168.1.42`

Fullscreen the tab and project. Stale readings (>10 s old) turn the
numbers orange and the footer shows the age.

## Gotchas

- **2.4 GHz only.** ESP32 doesn't speak 5 GHz. Most home routers
  broadcast both bands under one SSID, but split-band networks need the
  2.4 GHz one.
- **CORS** is enabled (`Access-Control-Allow-Origin: *`) so
  `display.html` can fetch from any origin, including `file://`.
- **Client isolation** on guest/corporate WiFi can block laptop ↔ ESP32
  traffic on the same network. If `curl` times out from your laptop
  but the Serial Monitor shows the server is up, suspect this.
- **DHCP can reassign** the ESP32's IP on router reboot. For a stable
  setup, add a DHCP reservation in the router using the MAC printed at
  boot.
- **`ArduinoJson` v7** is pinned in [`platformio.ini`](platformio.ini).
  v6 used `StaticJsonDocument<N>`; v7 uses `JsonDocument`. The code
  here is v7-only.
