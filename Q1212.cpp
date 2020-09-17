#include <iostream>
#include <string>
using namespace std;

void func(int n, bool val) {
	if (n >= 4) { cout << 1; n -= 4; }
	else { if (val) { cout << 0; } }
	if (n >= 2) { cout << 1; n -= 2; }
	else {
		cout << 0; 
	}
	if (n >= 1) cout << 1;
	else cout << 0;
}

int main() {
	int n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int num = s.at(i)-'0';
		if (i==0 && num < 2) cout << num;
		else func(num ,i);
	}
	cout << '\n';
	return 0;
}