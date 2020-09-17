#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int LCS[1001][1001];

int main() {
	string str1, str2;
	cin >> str1 >> str2;

	int s1 = str1.size();
	int s2 = str2.size();

	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			if (str1[i - 1] == str2[j - 1]) {
				LCS[i][j] = LCS[i - 1][j - 1] + 1;
			}
			else {
				LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
			}
		}
	}

	cout << LCS[s1][s2] << '\n';

	return 0;
}