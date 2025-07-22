#include "gmock/gmock.h"
class Cal {
public:
	double getSumSum(double a, double b, double c) {
		return a + b + c;
  }
  
	double getGopgopgop(double a, double b, double c) {
		return a * b * c;
	}
  
  int getZegop(int a) {
		return (a * a);
  }
};
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, zegop) {
	Cal cal;
	EXPECT_EQ(cal.getZegop(3), 9);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
