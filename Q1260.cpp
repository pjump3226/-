#include <iostream>
#include <queue>
using namespace std;
bool arr[1001][1001];
bool visited1[1001];
bool visited2[1001];
queue<int> q;

void dfs(int v, int n) {
	visited1[v] = 1;
	cout << v << " ";
	for (int i = 1; i <= n; i++) {
		if (!visited1[i] && arr[v][i])
			dfs(i, n);
	}
}

void bfs(int v, int n) {
	visited2[v] = 1;
	cout << v << " ";
	q.push(v);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (!visited2[i] && arr[node][i]) {
				visited2[i] = 1;
				cout << i << " ";
				q.push(i);
			}
		}
	}
}


int main() {
	int n, m, v;
	cin >> n >> m >> v;
	int f, l;
	for (int i = 0; i < m; i++) {
		cin >> f >> l;
		arr[f][l] = arr[l][f] = 1;
	}
	dfs(v, n);
	cout << '\n';
	bfs(v, n);
	cout << '\n';
	return 0;
}