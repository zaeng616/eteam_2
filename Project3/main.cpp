#include "gmock/gmock.h"
class Cal {
public:
	double getDivide(double a, double b) {
		if (b == 0)
			return -1;
		return (a / b);
	}
};
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}