#include <stdio.h>
#include <math.h>

int main(){

    int n,val,count = 0;
    printf("Enter the no you want to check for Prime = ");
    scanf("%d",&n);

    val = ceil(sqrt(n));

    //Dividing n by all the no from 2 to sqrt(n) 
    //If it is divisible anywhere then it is not prime
    //otherwise it is prime

    for(int x = 2; x<= val;x++){
        if(n%x == 0){
            count = 1;
        }
    }

    //Checking for n = 1 or 2
    if((count ==0 && n != 1) || n == 2){
        printf("%d is a Prime Number",n);
    }
    else{
        printf("%d is not a prime number", n);
    }

    printf("\n");

    return 0;
}