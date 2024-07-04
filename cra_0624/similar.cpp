#include <iostream>
#include <vector>
#include <string>
#include <exception>
using namespace std;

class Similar {
public:
	Similar(const string& answers) : answers { answers } {};

	int getLengthSimilarityPoint(const string& words) {
		if (!isValidWords(words)) {
			return 0;
		}

		int maxLen = max(words.size(), answers.size());
		int minLen = min(words.size(), answers.size());
		return 2 * MAX_LENGTH_POINT - MAX_LENGTH_POINT * maxLen / minLen;
	}
private:
	const int MAX_LENGTH_POINT = 60;
	string answers;

	bool isValidWords(const string& words) {
		if (words.size() == 0 || answers.size() == 0) {
			return false;
		}
		else if (words.size() >= 2 * answers.size() ||
			2 * words.size() <= answers.size()) {
			return false;
		}
		return true;
	}
};