#include<stdio.h>

int main(){
    int n;
    n=0;
    printf("Even Numbers:");
    while(n<=10){
        if(n%2==0){
            printf("%d ",n);
        }
        
        n++;
    }
}