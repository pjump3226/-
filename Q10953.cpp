#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		char comma;
		cin >> a >> comma >> b;
		cout << a + b << '\n';
	}
	return 0;
}