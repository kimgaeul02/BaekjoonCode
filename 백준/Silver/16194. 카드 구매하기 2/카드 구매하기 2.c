#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dp[1001] = { 0 }; // 카드 수
int arr[1001] = { 0 }; // 카드 가격


int buy(int n) {
	dp[0] = 0;
	int min, tmp;
	int i; // 사야 하는 카드
	int j; // 구매할 카드팩

	for (i = 1; i <= n; i++) {
		min = arr[1] + dp[i - 1];
		for (j = 2; j <= i; j++) {
			tmp = arr[j] + dp[i - j];
			
			if (tmp < min) {
				min = tmp;
			}
		}
		dp[i] = min;
	}
	return dp[n];
}

int main() {
	int n;
	int i;
	scanf("%d", &n);

	//테스트케이스
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d", buy(n));
}