#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int N, K;
	int dp[201][201];

	scanf("%d %d", &N, &K);
	dp[1][1] = 1;

	for (int i = 2; i <= 201; i++) {
		dp[i][1] = 1;
		dp[1][i] = i;
	}
	
	for (int i = 2; i <= N; i++) {
		for (int j = 2; j <= K; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
		}
	}
	printf("%d", dp[N][K]);
}