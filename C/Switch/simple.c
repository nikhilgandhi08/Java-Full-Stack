#include<stdio.h>

int main(){

    int num;
    printf("Enter number:");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("\nOne");
        break;
    
    case 2:
        printf("\nTwo");
        break;

    case 3:
        printf("\nThree");
        break;
    
    default:
        printf("\nEnter valid number");
        break;
    }
}