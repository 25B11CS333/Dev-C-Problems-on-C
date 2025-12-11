#include<stdio.h>
int main(){
	int i, a[10], large;
	printf("Enter array elements : ");
	for(i=0;i<10;i++){
		scanf("%d", &a[i]);
	}
	large = a[0];
	for(i=1;i<=10;i++){
		if(a[i]> large){
			large =a[i];
		}
	}
	printf("Largest number is %d", large );
	return 0;
}
