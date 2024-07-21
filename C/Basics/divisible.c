#include<stdio.h>

int main(){
    int num1;

    printf("Enter any number:");
    scanf("%d",&num1);

 
 
 


    if((num1%15==0)){
        printf("Number is divisible by 3 and 5");
    }
    else if(num1%3==0){
        printf("Number is divisible by 3 and not by 5");
    }
    else if(num1%5==0){
        printf("Number is divisible by 5 and not by 3");
    }
    else{
        printf("Number is neither divisible by 3 nor by 5");
    } 
}