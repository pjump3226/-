#include <iostream>
using namespace std;

long long Fibo(int n, long long a = 1, long long b = 1) {
	if (n == 1) {
		return a;
	}
	else if (n == 2) {
		return b;
	}

	return Fibo(n - 1, b, a + b);
}

int main() {
	int n;
	cin >> n;
	cout << Fibo(n) << '\n';
}