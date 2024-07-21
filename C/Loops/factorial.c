#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    system("cls");
    printf("Enter number to find factorial:");
    scanf("%d",&n);
    int n2=n;
    int product=1;
    while(n>0){
        product=product*n;
        n--;
    }

    printf("\nValue          :%d",n2);
    printf("\nFactorial value:%d",product);
}