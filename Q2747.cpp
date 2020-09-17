#include <iostream>
using namespace std;

int fibo(int n,int a = 1, int b = 1) {
	if (n == 1) {
		return a;
	}
	if (n == 2) {
		return b;
	}
	return fibo(n - 1, b, a+b);
}

int main() {
	int n;
	cin >> n;
	cout << fibo(n) << '\n';
	return 0;
}