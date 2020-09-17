#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) break;
		int count = 0;
		for (int i = n+1; i <= 2 * n; i++)
		{
			int val = 0;
			for (int j = 2; j <= sqrt(i); j++) {
				if (i%j == 0) val++;
				if (val > 0) break;
			}
			if (i != 1 && val == 0) {
				count++;
			}
		}
		cout << count << '\n';
	}
	return 0;
}