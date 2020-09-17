#include <iostream>
using namespace std;

int main() {
	long long a, b, c;
	long long result;
	cin >> a >> b >> c;
	result = a;
	for (int i = 1; i < b; i++) {
		result *= (a%c);
		result %= c;
		printf("result : %d\n", result);
	}
	cout << result << '\n';
	return 0;
}