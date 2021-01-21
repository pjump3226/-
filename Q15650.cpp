#include <iostream>
#include <vector>
using namespace std;
int n, m;
bool sel[9];
vector<int> v;

void dfs(int num, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << '\n';
	}
	for (int i = num; i <= n; i++) {
		if (!sel[i]) {
			v.push_back(i);
			sel[i] = 1;
			dfs(i, cnt + 1);
			v.pop_back();
			sel[i] = 0;
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(1, 0);
	return 0;
}