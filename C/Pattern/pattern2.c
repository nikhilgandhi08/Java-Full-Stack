#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    printf("\n");

for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
    printf("\n");

}