#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dp[1001];
int main() {
	int T;
	int i;
	dp[0] = dp[1] = 1;
	scanf("%d", &T);
	for (i = 2; i <= T; i++) {
		dp[i] = (dp[i - 1] + 2*dp[i - 2]) % 10007;
	}
	printf("%d", dp[T]);
}