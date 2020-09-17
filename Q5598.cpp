#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, result;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == 'A' || s.at(i) == 'B' || s.at(i) == 'C') {
			result += (s.at(i) + 23); 
		}
		else result += s.at(i) - 3;
	}
	cout << result << '\n';
	return 0;
}