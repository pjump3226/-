#include <iostream>
using namespace std;

long long Fibo(int n, int a = 1, int b = 2) {
	if (n == 1) {
		if (a > 10007) a %= 10007;
		return a;
	}
	else if (n == 2) {
		if (b > 10007) b %= 10007;
		return b;
	}
	return Fibo(n - 1, b, (a + b) % 10007);
}

int main() {
	int n;
	cin >> n;
	cout << Fibo(n) << '\n';
	return 0;
}