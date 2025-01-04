
#include <gtest/gtest.h>

namespace {

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertionsA) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, BasicAssertionsB) { EXPECT_EQ(7 * 6, 42); }

TEST(XTest, Huhu) { EXPECT_EQ(7 * 6, 42); }

TEST(Parallel, Exist) {
  bool expr = false;
#ifdef _OPENMP
  expr = true;
#endif
  ASSERT_TRUE(expr);
}

}  // namespace
