#include <string>
#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string str;
	bool arr[21] = {0,};
	int m, num;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (str == "add") {
			cin >> num;
			arr[num] = 1;
		}
		else if (str == "remove") {
			cin >> num;
			arr[num] = 0;
		}
		else if (str == "check") {
			cin >> num;
			cout << arr[num] << '\n';
		}
		else if (str == "toggle") {
			cin >> num;
			arr[num] = !arr[num];
		}
		else if (str == "all") {
			for (int j = 1; j <= 20; j++) {
				arr[j] = 1;
			}
		}
		else if (str == "empty") {
			for (int j = 1; j <= 20; j++) {
				arr[j] = 0;
			}
		}
	}
	return 0;
}