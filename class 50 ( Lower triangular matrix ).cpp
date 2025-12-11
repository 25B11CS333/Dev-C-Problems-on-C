#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Lower triangular matrix:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i < j)
                printf("0\t");     
            else
                printf("%d\t", a[i][j]);  
        }
        printf("\n");
    }

    return 0;
}

