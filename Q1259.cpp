#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (1) {
		cin >> s;
		if (s == "0") break;
		bool val = true;
		for (int i = 0; i < s.size() / 2; i++) {
			if (s.at(i) != s.at((s.size() - 1) - i)) {
				val = false;
				break;
			}
		}
		if(val) cout << "yes" << '\n';
		else cout << "no" << '\n'; 
	}
	return 0;
}