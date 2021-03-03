#include <stdio.h>
int main(){
    int numRow, row, column;
    int ch = 1;
    printf("Enter number of rows: ");
    scanf("%d", &numRow);

    for (row = 1; row <= numRow; row++){
        for (column = 1; column <= row; column++){
            printf("%02d ",(ch++));

        }
        printf("\n");    
    }

    for (row = numRow - 1; row >= 1; row--){
        for (column = 1; column <= row; column++){
            printf("%02d ",(ch++));

        }
        printf("\n");    
    }
    return 0;
}