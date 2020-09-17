#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y, z;
	int a, b, c;
	string s;
	cin >> x >> y >> z;
	cin >> s;
	if (x > y) {
		if (x > z) {
			if (y > z) { a = z; b = y; c = x; }
			else { a = y; b = z; c = x; }
		}
		else { a = y; b = x; c = z; }
	}
	else {
		if (x < z) {
			if (y > z) { a = x; b = z; c = y; }
			else { a = x; b = y; c = z; }
		}
		else { a = z; b = x; c = y; }
	}
	for (int i = 0; i < 3; i++) {
		if (s.at(i) == 'A') cout << a;
		else if (s.at(i) == 'B') cout << b;
		else cout << c;
		cout << " ";
	}
	cout << '\n';
	return 0;
}