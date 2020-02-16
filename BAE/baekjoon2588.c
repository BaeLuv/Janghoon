#include <stdio.h>

int main(void)
{
	int a, b;
	int res1, res2, res3, res4;

	scanf("%d %d", &a, &b);
	
	res1 = a * (b % 10);
	res2 = a * ((b / 10) % 10);
	res3 = a * (b / 100);
	res4 = a * b;
	
	printf("%d\n%d\n%d\n%d", res1, res2, res3, res4);

	return 0;
}