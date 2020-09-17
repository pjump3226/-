#include <iostream>
using namespace std;

int main() {
	char arr[3];
	for (int i = 0; i < 3; i++) {
		int n;
		cin >> n;
		long long sum = 0;
		for (int j = 0; j < n; j++) {
			long long num;
			cin >> num;
			sum += num;
		}
		if (sum > 0) cout << "+" << '\n';
		else if (sum == 0) cout << 0 << '\n';
		else cout << "-" << '\n';
	}
	return 0;
}