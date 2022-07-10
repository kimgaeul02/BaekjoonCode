#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);
	
	int max = N / 2 <= M ? N / 2 : M;
	int R = K - (N + M - 3 * max);

	if (R > 0) {
		R--;
		max -= R / 3 + 1;
	}

	printf("%d\n", max);
	return 0;
}