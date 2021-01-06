#include <iostream>
#include <queue>
using namespace std;

char map[51][51];
bool visited[51][51];
queue<pair<int, int>> q;
int t = 0;
int r, c;
int direction[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

void bfs() {
	int cnt = 0;
	int row, col;
	int row2, col2;
	bool val = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (map[i][j] == '*') {
				visited[i][j] = 1;
				q.push(make_pair(i, j));
			}
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (map[i][j] == 'S') {
				visited[i][j] = 1;
				q.push(make_pair(i, j));
			}
		}
	}
	while (!q.empty()) {
		t++;
		cnt = q.size();
		for (int i = 0; i < cnt; i++) {
			row = q.front().first;
			col = q.front().second;
			q.pop();
			for (int j = 0; j < 4; j++) {
				row2 = row + direction[j][0];
				col2 = col + direction[j][1];
				if (row2 < 0 && row2 >= r && col2 < 0 && col2 >= c)
					continue;
				if (map[row2][col2] == 'D') {
					if (map[row][col] == 'S') {
						cout << t << '\n';
						return;
					}
				}
				if (map[row2][col2] == '.' && !visited[row2][col2]) {
					visited[row2][col2] = 1;
					map[row2][col2] = map[row][col];
					q.push(make_pair(row2, col2));
				}
			}
		}
	}
	cout << "KAKTUS" << '\n';
	return;
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}
	bfs();
	return 0;
}