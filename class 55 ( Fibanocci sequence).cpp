#include<stdio.h>
int fib(int i)
{
	if(i<=1){
		return i;
	}
	else {
		return fib(i-1)+fib(i-2);
	}
}

int main(){
	int n , i;
	printf("Enter the no of terms in the fibanocci sequence :" );
	scanf("%d", &n);
	printf("Fibanocci sequence : \n");
	for(i=0;i<n;i++){
		printf("%d",fib(i));
	}
	return 0;
}
