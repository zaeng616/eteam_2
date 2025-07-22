#include "gmock/gmock.h"

class Cal {
public:

	double getMinus(double a, double b) { 
		return a - b; 
	};

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
  
  double getZegop(int a) {
		return (a * a);
  }
 
};

TEST(TestGetGop, TC1) {
	Cal cal;
	EXPECT_EQ(2 * 3, cal.getGop(2, 3));
}

TEST(TestGetGop, TC2) {
	Cal cal;
	EXPECT_EQ(6.4, cal.getGop(2, 3.2));
}

TEST(t1, t2) {
	Cal cal;
	EXPECT_EQ(1, 1);
	EXPECT_EQ(65535, cal.getMinus(65536, 1));
	EXPECT_EQ(-65535, cal.getMinus(1, 65536));
}

TEST(t1, testGopGopGop) {
	Cal cal;
	EXPECT_EQ(cal.getGopgopgop(2, 3, 4), 24);
}

TEST(t1, zegop) {
	Cal cal;
	EXPECT_EQ(cal.getZegop(3), 9);
}

TEST(t1, sum) {
	Cal cal;
	EXPECT_EQ(cal.getSum(1.2, 2.3), 3.5);
}

TEST(t1, divide) {
	Cal c;

	EXPECT_EQ(3, c.getDivide(6, 2));
	EXPECT_EQ(-1, c.getDivide(3, 0));

	double expect = static_cast<double>(2) / 3;
	double actual = c.getDivide(2, 3);
	EXPECT_EQ(expect, actual);
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
