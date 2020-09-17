#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) - 'A' < 15)
			sum += (str.at(i) - 'A') / 3 + 3;
		else if (str.at(i) - 'A' < 19)
			sum += 8;
		else if (str.at(i) - 'A' < 22)
			sum += 9 ;
		else {
			sum += 10 ;
		}
	}
	cout << sum << '\n';
	return 0;
}