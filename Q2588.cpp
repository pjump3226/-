#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b;
	cout << a * (b % 10) << '\n'
		<< a * ((b - (b / 100) * 100) / 10) << '\n'
		<< a * (b / 100) << '\n'
		<< a * b << '\n';
	return 0;
}