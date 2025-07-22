#include "gmock/gmock.h"
class Cal {
<<<<<<< HEAD
=======
public:
>>>>>>> bc3dd0a (getSumSum 함수 추가)
	int getSumSum(int a, int b, int c) {
		return a + b + c;
	}
};
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}