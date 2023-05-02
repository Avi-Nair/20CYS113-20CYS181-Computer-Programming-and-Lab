#include<stdio.h>

void main()
{
	float t, T;
	printf("Enter the time since power failure in hours- \n");
	scanf("%f", &t);
	T = (4*t*t)/(t+2)-20;
	printf("\n The current freezer temperature is - %f degrees \n", T);
}
