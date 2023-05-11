#include<stdio.h>

void main()
{
	int n;
	printf("Enter the number of rows \n");
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=0; i<n; i++)
	{
		for(int j=n-i; j>0; j--)
		{
			printf(" ");
		}
		for(int j=0; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i=1; i<n+1; i++)
	{
		for(int j=n-i; j>=0; j--)
		{
			printf(" ");
		}
		for(int j=0; j<i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	int x=1;
	for(int i=0; i<n; i++)
	{
		for(int j=n-i; j>0; j--)
		{
			printf(" ");
		}
		for(int j=0; j<=i; j++)
		{
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
	for(int i=0; i<n; i++)
	{
		for(int j=n-i; j>0; j--)
		{
			printf(" ");
		}
		for(int j=0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
		}
	for(int i=1; i<n+1; i++)
	{
		for(int j=n-i; j>=0; j--)
		{
			printf(" ");
		}
		for(int j=0; j<i; j++)
		{
			printf("%c ", i+64);
		}
		printf("\n");
	}
	x=65;
	for(int i=0; i<n; i++)
	{
		for(int j=n-i; j>0; j--)
		{
			printf(" ");
		}
		for(int j=0; j<=i; j++)
		{
			printf("%c ",x);
			x++;
		}
		printf("\n");
	}
}
