#include <stdio.h>

int main() {
    int rows;
    // Write C code here
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    int i,j;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}