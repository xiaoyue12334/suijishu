#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int a, b, c, num, i;
	printf("输入随机区间：");
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		printf("ERROR");
		exit(0);
	}
	printf("\n输入随机个数：");
	scanf("%d", &c);
	if (c <= 0)
	{
		printf("ERROR");
		exit(0);
	}
	srand((unsigned int)time(NULL));
	for (i=1;i<=c;i++)
	{
		num = rand() % (b + 1 - a) + a;
		printf("%d\t", num);
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
	if (c % 10 != 0)
		printf("\n");
}
