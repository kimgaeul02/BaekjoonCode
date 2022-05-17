#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int count;

int GCF(int a, int b) {
	if (b == 0)
		return a;
	return GCF(b, a % b);
}

int main() {

	int x, y;

	scanf("%d", &count);
	
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &x, &y);
		printf("%d\n", x * y / GCF(x,y));
	}

}