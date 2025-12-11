#include<stdio.h>
int main(){
	float h , b , area;
	printf("Enter  height : ");
	scanf("%f", &h);
	printf("Enter  base : ");
	scanf("%f", &b);
	area = 0.5*h*b;
	printf("The area of triangle is %.2f", area);
	return 0;
}
