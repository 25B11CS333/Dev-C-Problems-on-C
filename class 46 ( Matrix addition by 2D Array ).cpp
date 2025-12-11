#include<stdio.h>
int main()
{
	int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
	printf("Addition of two matrices :\n");
	printf("Input the size of the square matrix: ");
	scanf("%d",&n);
	printf("Input elements in the first matrix :\n ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element = [%d][%d]: ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Input elements in the second matrix :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element = [%d][%d]: ",i,j);
			scanf("%d",&brr1[i][j]);
		}
	}
	printf("\nThe First matrix is :");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",arr1[i][j]);
	}
	printf("\nThe Second matrix is :");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",brr1[i][j]);
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)	
	crr1[i][j]=arr1[i][j]+brr1[i][j];
	printf("\n The addition of two matrix is:");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",crr1[i][j]);
	}
	return 0;
}
