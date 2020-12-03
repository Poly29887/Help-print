#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x,a,b,i;
	printf("EVEN(0)/ODD(1) : ");
	scanf("%d", &x);
	printf("START : ");
	scanf("%d", &a);
	printf("FINAL : ");
	scanf("%d", &b);
	if (x == 0)
	{
		if (a % 2 != 0)
		{
			a += 1;
		}
		if (b % 2 != 0)
		{
			b -= 1;
		}
		while (a <= b)
		{
			printf("%d,",a);
			a += 2;
		}
	}
	else if (x == 1)
	{
		if (a % 2 == 0)
		{
			a += 1;
		}
		if (b % 2 == 0)
		{
			b -= 1;
		}
		while (a <= b)
		{
			printf("%d,", a);
			a += 2;
		}

	}
	printf("\n");
}