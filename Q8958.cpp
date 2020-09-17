#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char str[80] = { ' ', };
		cin >> str;
		int k = 0;
		int score = 0;
		int a = 0;
		for (int j = 0; j < 80; j++) {
			if (str[j] == ' ') { 
				a = 0; 
				break; 
			}
			else if (str[j] == 'O') {
				++a;
				score += a;
			}
			else a = 0; 
		}
		cout << score << '\n';
	}
	return 0;
}