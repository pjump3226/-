#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[300001];
bool visited[300001];
queue<int> q;
vector<int> answer;


void bfs(int k, int x, int n) {
	// 길이가 k일때 출력 및 종료
	int len = 0;
	bool val = 0;
	q.push(x);
	visited[x] = 1;

	while (!q.empty()) {
		int sz = q.size();
		for (int i = 0; i < sz; i++) {
			int node;
			node = q.front();
			if (len == k) {
				answer.push_back(node);
				val = 1;
			}
			q.pop();
			if (len < k) {
				for (int i = 0; i < v[node].size(); i++) {
					if (!visited[v[node][i]]) {
						q.push(v[node][i]);
						visited[v[node][i]] = 1;
					}
				}
			}
		}
		if (val || q.empty()) break;
		len++;
	}
	sort(answer.begin(), answer.end());
	if (answer.size()) {
		for (int i = 0; i < answer.size(); i++) {
			cout << answer[i] << '\n';
		}
	}
	else cout << -1 << '\n';
	return;
}


int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int n, m, k, x;
	int r, c;
	cin >> n >> m >> k >> x;

	for (int i = 0; i < m; i++) {
		cin >> r >> c;
		v[r].push_back(c);
	}

	bfs(k, x, n);
	return 0;
}