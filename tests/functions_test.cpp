#include "functions.h"
#include <gtest/gtest.h>

TEST(myfunction, add)
{
  GTEST_ASSERT_EQ(add(10, 22), 32);
}