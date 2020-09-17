#include <iostream>
using namespace std;

int main() {
	int c, k, p;
	cin >> c >> k >> p;
	cout << k * c*(c + 1) / 2 + p * c*(c + 1)*(2 * c + 1) / 6 << '\n';
	return 0;
}