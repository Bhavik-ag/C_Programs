#include <stdio.h>

//Sum of Two Numbers Without +
int main(){
    int x,y;
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d",&x,&y);

    //For example x = 3 y = 4 now we add 1 to x and subtract 1 from y till y = 0
    // x = 4 y = 3
    // x = 5 y = 2
    // x = 6 y = 1
    // x = 7 y = 0
    //In this way we can sum :)

    //If y is positive
    if(y>0){
    while (y!=0)    
    {
        x++;
        y--;
    }
    }

    //If y is negative
    else if(y<0){
    while (y!=0)    
    {
        x--;
        y++;
    }
    }

    printf("Sum = %d",x);
    printf("\n");
    return 0;
}