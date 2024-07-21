#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int i,j,k,l;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d",i+1);
        }
        printf("\n");
    }
    printf("\n");

for(i=5;i>0;i--){
        for(j=0;j<5;j++){
            printf("%d",i);
        }
        printf("\n");
    }
printf("\n");

for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        printf("%d",j);
    }
    printf("\n");
}
printf("\n");

for(i=1;i<=5;i++){
    for(j=5;j>=1;j--){
        printf("%d",j);
    }
    printf("\n");
}
printf("\n");

for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
printf("\n");

for(i=1;i<=5;i++){
    for(j=5;j>=i;j--){
        printf("*");
    }
    printf("\n");
}
printf("\n");

for(i=5;i>=1;i--){
    for(j=i;j<=5;j++){
        printf("%d",j);
    }
    printf("\n");
}
printf("\n");

for(i=0;i<=5;i++){
    for(j=i;j>=1;j--){
        printf("%d",j);
    }
    printf("\n");
}
printf("\n");

for(i=5;i>=1;i--){
    for(j=i;j<=5;j++){
        printf("%d",i);
    }
    printf("\n");
}
printf("\n");

for(i=1;i<=5;i++){
    for(j=i;j>=1;j--){
        printf("%d",i);
    }
    printf("\n");
}
printf("\n");

for(i=1;i<=2;i++){
    for(j=1;j<=5;j++){
        for(k=1;k<=2;k++){
            for(l=1;l<=5;l++){
                printf("*");
            }
            printf("\t");
        }
        printf("\n");      
    }
    printf("\n");
}
printf("\n");

for(i=5;i>=1;i--){
    for(j=1;j<=5;j++){
        printf("%d",i);
    }
    printf("\t");
    for(k=5;k>=1;k--){
        printf("%d",k);
    }
    printf("\n");
}
}

