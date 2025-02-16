#include<stdio.h>
int main() {
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i >= n; i++) { // Loop for rows
        for(j = 1; j <= i; j++) { // Loop for columns
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

