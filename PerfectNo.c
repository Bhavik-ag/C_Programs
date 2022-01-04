#include <stdio.h>

int main(){
    //Perfect No is a positive no that is equal to sum of all its proper divisor
    //excluding the number itself

    int n,result = 0;
    printf("Enter a number = ");
    scanf("%d",&n);

    for(int i = 1;i<n;i++){
        if(n%i == 0){
            result += i;
        }
    }

    if(n == result){
        printf("It's a perfect number");
    }
    else{
        printf("It's not a perfect number");
    }
    printf("\n");
    return 0;
}