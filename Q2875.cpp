#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int count = min(n / 2 ,m);
	int left = n + m - count * 3;
	while (left < k) {
		count--;
		left += 3;
	}
	cout << count <<'\n';
	return 0;
}