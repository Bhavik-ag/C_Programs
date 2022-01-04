#include <stdio.h>

int main(){
    int a=0,b=1,n,result;
    printf("Enter no of terms you want to print:- ");
    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        printf("%d ",a);
        //Next term is sum of the before two 
        result = a+b;
        //So we printed a and then changed value of a to b and value b to result
        //and calculated new result which is the next term
        // a b result
        //   a   b    result

        a = b;
        b = result;
    }

    printf("\n");
    return 0;
}