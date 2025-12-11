




#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks :");
	scanf("%d", &marks);
	
	if(marks>=90){
		printf("The grade is A\n");
	}
	else if(marks >=80){
		printf("The grade is B\n");
	}
	else if (marks >=70){
		printf("The grade is C\n");
	}
	else if (marks >=60){
		printf("The grade is D\n");
	}
	else{
	 printf("The grade is Fail\n");}
	
return 0;
}
