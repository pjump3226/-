#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int count = 0;
	int num=0;
	for (int i = 0; i < n; i++) {
		int val = 0;
		cin >> num;
		for (int j = 1; j <= num; j++) {
			if (num % j == 0) val++;
		}
		if (val == 2) {
			count++;
		}
	}
	cout << count <<'\n';
	return 0;
}