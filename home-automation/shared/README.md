# Shared headers

Common headers used by multiple PlatformIO projects in `home-automation/`
(currently `dht22-test/` and `dht22-and-rgb/`).

Each project's `platformio.ini` adds this folder to the include path via:

```ini
[env]
build_flags = -I../shared/include
```

So any source or test file in those projects can `#include "temp_color.h"`
or `#include "secrets.h"` and the compiler will find the shared copy.

## Files

- `include/temp_color.h` — `getColorForTemp()` / `getColorForHumidity()` helpers
- `include/secrets.h.example` — template for WiFi credentials
- `include/secrets.h` — your real WiFi credentials (gitignored)

The `template/` project keeps its own copies on purpose so it remains a
self-contained starting point for new projects.
