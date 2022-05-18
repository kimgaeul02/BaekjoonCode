#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[100] = { 0, };
	scanf("%s", &str);

	int alphabet[26] = { 0, };

	for (int a = 0; a <= strlen(str); a++) {
		for (int i = 0; i <26; i++) {
			if (str[a] - 'a' == i)
				alphabet[i]++;
		}
	}

	for (int a = 0; a < 26; a++) {
		printf("%d ", alphabet[a]);
	}

	return 0;
}