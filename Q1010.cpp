#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		if (m == n) cout << 1 << '\n';
		else {
			int count = 0;
			int result = 1;
			while (1) {
				if (count == n) {
					break;
				}
				result *= (m - count);
				result /= (count + 1);
				count++;
			}
			cout << result << '\n';
		}
	}
	return 0;
}