#include <stdio.h>

int main(){
    //Armstrong no of order "n" is a "n" digit no whose each digit when multiplied
    //n times by itself and then finally added together, results the same number.
    //For Example - 371 is 3 digit no. So order = 3
    //3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371

    int n,rem,result = 0,order = 0,num;
    printf("Enter the no you want to check for armstrong");
    scanf("%d",&n);
    num = n;

    //Finding Order of the Number
    while(num!=0){
        num = num/10;
        order++;
    }

    //Finding the result by multiplying each digit order times and adding them 
    num = n;
    while (num!=0){
        int mul = 1;
        rem = num %10;
        for(int x = 1; x<=order;x++){
            mul *= rem;
        }
        result += mul;
        num = num/10;
    }

    //Checking whether result is equal to n or not
    if (result == n)
    {
        printf("%d is an Armstrong Number",n);
    }
    else{
        printf("%d is not an Armstrong Number",n);
    }
    
    printf("\n");

    return 0;
}