#include <iostream>
using namespace std;

int main() {
	int n , num;
	int sum = 0;
	cin >> n;
	char *str = new char[n];
	cin >> str;
	for (int i = 0; i < n; i++) {
		sum += (str[i] - 48);
	}
	cout << sum << '\n';
	return 0;
}