#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int temp = n;
	int count = 0;
	while (1) {
		if (temp < 10) temp = temp * 10 + temp;
		else {
			temp = ((temp % 10) * 10) + ((temp / 10 + temp % 10)%10);
		}
		count++;
		if (n == temp) break;
	}
	cout << count << '\n';
	return 0;
}