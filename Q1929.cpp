#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		int val = 0;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) val++;
			if (val > 0) break;
		}
		if (val == 0 && i != 1) cout << i << '\n';
	}
}