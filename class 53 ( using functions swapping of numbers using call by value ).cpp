#include<stdio.h>
void swap(int,int);
int main()
{
  int a,b;
  printf(" Enter a, b values : ");
  scanf("%d %d", &a,&b);
  printf("Before swaping values a=%d,b=%d\n", a,b);
  swap(a,b);
  printf("After swaping values int main functoin  a=%d,b=%d\n", a,b);
  return 0;
}
  void swap(int a,int b)
  {
  int temp;
  temp =a;
  a=b;
  b=temp;
  printf("After swaping values a=%d,b=%d\n", a,b);
 
  }
