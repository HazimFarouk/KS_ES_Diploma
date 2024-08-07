#include<stdio.h>
#include<string.h>

/*
 *Ex7 : Write a C program to reverse a  string
*/

int main(){

    char s[1000];
    char Reversed_s[1000];
    memset(s , '\0' , 1000);
    memset(Reversed_s , '\0' , 1000);

    printf("Enter A String : ");
    gets(s);

    int n = strlen(s);

    for(int i = 0 ; s[i] != '\0' ; ++i){
        Reversed_s[n - i - 1] = s[i];
    }

    printf("The Reversed String : ");
    puts(Reversed_s);

    return 0;
}



