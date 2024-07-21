#include<stdio.h>

int main(){
    int i,n;
    printf("Enter number to check for prime number:");
    scanf("%d",&n);
    int flag=0;
    while(i<n/2){

        if(n%i==0){
            flag=1;
            
        }
        i++;
    }

    if(flag=1){
        printf("\nIt is a prime number");

    }else{
        printf("\nIt is not prime number");
    }
}