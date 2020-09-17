#include <iostream>
#include <algorithm>
using namespace std;
int arr[9];

int main() {
	int sum = 0;
	int n1, n2;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + 9);
	for (int i = 0; i < 8; i++) {
		for(int j=i+1; j<9; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				n1 = i, n2 = j;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i != n1 && i != n2) 
			cout << arr[i] << '\n';
	}
	return 0;
}