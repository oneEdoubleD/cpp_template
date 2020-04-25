#include "gtest/gtest.h"
#include "TemplateProject.h"

using namespace std;

TEST(Tests, Zero) {
	int result = Temp::factorial(0);
	ASSERT_EQ(result, 0) << "this test passes";
}

TEST(Tests, One) {
	int result = Temp::factorial(1);
	ASSERT_EQ(result, 1) << "this test passes";
}

TEST(Tests, Three) {
	int result = Temp::factorial(3);
	ASSERT_EQ(result, 6) << "this test passes";
}
