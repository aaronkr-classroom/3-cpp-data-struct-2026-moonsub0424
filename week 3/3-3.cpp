#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<string> words;
	string word;

	while (cin >> word) {
		words.push_back(word);
	}

	if (words.size() == 0) {
		cout << "입력된 단어가 없습니다." << endl;
		return 0;
	}

	sort(words.begin(), words.end());

	int count = 1;
	string current = words[0];

	for (int i = 1; i < words.size(); i++) {
		if (words[i] == current) {
			count++;
		}
		else {
			cout << current << ": " << count << endl;
			current = words[i];
			count = 1;
		}
	}

	cout << current << ": " << count << endl;

	return 0;
}