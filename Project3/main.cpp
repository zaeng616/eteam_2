#include "gmock/gmock.h"
class Cal {
public:

	double getGop(double a, double b) {
		return a * b;

	double getSumSum(double a, double b, double c) {
		return a + b + c;
  }
  
	double getGopgopgop(double a, double b, double c) {
		return a * b * c;

	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}