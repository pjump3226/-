#include <iostream>
using namespace std;
int arr[13];
int result[6];

void func(int a, int b) {
	
	result[b] = 
	for (int i = a; i < 13; i++) {
		func(a,++b)
	}
}

int main() {
	int k;
	while (cin >> k) {
		if (k == 0) return 1;
		for (int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		func(0, 0);
	}
	return 0;
}