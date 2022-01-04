#include <stdio.h>

int main(){

    int b,decimal = 0,n,rem,weight=1;
    printf("Enter the binary no:- ");
    scanf("%d",&b);
    n = b;

    while (n!= 0)
    {
        rem = n%10;
        decimal += weight* rem;

        n /= 10;
        weight *= 2;
    }
    
    printf("Decimal equivalent of binary no %d is :- %d",b,decimal);
    printf("\n");
    return 0;
}