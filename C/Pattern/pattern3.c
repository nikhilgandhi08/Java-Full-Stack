#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int i,j,n=5;
    for(i=n;i>=1;i--){
        for(j=i;j>1;j--){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");

    }
    printf("\n");

    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");

    }

    printf("\n");
    for(i=n;i>=1;i--){
        for(j=i;j<n;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }

    printf("\n");

    for(i=1;i<=n;i++){
        for(j=i;j>1;j--){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");

    }

    printf("\n");
    for(i=n;i>=1;i--){
        for(j=i;j<n;j++){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");

    }

}