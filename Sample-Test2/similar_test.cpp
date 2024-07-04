#include "pch.h"
#include "../cra_0624/similar.cpp"
#include <vector>
#include <string>
#include <exception>
using namespace std;

class SimilarFixture : public ::testing::Test {
public:
	void checkLengthSimilarity(string words, int expected) {
		EXPECT_EQ(app.getLengthSimilarityPoint(words), expected);
	}

	Similar app{ "ABCDE" };

};

TEST_F(SimilarFixture, Length) {
	checkLengthSimilarity("", 0);
	checkLengthSimilarity("AAAAA", 60);
	checkLengthSimilarity("AAA", 20);
	checkLengthSimilarity("AA", 0);
	checkLengthSimilarity("AAAAAAAAAA", 0);
}
