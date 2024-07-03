#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Similar {
public:
	Similar(const string& answers) : answers { answers } {};

	int checkLengthSimilarity(string words) {
		if (words.size() >= 2 * answers.size() ||
			2 * words.size() <= answers.size()) {
			return 0;
		}

		return (float)words.size() / (float)answers.size() * 60;
	}
private:
	string answers;
};