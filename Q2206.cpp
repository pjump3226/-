#include <iostream>
#include <string>
#include <queue>
using namespace std;
bool visited[1001][1001][2];
bool arr[1001][1001];
int n, m;
queue<int> q;

int bfs() {
	int count = 1;
	visited[1][1][0] = 1;
	q.push(1); q.push(1); q.push(0);
	bool val;
	while (!q.empty()) {
		val = false;
		int size = q.size() / 3;
		//cout << "level : " << count << '\n';
		for (int i = 0; i < size; i++) {
			int r = q.front();
			q.pop();
			int c = q.front();
			q.pop();
			bool block = q.front();
			q.pop();
			//cout << "r : " << r << " c : " << c << '\n';
			if (r == n && c == m) {
				val = true;
				break;
			}
			if (r - 1 >= 1 && !arr[r - 1][c] && !visited[r-1][c][block]) {
				q.push(r - 1); q.push(c); q.push(block);
				visited[r - 1][c][block] = 1;
			}
			else if (r - 1 >= 1 && arr[r - 1][c]) {
				if (!block) {
					q.push(r - 1); q.push(c); q.push(1);
					visited[r - 1][c][1] = 1;
				}
			}

			if (r + 1 <= n && !arr[r + 1][c] && !visited[r + 1][c][block]) {
				q.push(r + 1); q.push(c); q.push(block);
				visited[r + 1][c][block] = 1;
			}
			else if (r + 1 <= n && arr[r + 1][c]) {
				if (!block) {
					q.push(r + 1); q.push(c); q.push(1);
					visited[r + 1][c][1] = 1;
				}
			}

			if (c - 1 >= 1 && !arr[r][c - 1] && !visited[r + 1][c][block]) {
				q.push(r); q.push(c - 1); q.push(block);
				visited[r][c - 1][block] = 1;
			}
			else if (c-1 >=1 && arr[r][c-1]) {
				if (!block) {
					q.push(r); q.push(c - 1); q.push(1);
					visited[r][c - 1][1] = 1;
				}
			}

			if (c + 1 <= m && !arr[r][c + 1] && !visited[r][c + 1][block]) {
				q.push(r); q.push(c + 1); q.push(block);
				visited[r][c + 1][block] = 1;
			}
			else if (c + 1 <= m && arr[r][c+1]) {
				if (!block) {
					q.push(r); q.push(c + 1); q.push(1);
					visited[r][c + 1][1] = 1;
				}
			}

		}
		if (val) break;
		count++;
	}
	if (!val) count = -1;
	return count;
}

int main() {
	string s;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		for (int j = 1; j <= m; j++) {
			arr[i][j] = s.at(j-1) - '0';
		}
	}
	cout << bfs() << '\n';
	return 0;
}