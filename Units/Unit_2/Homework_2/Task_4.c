#include<stdio.h>

/*
 *Ex4 : Write a C program to check wither the number is positive or negative
*/

int main(){
    double Number = 0;
    printf("Enter Number : ");
    scanf("%lf" , &Number);

    if(Number > 0){
        printf("%0.3lf is Positive\n" , Number);
    }
    else if(Number < 0){
        printf("%0.3lf is Negative\n" , Number);
    }
    else{
        printf("You Entered Zero\n");
    }

    return 0;
}

