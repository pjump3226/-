#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int arr[10] = { 0, };
	int index = 0;
	double max = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int num = s.at(i) - '0';
		arr[num]++;
		if (max < arr[num]) {
			index = num;
			max = arr[num];
		}
	}
	if (index == 6 || index == 9) {
		max = ((double)(arr[6] + arr[9]) / 2);
		cout << ceil(max) << '\n';
	}
	else {
		cout << max << '\n';
	}
	return 0;
}