#include <string>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s1, s2;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> s2;
		cout << "Distances: ";
		for (int j = 0; j < s1.size(); j++) {
			if (s2.at(j) - 'A' >= s1.at(j) - 'A') {
				cout << s2.at(j) - s1.at(j) << " ";
			}
			else {
				cout << s2.at(j) + 26 - s1.at(j) << " ";
			}
		}
		cout << '\n';
	}

	return 0;
}