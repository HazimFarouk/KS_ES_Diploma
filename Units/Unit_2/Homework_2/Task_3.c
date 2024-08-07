#include<stdio.h>

/*
 *Ex3 : Write a C program to find largest number among three numbers
*/

int main(){
    double NumberOne = 0 , NumberTwo = 0 , NumberThree = 0;
    printf("Enter Three Numbers : ");
    scanf("%lf%lf%lf" , &NumberOne, &NumberTwo, &NumberThree);

    double MaxNumber = 0;
    if(NumberOne > NumberTwo && NumberOne > NumberThree){
        MaxNumber = NumberOne;
    }
    else if(NumberTwo > NumberOne && NumberTwo > NumberThree){
        MaxNumber = NumberTwo;
    }
    else{
        MaxNumber = NumberThree;
    }

    printf("Largest Number = %0.3lf\n" , MaxNumber);

    return 0;
}

