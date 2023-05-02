# include<stdio.h>
void main()
{
	double total, students, avg;
	printf("Enter the total marks \n");
	scanf("%lf", &total);
	printf("\n %lf ", total);
	printf("Enter the number of students \n");
	scanf("%lf", &students);
	printf("\n %lf ", students);
	avg = total / students;
	printf("The average mark of the students is %f \n", avg);
}
