#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int T, n;

int bottom_up(int n) {
	int dp[12] = {}; //모든 원소를 0으로 초기화
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++) dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	return dp[n];
}

int top_down(int n) {
	int dp[12] = {};
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 4;
	if (dp[n] > 0) return dp[n];
	return dp[n] = top_down(n - 3) + top_down(n - 2) + top_down(n - 1);
}

int main() {
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		printf("%d\n", bottom_up(n));
		//printf("%d\n", top_down(n));
	}
}