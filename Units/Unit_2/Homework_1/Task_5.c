#include<stdio.h>

/*EX5:
 *
 *Write C Program to Find ASCII Value of a Character
*/

int main(){

    char Character;
    printf("Enter A Character : ");
    scanf("%c", &Character);

    printf("The ASCII Of %c = %d" , Character , Character);

    return 0;
}
