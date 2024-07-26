#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int n1=10;
    int n2=10;
    
    int *ptr1=&n1;
    int *ptr2=&n2;
    int **ptr3=&ptr1;

    printf("\nValue of n1 is          :%d",n1);
    printf("\nAddress of n1 is        :%u",&n1);

    printf("\nValue of n1 is          :%d",*ptr1);
    printf("\nAddress of n1 is        :%u",ptr1);

    printf("\nAddition of n1 and n2 is:%d",*ptr1+*ptr2);

    printf("\nAddress of p1 is        :%u",&ptr1);
    printf("\nAddress of p1 is        :%u",ptr3);
    printf("\nAddress of p3 is        :%u",&ptr3);
    
}