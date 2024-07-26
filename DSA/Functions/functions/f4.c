#include<stdio.h>
#include<stdlib.h>

//with arg without return

float Triangle(int a,int b){
    printf("\nArea of triangle is : %.2f",0.5*a*b);
}

//with arg with return

int Rectangle(int a,int b){
    return a*b;
}
//without arg with return

float Circle(){
   int r;
   printf("\nEnter radius of circle : ");
   scanf("%d",r);
   return 3.14*r*r;
}

int main(){
    system("cls");
    int b,h,l,result;
    float a;
    printf("\nEnter breadth of triangle : ");
    scanf("%d",&b);
    printf("\nEnter height of triangle : ");
    scanf("%d",&h);
    Triangle(b,h);

    printf("\nEnter breadth of rectangle : ");
    scanf("%d",&l);
    printf("\nEnter height of rectangle : ");
    scanf("%d",&b);
    result=Rectangle(l,b);
    printf("\nArea of rectangle is : %d",result);
    
    a=Circle();
    printf("\nArea of Circle is : %.2f",a);

}