#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n,i,j;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 2 * n - 2 * i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < n + 1; i++)
		{
			printf("*");
		}
		printf("\n");
		for (i = n - 1; i >= 0; i--)
		{
			for (j = 0; j < 2 * n - 2 * i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}