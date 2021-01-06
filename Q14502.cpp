#include <iostream>
#include <queue>
using namespace std;
int n, m;
int map[8][8];
int direction[4][2] = { {-1, 0}, {1, 0},{0, -1}, {0, 1} };
int MAX = 0;

void bfs() {
	int temp[8][8];
	bool visited[8][8] = { 0, };
	queue<pair<int, int>> q;
	int r, c;
	int area = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			temp[i][j] = map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (temp[i][j] == 2) {
				q.push(make_pair(i, j));
				visited[i][j] = 1;
			}
		}
	}

	while (!q.empty()) {
		r = q.front().first;
		c = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int xpos = r + direction[i][0];
			int ypos = c + direction[i][1];
			if (xpos >= 0 && xpos < n && ypos >= 0 && ypos < m) {
				if (temp[xpos][ypos] == 0 && !visited[xpos][ypos]) {
					temp[xpos][ypos] = 2;
					q.push(make_pair(xpos, ypos));
					visited[xpos][ypos] = 1;
				}
			}

		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (temp[i][j] == 0 && !visited[i][j]) {
				area++;
			}
		}
	}

	if (area > MAX) MAX = area;
	return;
}

void erectWall(int cnt)
{

	if (cnt == 3)
	{
		bfs();
		return;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0) {
				map[i][j] = 1;
				erectWall(cnt+1);
				map[i][j] = 0;
			}
		}
	}

	return;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	erectWall(0);

	cout << MAX << '\n';
	return 0;
}