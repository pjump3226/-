#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	int arr[26] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> s;
		arr[s.at(0) - 'a']++;
	}
	bool val = false;
	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			val = true;
			cout << (char)('a'+i);
		}
	}
	if (!val) cout << "PREDAJA" << '\n';
	else cout << '\n';
	return 0;
}