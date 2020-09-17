#include <iostream>
using namespace std;

int gcd(int a, int b) {
	return a % b ? gcd(b, a%b) : b;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t, m, n, x , y;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >> x >> y;
		int g = gcd(m, n);
		int lcd = m * n / g;
		while (1)
		{
			if (x > lcd || (x - 1) % n + 1 == y)
				break;
			x += m;
		}
		if (x > lcd)
			cout << -1 << '\n';
		else
			cout << x << '\n';
	}
	return 0;
}