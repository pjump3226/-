#include <iostream>
using namespace std;

int main() {
	int N, m, M, T, R;
	cin >> N >> m >> M >> T >> R;
	int X = m;
	int count = 0; // � Ƚ��
	int time = 0; //  �ð�
	if (m + T > M) cout << -1 << '\n';
	else {
		while (count != N) {
			// �޽�
			if (X + T > M) {
				if (X - R < m) X = m;
				else X -= R;
			}
			// �
			else {
				X += T;
				count++;
			}
			time++;
		}
		cout << time << '\n';
	}
	return 0;
}