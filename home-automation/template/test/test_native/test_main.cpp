// Unit tests for the temperature-to-color mapping logic.
// Run these on your computer (no hardware needed!) with:
//   pio test -e native

#include <unity.h>
#include "temp_color.h"

void setUp(void) {}
void tearDown(void) {}

// --- Blue zone (below 18 °C) ---

void test_freezing_is_blue(void)
{
  Color c = getColorForTemp(0.0f);
  TEST_ASSERT_EQUAL_INT(0, c.red);
  TEST_ASSERT_EQUAL_INT(0, c.green);
  TEST_ASSERT_EQUAL_INT(255, c.blue);
}

void test_just_below_18_is_blue(void)
{
  Color c = getColorForTemp(17.9f);
  TEST_ASSERT_EQUAL_INT(0, c.red);
  TEST_ASSERT_EQUAL_INT(0, c.green);
  TEST_ASSERT_EQUAL_INT(255, c.blue);
}

// --- Green zone (18 °C to <23 °C) ---

void test_at_18_is_green(void)
{
  Color c = getColorForTemp(18.0f);
  TEST_ASSERT_EQUAL_INT(0, c.red);
  TEST_ASSERT_EQUAL_INT(255, c.green);
  TEST_ASSERT_EQUAL_INT(0, c.blue);
}

void test_mid_comfort_is_green(void)
{
  Color c = getColorForTemp(20.0f);
  TEST_ASSERT_EQUAL_INT(0, c.red);
  TEST_ASSERT_EQUAL_INT(255, c.green);
  TEST_ASSERT_EQUAL_INT(0, c.blue);
}

void test_just_below_23_is_green(void)
{
  Color c = getColorForTemp(22.9f);
  TEST_ASSERT_EQUAL_INT(0, c.red);
  TEST_ASSERT_EQUAL_INT(255, c.green);
  TEST_ASSERT_EQUAL_INT(0, c.blue);
}

// --- Yellow zone (23 °C to <28 °C) ---

void test_at_23_is_yellow(void)
{
  Color c = getColorForTemp(23.0f);
  TEST_ASSERT_EQUAL_INT(255, c.red);
  TEST_ASSERT_EQUAL_INT(255, c.green);
  TEST_ASSERT_EQUAL_INT(0, c.blue);
}

void test_mid_warm_is_yellow(void)
{
  Color c = getColorForTemp(25.5f);
  TEST_ASSERT_EQUAL_INT(255, c.red);
  TEST_ASSERT_EQUAL_INT(255, c.green);
  TEST_ASSERT_EQUAL_INT(0, c.blue);
}

void test_just_below_28_is_yellow(void)
{
  Color c = getColorForTemp(27.9f);
  TEST_ASSERT_EQUAL_INT(255, c.red);
  TEST_ASSERT_EQUAL_INT(255, c.green);
  TEST_ASSERT_EQUAL_INT(0, c.blue);
}

// --- Red zone (28 °C and above) ---

void test_at_28_is_red(void)
{
  Color c = getColorForTemp(28.0f);
  TEST_ASSERT_EQUAL_INT(255, c.red);
  TEST_ASSERT_EQUAL_INT(0, c.green);
  TEST_ASSERT_EQUAL_INT(0, c.blue);
}

void test_very_hot_is_red(void)
{
  Color c = getColorForTemp(40.0f);
  TEST_ASSERT_EQUAL_INT(255, c.red);
  TEST_ASSERT_EQUAL_INT(0, c.green);
  TEST_ASSERT_EQUAL_INT(0, c.blue);
}

int main(void)
{
  UNITY_BEGIN();

  // Blue zone
  RUN_TEST(test_freezing_is_blue);
  RUN_TEST(test_just_below_18_is_blue);

  // Green zone
  RUN_TEST(test_at_18_is_green);
  RUN_TEST(test_mid_comfort_is_green);
  RUN_TEST(test_just_below_23_is_green);

  // Yellow zone
  RUN_TEST(test_at_23_is_yellow);
  RUN_TEST(test_mid_warm_is_yellow);
  RUN_TEST(test_just_below_28_is_yellow);

  // Red zone
  RUN_TEST(test_at_28_is_red);
  RUN_TEST(test_very_hot_is_red);

  return UNITY_END();
}
