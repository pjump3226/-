#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> myString;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		myString.push_back(s);
	}
	string s = myString[0];
	string result = myString[0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < s.size(); j++) {
			if (s.at(j) != myString[i].at(j)) {
				result.at(j) = '?';
			}
		}
	}
	cout << result << '\n';
	return 0;
}