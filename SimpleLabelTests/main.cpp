#include <gtest/gtest.h>

int t(int a)
{
	return 2*a;
}

TEST(FactorialTest, Zero) 
{
	EXPECT_EQ(1, t(2));
}


int main(int argc, char *argv[])
{
	RUN_ALL_TESTS();
}