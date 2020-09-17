#include <iostream>
#include <string>
using namespace std;

int arr[26];

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int num = s.at(i) - 'a';
		arr[num]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
	return 0;
}