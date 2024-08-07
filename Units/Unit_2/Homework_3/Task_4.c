#include<stdio.h>

/*
 *Ex4 : Write a C program to insert element in array
*/

int main(){

    int n;
    printf("Enter Number Of Elements : ");
    scanf("%d" , &n);
    int Num[n + 1];

    for(int i = 0 ; i < n ; ++i){
        scanf("%d" , &Num[i]);
    }

    int Element = 0 , Position = 0;
    printf("Enter The Inserted Element : ");
    scanf("%d" , &Element);

    printf("Enter The Position Of The Inserted Element : ");
    scanf("%d" , &Position);

    for(int i = n ; i >= Position - 1 ; --i){
        Num[i] = Num[i - 1];
    }
    Num[Position - 1] = Element;

    for(int i = 0 ; i <= n ; ++i){
        printf("%d " , Num[i]);
    }

    return 0;
}

