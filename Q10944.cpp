#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int num;
	while (1) {
		srand((unsigned int)time(0));
		num = rand() % rand();
		if (num >= 1 && num <= 10000) break;
	}
	cout << num << '\n';
	return 0;
}