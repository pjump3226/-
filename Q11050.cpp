#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int result = 1;
	int c = 0;
	while (c<k) {
		result *= (n - c);
		c++;
	}
	while (k > 1) {
		result /= k;
		k--;
	}
	cout << result << '\n';
	return 0;
}