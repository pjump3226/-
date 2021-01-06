#include <iostream>
#include <queue>
using namespace std;

char map[100][100];
bool visited[100][100];
int n, m;
int w_sum, b_sum;
queue<pair<int, int>> q;
int direction[4][2] = { {-1, 0},{1, 0 }, {0,-1},{0,1} };

void bfs() {
	bool val = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j]) {
				if (map[i][j] == 'W') val = 0;
				else val = 1;
				q.push(make_pair(i, j));
				visited[i][j] = 1;
				cnt++;
				while (!q.empty()) {
					int r, c;
					int xpos, ypos;
					r = q.front().first;
					c = q.front().second;
					q.pop();
					for (int k = 0; k < 4; k++) {
						xpos = r + direction[k][0];
						ypos = c + direction[k][1];
						if (xpos >= 0 && xpos < n && ypos >= 0 && ypos < m) {
							if (!visited[xpos][ypos] && map[xpos][ypos] == map[r][c]) {
								q.push(make_pair(xpos, ypos));
								visited[xpos][ypos] = 1;
								cnt++;
							}
						}
					}
				}
				if (val) b_sum += (cnt*cnt);
				else w_sum += (cnt*cnt);
				cnt = 0;
			}
		}
	}
}

int main() {
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	bfs();

	cout << w_sum << " " << b_sum << '\n';
	return 0;
}