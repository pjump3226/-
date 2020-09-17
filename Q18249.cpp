#include <iostream>
#include <map>
using namespace std;
map<long long, long long> d;
const long long mod = 1000000007LL;
long long fibo(long long n) {
	if (n <= 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else if (d.count(n) > 0) {
		return d[n];
	}
	else {
		if (n % 2 == 1) {
			long long m = (n + 1) / 2;
			long long t1 = fibo(m);
			long long t2 = fibo(m - 1);
			d[n] = t1 * t1 + t2 * t2;
			d[n] %= mod;
			return d[n];
		}
		else {
			long long m = n / 2;
			long long t1 = fibo(m - 1);
			long long t2 = fibo(m);
			d[n] = (2LL * t1 + t2)*t2;
			d[n] %= mod;
			return d[n];
		}
	}
}
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long n;
		cin >> n;
		cout << fibo(n) << '\n';
	}
	return 0;
}