#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter Number 1:");
    scanf("%d",&num1);

    printf("Enter Number 2:");
    scanf("%d",&num2);

    if(num1>num2){
        printf("Number 1 is greater");
    }else if(num2>num1){
        printf("Number 2 is greater");
    }else{
        printf("Numbers are equal");
    }
}