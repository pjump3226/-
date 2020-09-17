#include <iostream>
using namespace std;

int main() {
	int n;
	int result=1;
	cin >> n;
	while (1) {
		if (n == 0)break;
		result *= n;
		n--;
	}
	cout << result << '\n';
	return 0;
}