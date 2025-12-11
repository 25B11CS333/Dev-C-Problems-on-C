#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, dis, r1, r2, rlp, imgp;
    // rlp = real part, imgp = imaginary part

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = b*b - 4*a*c;

    if (dis > 0) {
        r1 = (-b + sqrt(dis)) / (2*a);
        r2 = (-b - sqrt(dis)) / (2*a);
        printf("Root 1 = %.2lf and Root 2 = %.2lf", r1, r2);
    }
    else if (dis == 0) {
        r1 = -b / (2*a);
        printf("Root 1 = Root 2 = %.2lf", r1);
    }
    else {
        rlp = -b / (2*a);
        imgp = sqrt(-dis) / (2*a);   // ? FIX HERE

        printf("Root 1 = %.2lf + %.2lfi\n", rlp, imgp); // check i
        printf("Root 2 = %.2lf - %.2lfi", rlp, imgp); // check i
    }

    return 0;
}

