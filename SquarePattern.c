#include <stdio.h>

int main(){
    int numRow, row, column;
    printf("Enter the number of rows: ");
    scanf("%d", &numRow);

    for( row = 1; row <= numRow; row++){
        for( column = 1; column <= numRow; column++){
            if((column == 1) || (column == numRow) || (row == 1) || (row == numRow) || (row == column) || ((row + column) == (numRow + 1))){
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*https://www.youtube.com/watch?v=yBKo7xDq1Wk&list=PLfVsf4Bjg79BHWqfFmQzpU1xT6vLJTrU0&index=10&ab_channel=LearningLad