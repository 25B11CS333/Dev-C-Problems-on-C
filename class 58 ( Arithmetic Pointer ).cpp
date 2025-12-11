#include <stdio.h>         //some error exist check it. I thin its ot an error

int main() {
    int a = 10;
    int b = 20;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    printf("\n The value of p1 is %p", p1);
    printf("\n The value of p1+1 is %p", p1 + 1);
    printf("\n The value of p1-1 is %p", p1 - 1);
    printf("\n The value of p2 is %p", p2);
    printf("\n The value of p1 - p2 = %ld", p1 - p2);

    return 0;
}

