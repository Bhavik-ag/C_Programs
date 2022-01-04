#include <stdio.h>

int main(){
    int x,y,result = 1;
    double result2 = 1.0;
    printf("Enter the base and exponent:- ");
    scanf("%d %d",&x,&y);

    if(y>0){
        for(int i = 1;i<=y;i++){
            result *= x;
        }
        printf("Power of %d raised to %d = %d",x,y,result);
    }

    else{
        for(int i = y;i!=0;i++){
            result2  = result2*(1.0/x);
        }
        printf("Power of %d raised to %d = %f",x,y,result2);
    }
    printf("\n");
    return 0;
}