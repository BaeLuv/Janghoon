//입력 받은 3개의 값을 내림차순으로 정렬 하는 프로그램

#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("\n정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (maxp < midp) swap(maxp, midp);
    if (maxp < minp) swap(maxp, minp);
    if (midp < minp) swap(midp, minp);
}