#include<stdio.h>
void swap(int*,int*);
int main()
{
  int a,b;
  printf(" enter a, b values");
  scanf("%d %d", &a,&b);
  printf("before swaping values a=%d,b=%d\n", a,b);
  swap(&a,&b);
  printf("after swaping values int main functoin  a=%d,b=%d\n", a,b);
  return 0;
}
  void swap(int *a,int *b)
  {
  int temp;
  temp =*a;
  *a=*b;
  *b=temp;
  printf("after swaping values a=%d,b=%d\n", *a,*b);
 
  }
