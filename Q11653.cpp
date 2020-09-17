#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n>1) {
		int count = 2;
		while (1) {
			if (n == 1) break;
			if (n%count == 0) {
				n /= count;
				cout << count << '\n';
			}
			else count++;
		}
	}
	return 0;
}