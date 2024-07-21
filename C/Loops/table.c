#include<stdio.h>

int main(){
    int n;
    printf("\nEnter any number to print table:");
    scanf("%d",&n);

    int i=1;
    int product;

    while(i<=10){
        product=n*i;
        printf("\n%d*%d=%d",n,i,product);
        i++;
    }
}