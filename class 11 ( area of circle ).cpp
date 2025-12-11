#include <stdio.h>

int main() {
    const float pi = 3.14;   
    float r, area;

    printf("Enter radius of circle: ");
    scanf("%f", &r);        

    area = pi * (r * r);
    printf("Area of circle: %f\n", area);

    return 0;
}

