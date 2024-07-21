#include<stdio.h>

int main(){

    int i,n;
    printf("\nEnter any number for finding factor:");
    scanf("%d",&n);
    i=2;
    while(i<n/2){
        if(n%i==0){
            printf("%d\n",i);
        }
        i++;
    }

}