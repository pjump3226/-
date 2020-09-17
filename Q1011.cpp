#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		int left = y - x;
		int n = sqrt(left);
		if (left>= (n*n)+n+1 && left < (n+1)*(n+1)) n++;
		if (left <= (n*n - n + 1) + n - 1)
			cout << 2*n-1 << '\n';
		else
			cout << 2*n << '\n';
	}
	return 0;
}