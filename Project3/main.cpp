#include "gmock/gmock.h"
class Cal {
public:
	double getMinus(double a, double b) { 
		return a - b; 
	};
};
TEST(t1, t2) {
	Cal cal;

	EXPECT_EQ(65535, cal.getMinus(65536, 1));
	EXPECT_EQ(-65535, cal.getMinus(1, 65536));
	EXPECT_EQ(1, 1);
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
