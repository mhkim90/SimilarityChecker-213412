#include <iostream>
#include <vector>
#include <string>
#include <exception>
using namespace std;

class Similar {
public:
	Similar(const string& answers) : answers { answers } {};

	int checkLengthSimilarity(const string& words) {
		if (!isValidWordsLength(words)) {
			return 0;
		}

		return MAX_LENGTH_POINT * words.size() / (double)answers.size();
	}
private:
	const int MAX_LENGTH_POINT = 60;
	string answers;

	bool isValidWordsLength(const string& words) {
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