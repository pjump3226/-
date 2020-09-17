#include <iostream>
using namespace std;
bool arr[1001];
int tri[100];

int main() {
	int num;
	for (int i = 1; i < 46; i++) {
		tri[i] = ((i + 1)*i)/ 2;
	}

	for (int i = 1; i < 46; i++) {
		for (int j = 1; j < 46; j++) {
			for (int k = 1; k < 46; k++) {
				num = tri[i] + tri[j] + tri[k];
				if (num <= 1000) {
					arr[num] = 1;
				}
			}
		}
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> num;
		cout << arr[num] << '\n';
	}
	return 0;
}