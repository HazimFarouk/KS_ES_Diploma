#include<stdio.h>

/*
 *Ex2 : Write a C program to check whether a char is vowel or consonant
*/

int main(){
    char Character;
    printf("Enter Character : ");
    scanf("%c" , &Character);

    if(Character == 'a' || Character == 'A' || Character == 'o' || Character == 'O' || Character == 'u' || Character == 'U' ||
       Character == 'i' || Character == 'I' || Character == 'e' || Character == 'E'){
        printf("%c is a Vowel\n" , Character);
    }
    else{
        printf("%c is a Consonant\n" , Character);
    }

    return 0;
}

