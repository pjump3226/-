#include <iostream>
using namespace std;

bool Han(int num) {
	if (num < 100) {
		return true;
	}
	else {
		int val1, val2;
		val1 = num % 10 - (num / 10) % 10;
		val2 = (num / 10) % 10 - (num / 100) % 10;
		if (val1 == val2 && num!=1000) return true;
		else return false;
	}
}

int main() {
	int n;
	int count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (Han(i)) count++;
	}
	cout << count << '\n';
	return 0;
}