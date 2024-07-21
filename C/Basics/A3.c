#include<stdio.h>

int main(){

  int age;
    printf("\nEnter your age:");
    scanf("%d",&age);

    if(age<0){
        age=-age;
    }
    printf("\nYour age is:%d",age);
}