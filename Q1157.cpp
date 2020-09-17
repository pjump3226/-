#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int arr[26] = { 0, };
	for (int i = 0; i < s.size(); i++) {
		arr[toupper(s.at(i)) - 'A']++;
	}
	int max = arr[0];
	int index = 0;
	bool val = true;
	for (int i = 0; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (index!=i && arr[i] == max) {
			val = false;
		}
	}
	if(val) cout << (char)(index+'A') << '\n';
	else cout << "?" << "\n";
	return 0;
}