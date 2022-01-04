#include <stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int main(){
    int a = 4;
    printf("%d",fact(a));
    printf("\n");
    return 0;
}