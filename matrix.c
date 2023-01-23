#include <stdio.h>

int main(){
    int rowsA,rowsB,columnsA,columnsB;
    int choice;

    printf("Enter your choice: add(1), sub(2), mul(3), transpose(4), lowerTriangle(5), upperTriangle(6)\n");
    scanf("%d",&choice);

    printf("Enter the dimensions of matrix A :");
    scanf("%d %d",&rowsA,&columnsA);

    int matrixA[rowsA][columnsA];

    for(int column =0; column < columnsA; column++)
    {
        for(int row = 0; row < rowsA; row++)
        {
            printf("Enter Element at A(%d,%d): ",row+1,column+1);
            scanf("%d",&matrixA[row][column]);
        }
    }

    printf("MatrixA is: \n");
     for(int column = 0; column < columnsA; column++)
        {
                for(int row = 0; row < rowsA; row++)
                {
                    printf("%d ",matrixA[row][column]);
                }
                printf("\n");
       }

    printf("Enter the dimensions of matrix B : ");
    scanf("%d %d",&rowsB,&columnsB);

    int matrixB[rowsB][columnsB];

    for(int column =0; column < columnsB; column++)
    {
        for(int row = 0; row < rowsB; row++)
        {
            printf("Enter Element at B(%d,%d): ",row+1,column+1);
            scanf("%d",&matrixB[row][column]);
        }
    }

    printf("MatrixB is: \n");
    for(int column = 0; column < columnsB; column++)
    {
            for(int row = 0; row < rowsB; row++)
            {
                printf("%d ",matrixB[row][column]);
            }
            printf("\n");
    }

    printf("Final Matrix is: \n");

    if(rowsA == rowsB && columnsA == columnsB)
    {
        for(int column = 0; column < columnsB; column++)
        {
                for(int row = 0; row < rowsB; row++)
                {
                    if(choice == 1){printf("%d ",matrixA[row][column] + matrixB[row][column]);}
                    else if(choice == 2){printf("%d ",matrixA[row][column] - matrixB[row][column]);}
                    else if(choice == 3){printf("%d ",matrixA[row][column] * matrixB[row][column]);}
                }
                printf("\n");
        }

    }
    else if(choice == 4)
    {
        for(int column = 0; column < columnsA; column++)
        {
                for(int row = 0; row < rowsA; row++)
                {
                    printf("%d ",matrixA[column][row]);
                }
                printf("\n");
       }
    }
    else if(choice == 5)
    {
        for(int column = 0; column < columnsA; column++)
        {
                for(int row = 0; row <= column; row++)
                {
                    printf("%d ",matrixA[row][column]);
                }
                printf("\n");
       }
    }

    else if(choice == 6)
    {
        for(int column = 0; column < columnsA; column++)
        {
                for(int row = 0; row < column; row++)
                {
                    printf("  ");
                }
                for(int row = column; row < columnsA; row++)
                {
                    printf("%d ",matrixA[row][column]);
                }

                printf("\n");
            }
    }
}