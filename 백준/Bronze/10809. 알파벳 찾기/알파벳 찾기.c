#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[100] = { 0, };
	int alphabet[26];
	scanf("%s", &str);


	for (int i = 0; i < 26; i++) {
		alphabet[i] = 100;
	}

	for (int j = 0; j < strlen(str); j++) {
		int idx = str[j] - 'a';
		if (alphabet[idx] > j)
			alphabet[idx] = j;
	}

	for (int a = 0; a < 26; a++) {
		if (alphabet[a] == 100) {
			printf("-1 ");
		}
		else {
			printf("%d ", alphabet[a]);

		}
	}

	return 0;
}