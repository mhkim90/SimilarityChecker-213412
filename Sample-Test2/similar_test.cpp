#include "pch.h"
#include "../cra_0624/similar.cpp"
#include <vector>
#include <string>
using namespace std;

class SimilarFixture : public ::testing::Test {
public:
	void checkLengthSimilarity(string words, int expected) {
		EXPECT_EQ(app.checkLengthSimilarity(words), expected);
	}

	Similar app{ "abcde" };

};

TEST_F(SimilarFixture, Length) {
	checkLengthSimilarity("aaaaa", 60);
	checkLengthSimilarity("aaa", 36);
	checkLengthSimilarity("aa", 0);
	checkLengthSimilarity("aaaaaaaaaa", 0);
}
