
#include<stdio.h>

/*
 *Ex2 : Write a C program take n number from the user and print there average
*/

int main(){

    int n;
    printf("Enter Number Of Elements : ");
    scanf("%d" , &n);
    float Num[n];

    float Sum = 0;
    for(int i = 0 ; i < n ; ++i){
        printf("Enter Number %d : " , i + 1);
        scanf("%f" , &Num[i]);
        Sum += Num[i];
    }

    printf("Average = %0.3f" , Sum / n);
    return 0;
}
