#include <iostream>
using namespace std;

int main() {
	int n;
	int c = 1; // depth
	int sum, index, one_side;
	cin >> n;
	while (1) {
		if (n>= (c*(c-1)/2)+1 && n<= (c*(c+1)/2))  {
			index = n - (c*(c - 1) / 2);
			break;
		}
		c++;
	}
	sum = c + 1; // 분모 분자 합
	one_side = sum - index;
	
	if (c % 2 == 0) {
		cout << index << "/" << one_side << '\n';
	}
	else {
		cout << one_side << "/" << index << '\n';
	}
	return 0;
}