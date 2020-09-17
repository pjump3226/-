#include <iostream>
#include <algorithm>
using namespace std;

int divide(long long num, int divisor) {
	int count = 0;
	for (long long i = divisor; i <= num; i *= divisor) {
		count += (num / i);
	}
	return count;
}

int main() {
	long long n, m;
	cin >> n >> m;
	int c2 = 0; 
	int c5 = 0;
	c5 += divide(n, 5);
	c5 -= divide(m, 5);
	c5 -= divide(n-m, 5);

	c2 += divide(n, 2);
	c2 -= divide(m, 2);
	c2 -= divide(n - m, 2);
	cout << min(c2,c5) << '\n';
	return 0;
}