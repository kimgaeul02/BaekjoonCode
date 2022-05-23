#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


char str[51]; //2-50 사이

int main(void) {

	int t = 0;
	scanf("%d", &t);
	//테스트 케이스 입력

	for (int i = 0; i < t; i++) {

		int count = 0;
		scanf("%s", str);

		for (int j = 0; j < strlen(str); j++) {
			if (count < 0)
				break;
			else if (str[j] == '(')
				count++;
			else if (str[j] == ')')
				count--;
		}
		if (count == 0)
			printf("YES\n");
		else printf("NO\n");
	}

}