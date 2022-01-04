#include <stdio.h>

int main(){
    //Strong no - No in which the sum of the factorial of the individual digits
    //of a number is equal to the original number.

    int n,rem,result = 0,num;
    printf("Enter the no you want to check for Strong :- ");
    scanf("%d",&n);

    num = n;

    while (num !=0){
        rem = num %10;
        int fact = 1;
        for(int x = 1; x<=rem;x++){
            fact *= x;
        }

        result += fact;      
        num /= 10;
    }

    //Checking whether result is equal to n or not
    if (result == n)
    {
        printf("%d is a Strong Number",n);
    }
    else{
        printf("%d is not a Strong Number",n);
    }

    printf("\n");
    
    return 0;
}