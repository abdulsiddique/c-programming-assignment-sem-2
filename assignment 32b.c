#include <stdio.h>

int main() {
    int rows, i, j, k;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nStar Pattern with spaces:\n");
    for(i=1; i<=rows; i++) {
        for(j=1; j<=(rows-i); j++) {
            printf(" ");
        }
        for(k=1; k<=i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}