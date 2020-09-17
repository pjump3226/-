#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int num;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num < 40) sum += 40;
		else sum += num;
	}
	cout << sum / 5 << '\n';
	return 0;
}