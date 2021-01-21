#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int s[21][21];
bool sel[21];
int start, link;
int result = 10000000;

void dfs(int num, int cnt) {
	if (cnt == n / 2) {
		vector<int> v1, v2;
		for (int i = 1; i <= n; i++) {
			if (sel[i]) v1.push_back(i);
			else v2.push_back(i);
		}
		for (int i = 0; i < v1.size(); i++) {
			for (int j = 0; j < v1.size(); j++) {
				if (i != j) {
					start += s[v1[i]][v1[j]];
				}
			}
		}
		for (int i = 0; i < v2.size(); i++) {
			for (int j = 0; j < v2.size(); j++) {
				if (i != j) {
					link += s[v2[i]][v2[j]];
				}
			}
		}
		if (start >= link) result = min(result, start - link);
		else result = min(result, link - start);
		start = 0; link = 0;
		return;
	}
	for (int i = num; i <= n; i++) {
		if (!sel[i]) {
			sel[i] = 1;
			dfs(i, cnt + 1);
			sel[i] = 0;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> s[i][j];
		}
	}
	dfs(1, 0);
	cout << result << '\n';
	return 0;
}