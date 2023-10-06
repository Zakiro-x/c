#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main()
{
	int n=0;
	scanf("%d", &n);
	int i,j;
	for (i = 1; i <= n ; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}