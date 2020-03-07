#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>//min�Լ��� �������� �ҷ��´�.
using namespace std;

int n;
int dp[100005];

int bottom_up(int n) {
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;//�켱 dp[i]�� dp[i-1]+1�� �صΰ�
		// j*j > i �� �Ǳ� �������� dp[i - j*j] + 1 �� ���Ͽ� �ּҰ��� �־�д�.
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