#include <stdio.h>

int main() {
    int n, temp, rev = 0, r;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;   

    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if statement

    printf("Reverse of %d = %d", n, rev);

    return 0;
}

// 39 38 30

