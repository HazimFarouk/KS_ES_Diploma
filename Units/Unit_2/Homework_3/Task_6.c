#include<stdio.h>
#include<string.h>

/*
 *Ex6 : Write a C program to Find frequency of character in string
*/

int main(){

    char s[1000];
    memset(s , '\0' , 1000);

    printf("Enter A String : ");
    gets(s);
    strlwr(s);
    int Freq[26] = {0};

    for(int i = 0 ; s[i] != '\0' ; ++i){
        Freq[s[i] - 'a']++;
    }

    char c;
    printf("Enter character to find it's frequency : ");
    scanf("%c" , &c);

    printf("Frequency of %c = %d" , c , Freq[tolower(c) - 'a']);
    return 0;
}


