
#include<stdio.h>
int main(){
	int sum =0,n,r,armstrong;
	printf("Enter number :");
	scanf("%d",&n);
	armstrong =n;
	while(n!=0){
		r=n%10;
		sum = sum+r*r*r;
		n=n/10;
	}
	if(armstrong ==sum){
		printf("This is armstrong number");
	}
	else printf("This is not armstrong number");
	return 0;
}
