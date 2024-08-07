#include<stdio.h>

/*EX7:
 *
 *Write Source Code to Swap Two Numbers without temp variable
*/

int main(){

    int NumberOne = 0 , NumberTwo = 0;
    printf("Value of Number One = ");
    scanf("%d", &NumberOne );

    printf("Value of Number Two = ");
    scanf("%d", &NumberTwo );

    NumberOne = NumberOne + NumberTwo;
    NumberTwo = NumberOne - NumberTwo;
    NumberOne = NumberOne - NumberTwo;


    printf("Value of Number One After Swap = %d\n" , NumberOne);
    printf("Value of Number One After Swap = %d\n" , NumberTwo);

    return 0;
}
