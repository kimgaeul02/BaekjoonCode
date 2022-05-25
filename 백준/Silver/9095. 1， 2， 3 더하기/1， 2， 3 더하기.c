#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[11] = { 0 };

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	int T, n;

	//테스트 케이스
	scanf("%d", &T);

	//입출력
	for (int count = 0; count < T; count++) {
		scanf("%d", &n);
		printf("%d\n", arr[n]);
	}

	return 0;
}