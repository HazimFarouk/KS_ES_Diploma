#include<stdio.h>

/*
 *Ex7 : Write a C program to find factorial
*/

int main(){
    int Number = 0;
    printf("Enter Number : ");
    scanf("%d" , &Number);

    if(Number < 0){
        printf("Error!!! No Factorial for negative numbers\n");
    }
    else{
        long long Factorial = 1;

        for(int i = 2 ; i <= Number ; ++i){
            Factorial *= i;
        }

        printf("Factorial = %ld" , Factorial);
    }

    return 0;
}

