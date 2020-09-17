#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (1) {
		getline(cin, s);
		if (s == "#") break;
		int count = 0;
		for (int i = 0; i < s.size(); i++) {
			char word = s.at(i);
			if (word == 'A' || word == 'E' || word == 'I'
				|| word == 'O' || word == 'U' || word == 'a'
				|| word == 'e' || word == 'i' || word == 'o'
				|| word == 'u') count++;
		}
		cout << count << '\n';
	}
	return 0;
}