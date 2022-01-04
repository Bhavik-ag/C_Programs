#include <stdio.h>

int main(){
    int n;
    printf("How many rows you want to print = ");
    scanf("%d",&n);

    for(int x = n;x>=1;x--){
        for (int i = 1; i<=x ; i++){
            printf(" * ");
        }
        for(int j = 0;j<2*(n-x);j++){
            printf("   ");
        }
        for (int k = 1; k<=x ; k++){
            printf(" * ");
        }
        printf("\n");
    }

    for(int x = 2;x<=n;x++){
        for (int i = 1; i<=x ; i++){
            printf(" * ");
        }
        for(int j = 0;j<2*(n-x);j++){
            printf("   ");
        }
        for (int k = 1; k<=x ; k++){
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}