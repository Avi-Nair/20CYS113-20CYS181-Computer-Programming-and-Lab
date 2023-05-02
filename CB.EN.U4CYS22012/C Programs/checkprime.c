#include<stdio.h>
#include<math.h>

void main()
{
	int n, check;
	check = 0;
	printf("Enter the number you wish to check \n");
	scanf("%d", &n);
	for (int loopcount = 2; loopcount <= (int)pow(n, 0.5); loopcount++)
	{
		if (n % loopcount == 0)
		{
			check++;
			break;
		}
	}
	if (check == 0 && n >1)
	{
		printf("The number %d is prime \n", n);		
	}
	else
	{
		printf("The number %d is not prime", n);		
	}
}
