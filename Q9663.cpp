#include <iostream>
#include <cmath>
using namespace std;
int map[15];
int n;
int result;

void dfs(int cnt) {
	bool val;
	if (cnt == n) {
		result++;
		return;
	}
	for (int i = 0; i < n; i++) {
		val = 1;
		for (int j = 0; j < cnt; j++) {
			if (map[j] == i || abs(cnt - j) == abs(i - map[j])) {
				val = 0;
				break;
			}
		}
		if (val) {
			map[cnt] = i;
			dfs(cnt + 1);
		}
	}
}

int main() {
	cin >> n;
	dfs(0);
	cout << result << '\n';
	return 0;
}