#include<stdio.h>

/*
 *Ex5 : Write a C program to check whether a char is alphabet or not
*/

int main(){
    char Character;
    printf("Enter Character : ");
    scanf("%c" , &Character);

    if((Character >= 'a' && Character <= 'z') || (Character >= 'A' && Character <= 'Z') ){
        printf("%c is an Alphabet\n" , Character);
    }
    else{
        printf("%c is not an Alphabet\n" , Character);
    }

    return 0;
}
