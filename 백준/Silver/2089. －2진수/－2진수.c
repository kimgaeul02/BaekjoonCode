#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num;


void binary(int N) {


	if (N == 0) return 0;
	if (N % -2 == 0) {
		binary(N / -2);
		printf("0");
	}
	else {
		binary((N - 1) / -2);
		printf("1");
	}
	return;


}


int main() {

	scanf("%d", &num);
	if (num == 0) {
		printf("0");
		return 0;
	}
	binary(num);
	return 0;

}
