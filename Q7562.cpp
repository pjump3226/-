#include <iostream>
#include <queue>

using namespace std;
int board[300][300];
int sr, sc;
int dr, dc;
int direction[8][2] = { {-1,-2},{-2,-1},{-2,1},{-1,2}, {1,-2},{2,-1}, {2,1},{1,2} };


int bfs(int l) {
	queue<pair<int, int>> q;
	int cnt = 0;
	bool val = 0;
	bool visited[300][300] = {0, };
	q.push(make_pair(sr, sc));
	visited[sr][sc] = 1;

	while (!q.empty()) {
		int sz = q.size();
		int r, c, r2, c2;

		for (int i = 0; i < sz; i++) {
			r = q.front().first;
			c = q.front().second;
			if (r == dr && c == dc) {
				val = 1;
				break;
			}
			q.pop();
			for (int i = 0; i < 8; i++) {
				r2 = r + direction[i][0];
				c2 = c + direction[i][1];
				if (r2 < 0 || r2 >= l || c2 < 0 || c2 >= l) {
					continue;
				}
				if (!visited[r2][c2]) {
					q.push(make_pair(r2, c2));
					visited[r2][c2] = 1;
					
				}
			}
		}
		if (val) break;
		cnt++;
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int l;
		cin >> l;
		cin >> sr >> sc >> dr >> dc;
		if (sr == dr && sc == dc) {
			cout << 0 << '\n';
		}
		else {
			cout << bfs(l) << '\n';
		}
	}
	
	return 0;
}