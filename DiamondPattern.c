#include <stdio.h>

int main(){
    int n;
    printf("Enter no of rows = ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        for(int j = 0; j<n-i;j++){
            printf(" ");
        }
        for(int k = 0;k<i;k++){
            printf("* ");
        }
        printf("\n");
    }

    for (int i = n-1; i >= 1; i--){
        for(int j = 0; j<n-i;j++){
            printf(" ");
        }
        for(int k = 0;k<i;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}