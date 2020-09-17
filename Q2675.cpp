#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int count;
		string s;
		cin >> count >> s;
		for (int j = 0; j < s.size(); j++) {
			for (int k = 0; k < count; k++) {
				cout << s.at(j);
			}
		}
		cout << "\n";

	}
	return 0;
}