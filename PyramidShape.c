#include <stdio.h>
int main(){
    int numRow, row, column;
    printf("Enter number of rows: ");
    scanf("%d", &numRow);

    for ( row = 1; row <= numRow; row++){
        for (column = 1 ; column <= row; column++){
            if(column == 1 || row == numRow || row == column){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
    
}