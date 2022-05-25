#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {

	long long arr[91] ;

	int n, i;
	scanf("%d", &n);

	arr[0] = 0;
	arr[1] = arr[2] = 1;

	for (i = 3; i <= n; ++i) {
		arr[i] = arr[i - 1] + arr[i - 2]; //피보나치 수열과 흡사
	}
	printf("%lld\n", arr[n]);
	return 0;
}