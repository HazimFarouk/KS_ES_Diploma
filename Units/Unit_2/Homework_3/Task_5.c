#include<stdio.h>

/*
 *Ex5 : Write a C program to search for element in an array
*/

int main(){

    int n;
    printf("Enter Number Of Elements : ");
    scanf("%d" , &n);
    int Num[n];

    for(int i = 0 ; i < n ; ++i){
        scanf("%d" , &Num[i]);
    }

    int Element = 0 , Position = -1;
    printf("Enter The Element To Be Searched : ");
    scanf("%d" , &Element);

    for(int i = 0 ; i < n ; ++i){
        if(Num[i] == Element){
            Position = i + 1;
            break;
        }
    }

    if(!(~Position)){
        printf("Couldn't Find The Element\n");
    }
    else{
        printf("Number Found At Position %d" , Position);
    }
    return 0;
}

