#include <iostream>
#include <queue>
using namespace std;
int map[200][200];
bool visited[200][200];
int n, k, s, x, y;
queue<pair<int, int>> q;
int direction[4][2] = { {-1,0}, {1,0},  {0, -1}, {0, 1} };

void bfs() {
	int time = 0;
	for (int l = 1; l <= k; l++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] == l) {
					visited[i][j] = 1;
					q.push(make_pair(i, j));
				}
			}
		}
	}

	while (!q.empty() && time<s) {
		int sz = q.size();
		int r, c;
		for (int i = 0; i < sz; i++) {
			r = q.front().first;
			c = q.front().second;
			q.pop();
			for (int j = 0; j < 4; j++) {
				int xpos = r + direction[j][0];
				int ypos = c + direction[j][1];
				if (xpos >= 0 && xpos < n && ypos >= 0 && ypos < n) {
					if (!map[xpos][ypos]&& !visited[xpos][ypos]) {
						q.push(make_pair(xpos, ypos));
						visited[xpos][ypos] = 1;
						map[xpos][ypos] = map[r][c];
					}
				}
			}
		}
		time++;
	}
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	cin >> s >> x >> y;

	bfs();

	cout << map[x-1][y-1] << '\n';
	return 0;
}