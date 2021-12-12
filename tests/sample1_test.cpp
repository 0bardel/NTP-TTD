#include "sample1.h"
#include "gtest/gtest.h"

TEST(IsPrimeTests, Trivial) {
    EXPECT_FALSE(IsPrime(-5));
    EXPECT_FALSE(IsPrime(-100));
    EXPECT_FALSE(IsPrime(-0));
    EXPECT_FALSE(IsPrime(1));
}

TEST(IsPrimeTests, Even) {
    EXPECT_FALSE(IsPrime(20));
    EXPECT_FALSE(IsPrime(8));
    EXPECT_TRUE(IsPrime(2));
}

TEST(IsPrimeTests, Odd) {
    EXPECT_TRUE(IsPrime(3));
    EXPECT_TRUE(IsPrime(11));
    EXPECT_TRUE(IsPrime(29));

    EXPECT_FALSE(IsPrime(9));   
    EXPECT_FALSE(IsPrime(121));
}