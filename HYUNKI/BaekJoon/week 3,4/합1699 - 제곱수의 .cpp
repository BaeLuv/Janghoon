#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>//min함수를 쓰기위해 불러온다.
using namespace std;

int n;
int dp[100005];

int bottom_up(int n) {
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;//우선 dp[i]를 dp[i-1]+1로 해두고
		// j*j > i 가 되기 전까지의 dp[i - j*j] + 1 과 비교하여 최소값을 넣어둔다.
		for (int j = 1; j * j <= i; j++) dp[i] = min(dp[i], dp[i - j * j] + 1);
	}
	return dp[n];
}

int top_down(int n) {
	if (n == 0) return 0;
	if (dp[n] > 0) return dp[n];
	dp[n] = top_down(n - 1) + 1;
	for (int i = 1; i * i <= n; i++) dp[n] = min(dp[n], top_down(n - i * i) + 1);
	return dp[n];

}

int main() {
	scanf("%d", &n);
	printf("%d", bottom_up(n));
	//printf("%d", top_down(n));
}