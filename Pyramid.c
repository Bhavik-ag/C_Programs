#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter the no of rows for Pyramid = ");
    scanf("%d",&n);
    //No of columns = 2n-1

    for(i = 1; i<=n; i++){
        for (j = 1; j <= 2*n-1; j++){
            //Centre is n
            //Print stars (i-1) left from the centre and (i-1) till right of the centre
            if(j>= n-(i-1) && j<= n+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}