#include <iostream>
using namespace std;
bool arr[1001][1001];
bool visited[1001];
int n;

void dfs(int v) {
	visited[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (!visited[i] && arr[v][i]) {
			dfs(i);
		}
	}
}


int main() {
	int m;
	cin >> n >> m;
	int f, l;
	int count = 0;
	for (int i = 0; i < m; i++) {
		cin >> f >> l;
		arr[f][l] = arr[l][f] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			dfs(i);
			count++;
		}
	}
	cout << count << '\n';
	return 0;
}