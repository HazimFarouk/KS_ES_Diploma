#include<stdio.h>
#include<string.h>

/*
 *Ex7 : Write a C program to Find length of string
*/

int main(){

    char s[1000];
    memset(s , '\0' , 1000);

    printf("Enter A String : ");
    gets(s);

    int Length = 0;
    for(int i = 0 ; s[i] != '\0' ; ++i){
        Length++;
    }

    printf("Length Of String = %d" ,Length);
    return 0;
}


