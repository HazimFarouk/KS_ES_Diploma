#include<stdio.h>

/*EX4:
 *
 *Write C Program to Multiply two Floating Point Numbers
*/

int main(){

    float NumberOne = 0 , NumberTwo = 0;
    printf("Enter Two Numbers\n");
    scanf("%f%f", &NumberOne , &NumberTwo);

    printf("Multiplication = %f" , NumberOne * NumberTwo);

    return 0;
}
