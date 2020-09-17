#include <iostream>
using namespace std;

long long Fibo(int n, long long a = 1, long long b = 2) {
	if (n == 1) {
		if (a > 15746) a %= 15746;
		return a;
	}
	else if (n == 2) {
		if (b > 15746) b %= 15746;
		return b;
	}
	return Fibo(n - 1, b, (a + b)%15746);
}

int main() {
	int n;
	cin >> n;
	cout << Fibo(n) << '\n';
}