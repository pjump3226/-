#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n-i; j < n; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2*n-1-i*2; j++) {
			cout << "*";
		}
		cout << " ";
		cout << '\n';
	}
	return 0;
}