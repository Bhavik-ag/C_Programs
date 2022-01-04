#include <stdio.h>

//Leap Year - Year exactly divisible by 4 is leap year
//Except centurial year should be divisible by 400

int main(){
    int y;
    printf("Enter the year you want to check = ");
    scanf("%d",&y);

    if(y % 100 == 0){
        if(y%400 ==0){
            printf("%d is a leap year",y);
        }
        else{
            printf("%d is not a leap year",y);
        }
    }
    else{
        if (y%4 ==0){
            printf("%d is a leap year",y);
        }
        else{
            printf("%d is not a leap year",y);
        }
    }
    printf("\n");
    return 0;
}