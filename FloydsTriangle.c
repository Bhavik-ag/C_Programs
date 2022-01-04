#include <stdio.h>
int main(){
    int row,n=1;
    printf("Enter the no of rows:- ");
    scanf("%d",&row);

    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }

    return 0;
}