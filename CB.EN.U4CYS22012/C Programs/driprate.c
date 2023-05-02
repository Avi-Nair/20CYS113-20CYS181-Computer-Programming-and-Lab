#include<stdio.h>

void main()
{
	float volume, time, rate;
	printf("Enter the volume of medication to be administered - \n");
	scanf("%f", &volume);
	printf("Enter the duration in which medicine needs to be administered (in minutes) - \n");
	scanf("%f", &time);
	time = time/60;
	rate = volume/time;
	printf("%10.2f ml to be administered at %2.3f ml/hr \n", volume, rate);
}
