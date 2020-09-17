#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
string arr[100001];
string brr[100001];

int main() {
	int n, m;
	string s;
	map<string, int> mp;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		brr[i] = arr[i];
		mp[arr[i]] = i;
	}
	sort(brr+1, brr + n +1);
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (atoi(s.c_str())) {
			num = atoi(s.c_str());
			cout << arr[num] << '\n';
		}
		else {
			int left = 1;
			int right = n;
			int result;
			while (left <= right) {
				int mid = (left + right) / 2;
				if (s < brr[mid]) {
					right = mid - 1;
				}
				else {
					result = mid;
					left = mid + 1;
				}
			}
			cout << mp[brr[result]] << '\n';
		}
	}
	return 0;
}