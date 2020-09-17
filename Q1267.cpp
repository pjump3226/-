#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ysum = 0;
	int msum = 0;
	for (int i = 0; i < n; i++) {
		int num;
		int y, m;
		cin >> num;
		if (num % 30 == 0) y = ((num / 30)+1) * 10;
		else y= ceil((double)num / 30) * 10;
		ysum += y;
		if (num % 60 == 0) m = ((num / 60)+1) * 15;
		else m = ceil((double)num / 60) * 15;
		msum += m;
	}
	if (ysum < msum) cout << "Y " << ysum << '\n';
	else if (ysum == msum) cout << "Y M " << ysum << '\n';
	else cout << "M " << msum << '\n';
	return 0;
}