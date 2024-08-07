#include<stdio.h>

/*
 *Ex8 : Write a Simple Calculator in C
*/

int main(){
    char Operation = 0;
    double NumberOne = 0 , NumberTwo = 0;
    printf("Enter Operation either (+ , - , / , *) : ");
    scanf("%c" , &Operation);

    printf("Enter Two Numbers : ");
    scanf("%lf%lf" , &NumberOne , &NumberTwo);

    switch(Operation){
        case '+' : {
            printf("%lf %c %lf = %lf\n" , NumberOne , Operation , NumberTwo , NumberOne + NumberTwo);
            break;
        }
        case '-' : {
            printf("%lf %c %lf = %lf\n" , NumberOne , Operation , NumberTwo , NumberOne - NumberTwo);
            break;
        }
        case '/' : {
            printf("%lf %c %lf = %lf\n" , NumberOne , Operation , NumberTwo , NumberOne / NumberTwo);
            break;
        }
        case '*' : {
            printf("%lf %c %lf = %lf\n" , NumberOne , Operation , NumberTwo , NumberOne * NumberTwo);
            break;
        }
        default : {
            printf("Invalid Opertaion\n");
            break;
        }
    }

    return 0;
}
