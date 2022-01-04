#include <stdio.h>

int main(){
    int n,rem,result = 0;
    printf("Enter the no you want to check for palindrome");
    scanf("%d",&n);
    //Value of n stored in num for checking the reverse number
    int num = n;
    while (n!=0)
    {
        rem = n%10;
        result = result * 10 + rem;
        n = n/10;
    }

    if (result == num)
    {
        printf("Number %d is a palindrome",num);
    }
    else{
        printf("Number %d is not a palindrome",num);
    }
    
    printf("\n");
    return 0;
}