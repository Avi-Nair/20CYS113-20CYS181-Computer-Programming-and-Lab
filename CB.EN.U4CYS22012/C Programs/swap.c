#include<stdio.h>
void main()
{
	int num1, num2;
	printf("Enter the first number n \n");
	scanf("%d", &num1);
	printf("Enter the second number n \n");
	scanf("%d", &num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("The first number is now %d and the second number is now %d \n", num1, num2);
}
