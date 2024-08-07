
#include<stdio.h>

/*
 *Ex3 : Write a C program to take matrix and print it's transpose
*/

int main(){

    int row = 0 , col = 0;
    printf("Enter Number Rows : ");
    scanf("%d" , &row);

    printf("Enter Number Columns : ");
    scanf("%d" , &col);

    int Matrix[row][col];

    printf("Enter Elements Of Matrix\n");
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            printf("Enter Number %d%d : " , i + 1 , j + 1);
            scanf("%d" , &Matrix[i][j]);
        }
    }

    printf("Entered Matrix\n");
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col ; ++j){
            printf("%d " ,Matrix[i][j]);
        }
        printf("\n");
    }

    int TransMatrix[col][row];
    for(int i = 0 ; i < col ; ++i){
        for(int j = 0 ; j < row ; ++j){
            TransMatrix[i][j] = Matrix[j][i];
        }
    }


    printf("Transpose Of Matrix\n");
    for(int i = 0 ; i < col ; ++i){
        for(int j = 0 ; j < row ; ++j){
            printf("%d " ,TransMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
