#include <iostream>
using namespace std;

int main() {
	int n, f;
	cin >> n >> f;
	int quot = n / 100;
	int n2;
	for (int i = 0; i < 100; i++) {
		n2 = quot * 100 + i;
		if (n2%f == 0) break;
	}
	if (n2%100 < 10) cout << "0" << n2 % 10 << '\n';
	else cout << n2%100 << '\n';
	return 0;
}