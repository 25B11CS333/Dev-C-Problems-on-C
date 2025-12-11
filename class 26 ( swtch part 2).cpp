#include<stdio.h>
int main(){
	char c;
	printf("Enter two numbers :");
	int a , b;
	scanf("%d%d",&a,&b);
	printf("Enter function :");
	scanf("%c",&c);
	switch(c)
	{
		case '+':
			printf("a+b = %d" , a+b);
			break;
		case '*':
			printf("a*b = %d", a*b);
			break;
		case '/':
			printf("a/b = %d" , a/b);
			break;
		case '-':
			printf("a-b = %d" , a-b);
			break;
		
		default :
			printf("Enter valid function name");
	}
}
