#include <stdio.h>

int main(void)
{
	int input, temp, res = 1, i;
	int val[20];

	scanf("%d", &input);

	if (input < 0)
	{
		printf("False");
		return 0;
	}

	for (i = 0; i < 100; i++)
	{
		temp = input % 10;
		val[i] = temp;
		input /= 10;
		if (input == 0) break;
	}
	
	if (i % 2 == 0)
	{
		for (int j = 0; j < i / 2; j++)
		{
			if (val[j] != val[i - j])
			{
				res = 0;
				break;
			}
		}
	}
	else if (i % 2 == 1)
	{
		for (int j = 0; j <= (i-1) / 2; j++)
		{
			if (val[j] != val[i - j])
			{
				res = 0;
				break;
			}
		}
	}

	if (res == 0) printf("False");
	else if (res == 1) printf("True");

	return 0;
}