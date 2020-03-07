#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int n;
int dp[1005];

int bottom_up(int n) {

	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) dp[i] = (dp[i - 2] + dp[i - 1]) % 10007; // 오버플로우 방지

	return dp[n];
}

int top_down(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (dp[n] > 0) return dp[n];
	else {
		dp[n] = (top_down(n - 1) + top_down(n - 2)) % 10007;
	}
	return dp[n];
}

int main() {
	scanf("%d", &n);
	//printf("%d", bottom_up(n));
	printf("%d", top_down(n));
}