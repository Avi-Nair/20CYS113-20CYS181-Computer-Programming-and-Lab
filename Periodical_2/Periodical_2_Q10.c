#include<stdio.h>

struct compno{
	float realpart, imgpart;
	}a,b,c;
	
void main(){

	printf("Enter first complex number, real and img part seperated by space\n");
	scanf("%f %f", &a.realpart, &a.imgpart);
	printf("Enter second complex nuber same as first");
	scanf("%f %f", &b.realpart, &b.imgpart);
	c.realpart = (a.realpart*b.realpart)-(a.imgpart*b.imgpart);
	c.imgpart = (a.realpart*b.imgpart)+(a.imgpart*b.realpart);
	printf("The product of given 3 complex numbers is: \n");
	printf("%f + %fi \n",c.realpart,c.imgpart);

}
