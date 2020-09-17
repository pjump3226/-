#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	return a % b ? gcd(b, a%b) : b;
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		int num = gcd(a, b);
		cout << num*(a/num)*(b/num) << '\n';
	}
	return 0;
}