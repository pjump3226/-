#include <iostream>
using namespace std;

int main() {
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int max = s1 + s2 + s3 + 1;
	int sum = 0;
	int *arr = new int[max];
	for (int i = 3; i < max; i++) {
		arr[i] = 0;
	}
	
	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				sum = i + j + k;
				arr[sum]++;
			}
		}
	}
	int count = 0;
	int result = 0;
	for (int i = 3; i < max; i++) {
		if (arr[i] > count) {
			count = arr[i];
			result = i;
		}
	}
	cout << result << '\n';

	return 0;
}