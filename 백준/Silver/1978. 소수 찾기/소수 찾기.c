#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, i, j;
	int num, flags, cnt = 0;

	scanf("%d", &n);


	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		flags = 0;

		if (num == 1)
			continue;

		for (j = 2; j < num; j++)
			if (num % j == 0)
				flags = 1;
			if (flags == 0)
				if (j==num) {
					cnt++;
				}
	}
	printf("%d\n", cnt);
	
	return 0;

}