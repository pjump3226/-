#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;
int arr[500001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int min, max, mode;
	double avg;
	min = 4000;
	max = -4000;
	map<int, int> m;
	double sum = 0;
	cin >> n;
	map<int, int>::iterator itor;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
		itor = m.find(arr[i]);
		if (m.empty()) {
			m[arr[i]] = 1;
		}
		else {
			if (itor != m.end()) {
				m[arr[i]]++;
			}
			else m[arr[i]] = 1;
		}
	}
	sort(arr, arr + n);
	avg = sum / n;
	int range = max - min;
	cout << round(avg)<< '\n';
	cout << arr[n/2] << '\n';
	int count = 0;
	max = 0;
	for (auto it = m.begin(); it != m.end(); it++) {
		if (max < it->second) {
			max = it->second;
			mode = it->first;
		}
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		if (max == it->second) {
			count++;
		}
		if (count == 2) {
			mode = it->first;
			break;
		}
	}
	cout << mode << '\n';
	cout << range << '\n';

	return 0;
}