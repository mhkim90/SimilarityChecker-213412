#include "pch.h"
#include "../cra_0624/similar.cpp"
#include <vector>
#include <string>
using namespace std;

class SimilarFixture : public ::testing::Test {
public:
	Similar app;

};

TEST_F(SimilarFixture, Test) {
	EXPECT_EQ(1, 1);
}
