#include "sample.hpp"
#include <gtest/gtest.h>


TEST(SampleTest, doesPass)
{
    ASSERT_TRUE(true);
}

TEST(AddTest, AddsPositive)
{
    EXPECT_EQ(add_ints(2, 3), 5);
}

TEST(AddTest, AddsNegativeAndPositive)
{
    EXPECT_EQ(add_ints(-1, 1), 0);
}
