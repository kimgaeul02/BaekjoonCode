#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int size;
	scanf("%d", &size);

	int student, apple, left;
	int total=0;

	int* numPtr = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		//학생 수, 사과 수
		scanf("%d %d", &student, &apple);
		left = apple%student;
		total = total + left;
	}
	printf("%d", total);

}