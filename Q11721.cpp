#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int cnt = 0;
	for (size_t i = 0; i < str.length(); i++) {
		cout << str[i];
		cnt++;
		if (cnt == 10) {
			cout << '\n';
			cnt = 0;
		}
	}
	if(cnt) cout << '\n';
	return 0;
}