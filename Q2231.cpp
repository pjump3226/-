#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	int num=0;
	for (int i = 1; i < n; i++) {
		int n1 = i;
		arr[i] = i;
		arr[i] += n1 % 10;
		while ((n1/10)>=1) {
			n1 /= 10;
			arr[i] += n1 % 10;
		}
		if (arr[i] == n) { 
			num = i;
			break; 
		}
	}
	cout << num << '\n';
	return 0;
}