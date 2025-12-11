#include<stdio.h>
int main(){
	float l , b , area;
	printf("Enter  length : ");
	scanf("%f", &l);
	printf("Enter  breadth : ");
	scanf("%f", &b);
	area = l*b;
	printf("The area of rectangle is %.2f", area);
	return 0;
}
