#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(10);
	cout << (double)a / b << '\n';
	return 0;
}