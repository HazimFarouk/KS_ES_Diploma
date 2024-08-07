#include<stdio.h>

/*
 *Ex1 : Write a C program to check whether a number is even or odd
*/

int main(){
    int Number = 0;
    printf("Enter Number : ");
    scanf("%d" , &Number);

    if(Number % 2 == 0){
        printf("%d is Even\n" , Number);
    }
    else{
        printf("%d is Odd\n" , Number);
    }

    return 0;
}

