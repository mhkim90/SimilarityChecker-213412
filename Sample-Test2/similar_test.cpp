#include "pch.h"
#include "../cra_0624/similar.cpp"
#include <vector>
#include <string>
using namespace std;

class SimilarFixture : public ::testing::Test {
public:
	Similar app{ "abcde" };

};

TEST_F(SimilarFixture, Length) {
	EXPECT_EQ(app.checkLengthSimilary("aaaaa"), 60);
	EXPECT_EQ(app.checkLengthSimilary("aaa"), 36);
	EXPECT_EQ(app.checkLengthSimilary("aa"), 0);
	EXPECT_EQ(app.checkLengthSimilary("aaaaaaaaaa"), 0);
}
