#include<stdio.h>
int main(){
	int n,sum=0,temp;
	printf("Enter an integer :");
	scanf("%d",&n);
	while(n!=0){
		r =n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The sum of digits :%d", sum);
	return 0;
	}


