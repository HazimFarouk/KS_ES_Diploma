#include<stdio.h>

/*EX3:
 *
 *Write C Program to Add Two Integers
*/

int main(){

    int NumberOne = 0 , NumberTwo = 0;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &NumberOne , &NumberTwo);

    printf("Sum = %d" , NumberOne + NumberTwo);

    return 0;
}
