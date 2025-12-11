#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],result[2][2];
	int i,j,k;
	printf("enter elements of first 2x2 matrix:\n");
	for(i=0; i<2; i++)
		for(j=0; j<2; j++)
		scanf("%d",&a[i][j]);
			printf("enter elements of second 2x2 matrix:\n");
				for(i=0; i<2; i++)
		for(j=0; j<2; j++)
		scanf("%d",&b[i][j]);
			for(i=0; i<2; i++)
		{
				
		for(j=0; j<2; j++){
			result[i][j]=0;
			for(k=0;k<2;k++){
				result[i][j] +=a[i][k]*b[k][i];
			}
		}
printf("\n Resultant 2x2 matrix:\n");
	for(i=0; i<2; i++)
			for(j=0; j<2; j++){
				printf("%d",result[i][j]);
			
			printf("\n");
			}
			printf("%d",result[i][j]);
			
			printf("\n");
	} }
