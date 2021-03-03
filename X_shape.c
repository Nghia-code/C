#include <stdio.h>
int main(){
    int numRow, row, column;
    printf("Enter number of row: ");
    scanf("%d", &numRow);
    char name[] = "Nghia";

    for(row = 0; row < numRow; row++){
        for(column = 0;column < numRow;column++ ){
            if((row == column) || ((row + column) == numRow -1)){
            printf("%c", name[row]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}