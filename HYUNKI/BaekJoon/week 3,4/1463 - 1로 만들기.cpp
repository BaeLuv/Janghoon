#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[1000005];

int bottom_up(int n) {

	dp[0] = 0;
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
	}

	return dp[n];
}

int top_down(int n) {
	if (n == 1) return 0;
	if (dp[n] > 0) return dp[n];
	else {
		dp[n] = top_down(n - 1) + 1;
		if (n % 2 == 0) dp[n] = min(dp[n], top_down(n / 2) + 1);
		if (n % 3 == 0) dp[n] = min(dp[n], top_down(n / 3) + 1);
	}
	return dp[n];
}

int main() {
	scanf("%d", &n);
	printf("%d", top_down(n));
	//printf("%d", bottom_up(n));
}