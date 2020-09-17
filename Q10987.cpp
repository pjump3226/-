#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int vowel = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i'
			|| s.at(i) == 'o' || s.at(i) == 'u') {
			vowel++;
		}
	}
	cout << vowel << '\n';
	return 0;
}