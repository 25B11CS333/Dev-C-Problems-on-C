#include<stdio.h>
int main(){
	float a , b , c ,d , e;
	printf(" Enter marks of 5 subjects :");
	scanf("%f %f %f %f %f" ,&a,&b,&c,&d,&e);
	
	printf("Total marks : %.0f" , a+b+c+d+e);
	printf("Average marks : %.2f" , (a+b+c+d+e)/5);
	
}
