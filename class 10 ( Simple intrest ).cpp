#include <stdio.h>
#include <math.h>
int main (){
	float p , t ,r ,si , ci;
	printf("Enter the principal amount (p) : ");
	scanf("%f" , &p);
	printf("Enter the time in yeaar (t) : ");
	scanf("%f" , &t);
	printf("Enter the rate in percent (r) : ");
	scanf("%f" , &r);
	
	si = (p*t*r)/100;
	ci = p*(pow(1+r/100, t) - 1);
	
	printf("Simple interest = %.3f " , si);
	printf("Compound interest = %.3f " ,ci);
	return 0;
	
}
