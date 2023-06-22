#include<stdio.h>

void main()
{
	int n;
	printf("Enter the number of rows \n");
	scanf("%d",&n);
	
	int values[n];
	for (int i=0; i<n; i++)
	{
		values[i]=0;
	}
	values[n-1]=1;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (values[j]==0)
			printf(" ");
			else
			printf("%d ", values[j]);
		}
		for (int k=0; k<n-1; k++)
		{
			values[k]+=values[k+1];
		}
		printf("\n");
	}
}
