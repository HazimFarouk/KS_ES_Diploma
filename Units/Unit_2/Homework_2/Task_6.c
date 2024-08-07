#include<stdio.h>

/*
 *Ex6 : Write a C program to Calculate sum of nature number up to n
*/

int main(){
    long long Number = 0;
    printf("Enter Number : ");
    scanf("%ld" , &Number);

    printf("Sum = %ld" , (Number * (Number + 1)) / 2);

    /*
     * Proof : Assume we have 1 indexed array (a) of size n
     *         1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + ..... + n
     *         we can see that a[1] + a[n] == a[2] + a[n - 1] == a[3] + a[n - 2] .... and so on
     *         so we have number (n + 1) and we have it (n / 2) times
     *         so the answer = n(n+1)/2
    */

    return 0;
}

