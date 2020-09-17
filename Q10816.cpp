#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int arr[500001];
int crr[500001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	int min = 10000000;
	int max = -10000000;
	map< int, int > mp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		map< int, int >::iterator itor = mp.find(arr[i]);
		if (mp.empty()) {
			mp[arr[i]] = 1;
		}
		else {
			if (itor != mp.end()) {
				mp[arr[i]]++;
			}
			else {
				mp[arr[i]] = 1;
			}
		}
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cin >> m;
	sort(arr, arr + n);
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		int left = 0;
		int right = n - 1;
		int count = 0;
		int index;
		if(num <min || num > max) {}
		else {
			while (left <= right) {
				index = (left + right) / 2;
				if (num == arr[index]) {
					count++;
					break;
				}
				if (num > arr[index]) {
					left = index + 1;
				}
				else if (num < arr[index]) {
					right = index - 1;
				}
			}
		}
		if (count) {
			int indx = index -1;
			cout << mp.find(num)->second << '\n';
		}
		else cout << count << '\n';
	}
	return 0;
}