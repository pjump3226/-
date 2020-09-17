#include <iostream>
using namespace std;

int main() {
	int num;
	int result = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		result += (num*num);
	}
	cout << result % 10 << '\n';
	return 0;
}