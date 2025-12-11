#include<stdio.h>
int main(){
	int i , sum =0;al
	int marks [6];
	printf("Enter array elements :");
	for(i=0;i<=5;i++){
		scanf("%d", &marks[i]);
	}
	for(i=0;i<=5;i++){
		sum = sum+marks[i];
	}
	printf("%d\n", sum);
	return 0;
}
