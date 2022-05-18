#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char number[101];
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long A, B;

    sprintf(number, "%lld%lld %lld%lld", a, b, c, d);
    sscanf(number, "%lld %lld", &A, &B);

    printf("%lld\n", A + B);

    return 0;
}

