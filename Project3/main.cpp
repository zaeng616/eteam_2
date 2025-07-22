#include "gmock/gmock.h"

class Cal {
public:
	double getSum(double a, double b) {
		return a + b;
	}

	double getGop(double a, double b) {
		return a * b;
	}

	double getDivide(double a, double b) {
		if (b == 0)
			return -1;
		return (a / b);
	}

	double getSumSum(double a, double b, double c) {
		return a + b + c;
	}

	double getGopgopgop(double a, double b, double c) {
		return a * b * c;
	}
};

TEST(t1, tcsum) {
	Cal cal;
	double result = cal.getSum(1.2, 2.3);
	EXPECT_EQ(result, 3.5);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}