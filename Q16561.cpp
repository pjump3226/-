#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 9) cout << 0 << '\n';
	else {
		int c = (n / 3)-2;
		cout << c + (c - 1)*c / 2 << '\n';
	}
	return 0;
}