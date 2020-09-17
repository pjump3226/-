#include <iostream>
long long dp[100001];
using namespace std;

int main() {
	int a = 50;
	int *b;
	b = &a;
	*b = *b + 20;
	printf("%d %d \n", &a, b);
	printf("%8.6s\n", "help me");
	//int n;
	//cin >> n;
	//dp[0] = 1;
	//dp[1] = 3;
	//for (int i = 2; i <= n; i++) {
	//	dp[i] = 2*dp[i - 1] + dp[i - 2];
	//	dp[i] %= 9901;
	//}
	//cout << dp[n] << '\n';
	return 0;
}