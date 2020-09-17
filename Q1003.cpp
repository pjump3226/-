#include <iostream>
using namespace std;
int c1, c2;

int fibo(int n ,int a=0, int b=1 ) {
	if (n == 0) {
		c1++;
		return a;
	}
	if (n == 1) {
		c2++;
		return b;
	}
	return fibo(n-1, b,a+b);
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		if (n == 0) { c1 = 1, c2 = 0; }
		else {
			c1 = fibo(n - 1), c2 = fibo(n);
		}
		cout << c1 << " "<< c2 << '\n';
		c1 = 0; c2 = 0;
	}
	return 0;
}