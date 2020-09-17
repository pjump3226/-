#include <iostream>
#include <string>
#include <queue>
using namespace std;
bool arr[101][101];
bool visited[101][101];
queue<int> q;

int bfs(int n, int m) {
	int count = 0;
	visited[0][0] = 1;
	q.push(0);
	q.push(0);
	bool val = false;
	while (!q.empty()) {
		int size = q.size() / 2;
		for (int i = 0; i < size; i++) {
			int r = q.front();
			q.pop();
			int c = q.front();
			q.pop();
			if (r == n-1 && c == m-1) {
				val = true;
				break;
			}
			if (r-1>=0 && arr[r - 1][c] && !visited[r - 1][c]) {
				visited[r - 1][c] = 1;
				q.push(r - 1); q.push(c);
			}
			if (r+1<n && arr[r + 1][c] && !visited[r + 1][c]) {
				visited[r + 1][c] = 1;
				q.push(r + 1); q.push(c);
			}
			if (c-1>=0 && arr[r][c - 1] && !visited[r][c - 1]) {
				visited[r][c - 1] = 1;
				q.push(r); q.push(c - 1);
			}		
			if (c+1<m && arr[r][c + 1] && !visited[r][c + 1]) {
				visited[r][c + 1] = 1;
				q.push(r); q.push(c + 1);
			}
		}
		count++;
		if (val) break;
	}
	return count;
}

int main() {
	int n, m;
	string s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s.at(j) - '0';
		}
	}
	cout << bfs(n, m) << '\n';
	return 0;
}