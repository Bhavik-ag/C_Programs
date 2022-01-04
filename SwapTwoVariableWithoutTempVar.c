#include <stdio.h>

int main(){
    int a = 4;
    int b = 9;
    printf("Current Value of a = %d and b = %d\n",a,b);
    
    a = a+b;
    b = a-b; //(a+b)-b = a Now b = a
    a = a-b; //(a+b)-a = b Here a = b
    printf("After Swaping Value of a = %d and b = %d\n",a,b);
    return 0;
}