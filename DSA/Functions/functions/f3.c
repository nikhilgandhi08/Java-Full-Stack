#include<stdio.h>
#include<stdlib.h>
void add(); //without arg,without return
int sub(); //without arg,with return
void mul(int,int); //with arg without return
int di(int,int); //with arg with return
int main(){
    system("cls");
    int s,a1,a2;
    int f;
    add();
    s=sub();
    printf("Sub is : %d",s);

    printf("Enter 2 numbers for mul : ");
    scanf("%d%d",&a1,&a2);
    mul(a1,a2);
    
    printf("Enter 2 numbers for div : ");
    scanf("%d%d",&a1,&a2);
    f=di(a1,a2);
    printf("Div is : %d",f);


}

void add(){
    int a,b;
    printf("\nEnter 2 numbers for add : ");
    scanf("%d%d",&a,&b);
    printf("Add is : %d",a+b);
}

int sub(){
    int a,b;
    printf("\nEnter 2 numbers for sub : ");
    scanf("%d%d",&a,&b);
    return a-b;
}

void mul(int n1,int n2){
    int r;
    r=n1*n2;
    printf("Mul is : %d",r);
}

int di(int n1,int n2){
    return n1/n2;
}