#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<string> strs;
	string str;

	while (getline(cin, str)) {
		strs.push_back(str);
	}

	if (strs.size() == 0) {
		cout << "입력된 문장이 없습니다." << endl;
		
		return 0;
	}

	int max = strs[0].length();
	int min = strs[0].length();

	for (int i = 1; i < strs.size(); i++) {
		int current = strs[i].length();

		if (current > max) {
			max = current;
		}
		if (current < min) {
			min = current;
		}

	}

	cout << "가장 길이가 긴 문자열의 길이: " << max << "입니다." << endl;
	cout << "가장 길이가 짧은 문자열의 길이: " << min << "입니다." << endl;


	return 0;
}