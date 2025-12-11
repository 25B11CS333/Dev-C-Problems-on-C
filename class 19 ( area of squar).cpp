#include<stdio.h>
int main(){
	float f , area;
	printf("Enter side length ");
	scanf("%f", &f);
	area = f*f;
	printf("The area of square is %.2f", area);
	return 0;
}
