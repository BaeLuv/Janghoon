// (세 자리 수) × (세 자리 수)의 곱셈과정을 표현하는 코드

#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n%d\n%d\n%d", a * (b % 10), a * ((b / 10) % 10), a * (b / 100), a * b);

	return 0;
}