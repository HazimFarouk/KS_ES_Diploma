#include<stdio.h>

/*
 *Ex1 : Write a C program to find sum of two matrix of size 2*2
*/

int main(){
    float MatrixOne[2][2] , MatrixTwo[2][2] , Sum[2][2];

    printf("Enter Elements of first matrix\n");
    for(int i = 0 ; i < 2 ; ++i){
        for(int j = 0 ; j < 2 ; ++j){
            printf("Enter Matrix%d%d : " , i + 1 , j + 1);
            scanf("%f" , &MatrixOne[i][j]);
        }
    }
    printf("Enter Elements of second matrix\n");
    for(int i = 0 ; i < 2 ; ++i){
        for(int j = 0 ; j < 2 ; ++j){
            printf("Enter Matrix%d%d : " , i + 1 , j + 1);
            scanf("%f" , &MatrixTwo[i][j]);
        }
    }

    printf("Sum of Two Matrix\n");
    for(int i = 0 ; i < 2 ; ++i){
        for(int j = 0 ; j < 2 ; ++j){
            printf("%0.3f ",MatrixOne[i][j] + MatrixTwo[i][j]);
        }
        printf("\n");
    }
    return 0;
}
