#include <iostream>
using namespace std;
bool map[50][50];
bool visited[50][50];
int direction[4][2] = { {-1,0}, {0,1}, {1, 0}, {0,-1} };

int main() {
	int n, m, r, c, d;
	int result = 0;
	cin >> n >> m >> r >> c >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	while (1) {
		bool val = 0;
		int newd;
		if (!visited[r][c]) {
			visited[r][c] = 1;
			result++;
		}
		for (int i = 3; i >=0; i--) {
			newd = (d + i) % 4;
			if (!map[r + direction[newd][0]][c + direction[newd][1]] &&!visited[r + direction[newd][0]][c + direction[newd][1]]) {
				r += direction[newd][0];
				c += direction[newd][1];
				d = newd;
				val = 1;
				break;
			}
		}
		if (val) continue;
		if (!map[r - direction[d][0]][c - direction[d][1]]) {
			r -= direction[d][0];
			c -= direction[d][1];
		}
		else {
			break;
		}

	}

	cout << result << '\n';
	return 0;
}