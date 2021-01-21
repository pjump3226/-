#include <iostream>
#include <string>
using namespace std;

string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int month[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

int main() {
	int x, y;
	int sum = 0;
	cin >> x >> y;
	for (int i = 0; i < x-1; i++) {
		sum += month[i];
	}
	sum += y;
	cout << day[sum % 7] << '\n';
	return 0;
}