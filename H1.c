#include <stdio.h>
int main(){
    int totalRow, row, space, symbol;
    printf("Number Of Row:");
    scanf("%d",&totalRow);

    for(int row = 1; row <= totalRow; row++){
        for ( int space = 1; space <= (totalRow - row); space++)
            printf(" ");

        for ( int symbol = 1; symbol <= ((2*row)-1);symbol++)
            printf("*");
        
        
        printf("\n");
    }

    return 0;
}