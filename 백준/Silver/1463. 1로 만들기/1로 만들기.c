#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//대소 비교 함수
int min(int a, int b) {
	if (a <= b)
		return a;
	else
		return b;
}


int cal(int a) {

	int arr[1000001] = {0};

	if (a == 1) {
		return arr[0];
	}

	for (int i = 2; i <= a; i++) {
		
		arr[i] = arr[i - 1] + 1; // -1 연산 횟수

		if (i % 2 == 0) {
			arr[i] = min(arr[i], arr[i / 2] + 1);	// -1 연산과 나누기 2 연산 횟수 비교
		}

		if (i % 3 == 0) {
			arr[i] = min(arr[i], arr[i / 3] + 1); // -1 연산과 나누기 3 연산 횟수 비교

		}
	}
		return arr[a];
	
}


int main() {

	int x;
	scanf("%d", &x);
	printf("%d", cal(x));
		
}