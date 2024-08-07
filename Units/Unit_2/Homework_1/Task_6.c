#include<stdio.h>

/*EX6:
 *
 *Write Source Code to Swap Two Numbers
*/

int main(){

    int NumberOne = 0 , NumberTwo = 0;
    printf("Value of Number One = ");
    scanf("%d", &NumberOne );

    printf("Value of Number Two = ");
    scanf("%d", &NumberTwo );

    int TempValue = NumberTwo;
    NumberTwo = NumberOne;
    NumberOne = TempValue;

    printf("Value of Number One After Swap = %d\n" , NumberOne);
    printf("Value of Number One After Swap = %d\n" , NumberTwo);


    return 0;
}
