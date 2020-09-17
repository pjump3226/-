#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int length = 0;
	long long i1 = atoi(s1.c_str());
	int i1_d = 0;
	long long i2 = atoi(s2.c_str());
	int i2_d = 0;
	int i = 0;
	long long result = 0;
	i1_d += (i1 % 10) * pow(2, i);
	while (i1/10 >0) {
		i++;
		i1 /= 10;
		i1_d += (i1 % 10) * pow(2, i);
	}
	i = 0;
	i2_d += (i2 % 10) * pow(2, i);
	while (i2 / 10 > 0) {
		i++;
		i2 /= 10;
		i2_d += (i2 % 10) * pow(2, i);
	}

	result = i1_d + i2_d;
	//cout << i1_d << " " << i2_d << '\n';
	
	while (result >= pow(2, i)) {
		i++;
	}
	if (result >= 1) i--;
	while (i>=0) {
		if (result >= pow(2, i)) {
			cout << 1;
			result -= pow(2, i);
		}
		else cout << 0;
		i--;
	}
	cout << '\n';
	return 0;
}