#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C;
	int num1, num2, num3, num4;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	num1 = (A + B) % C;
	num2 = ((A % C) + (B % C)) % C;
	num3 = (A * B) % C;
	num4 = ((A % C) * (B % C)) % C;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);

}