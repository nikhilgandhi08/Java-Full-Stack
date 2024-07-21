#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int i,j,n=5,k,str=1;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }for(k=1;k<=str;k++){
            printf("*");
        }
        printf("\n");
        str=str+2;
    }
    printf("\n");

    str=9;
    for(i=1;i<=n;i++){
        for(j=i;j>1;j--){
            printf(" ");
        }for(k=1;k<=str;k++){
            printf("*");
        }
        printf("\n");
        str=str-2;
    }
    printf("\n");
    
    str=1;
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf(" ");
        }for(k=1;k<=str;k++){
            printf("*");
        }
        printf("\n");
        str=str+2;
    }
    str=str-4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }for(k=1;k<=str;k++){
            printf("*");
        }
        printf("\n");
        str=str-2;
    }
    printf("\n");

    // str=1;
    // for(i=1;i<=n;i++){
    //     for(j=i;j<=n;j++){
    //         printf(" ");
    //     }for(k=1;k<=str;k++){
    //         printf("%c",i+64);
    //     }
    //     printf("\n");
    //     str=str+2;
    // }
    printf("\n");
    str=1;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }for(k=1;k<=str;k++){
            printf("*");
            printf(" ");
        }
        printf("\n");
        str=str+1;
    }

    printf("\n");
    str=1;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }for(k=1;k<=str;k++){
            printf("%c",str+64);
            printf(" ");
        }
        printf("\n");
        str=str+1;
    }

}
