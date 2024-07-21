#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");

    int i,j,n,k;
    int str=1;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(k=i;k>=1;k--){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    for(i=1;i<=n;i++){
        for(j=i;j>1;j--){
            printf(" ");
        }
        for(k=i;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("*");
        }
        for(k=i;k>1;k--){
            printf("  ");
        }
        for(int l=i;l<=n;l++){
            printf("*");
        }
        printf("\n");
    }
}