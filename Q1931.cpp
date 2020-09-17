#include <iostream>
#include <math.h>
long long arr[100000][2];
using namespace std;

int main() {
	int n;
	cin >> n;
	int st; // 시작
	int index = 0;
	long long min;	// ft의 최소 
	long long max;  // st의 최대
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	min = arr[0][1]; max = arr[0][0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i][1]) {
			min = arr[i][1];
			index = i;
		}
		if (max < arr[i][0]) {
			max = arr[i][0];
		}
	}
	st = min;
	min = pow(2, 31);
	arr[index][1] = pow(2, 31);
	count++;
	bool val = true;
	while (val) {
		if (st > max) break;
		for (int i = 0; i < n; i++) {
			if (arr[i][0] >= st) {
				if (min > arr[i][1]) {
					min = arr[i][1];
					index = i;
				}
			}
		}
		if (min == pow(2, 31)) val = false;
		else {
			arr[index][1] = pow(2, 31);
			st = min;
			min = pow(2, 31);
			count++;
		}
	}
	cout << count << '\n';
	return 0;
}