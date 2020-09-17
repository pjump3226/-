#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, result;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if(s.at(i) != 'A' && s.at(i) != 'B' && s.at(i) != 'C' && s.at(i) != 'D' && s.at(i) != 'E' && s.at(i) != 'G' && 
			s.at(i) != 'I' && s.at(i) != 'M' && s.at(i) != 'R')
			result += s.at(i);
	}
	cout << result << '\n';
	return 0;
}