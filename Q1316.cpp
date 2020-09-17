#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		int arr[26] = { 0, };
		bool val = true;
		for (int j = 0; j < s.size()-1; j++) {
			if (s.at(j) != s.at(j + 1)) {
				arr[s.at(j) - 'a']++;
			}
			if (j == s.size() - 2) {
				if (s.at(j) != s.at(j + 1)) {
					arr[s.at(j+1) - 'a']++;
				}
				else {
					int k = 1;
					while (1) {
						if (j - k < 0) break;
						if (s.at(j - k) != s.at(j + 1 - k)) {
							arr[s.at(j + 1-k) - 'a']++;
							break;
						}
						k++;
					}
				}
			}
		}
		for (int j = 0; j < 26; j++) {
			if (arr[j] > 1) val = false;
		}
		if (val)  count++;
	}
	cout << count << '\n';
	return 0;
}