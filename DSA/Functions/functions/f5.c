#include<stdio.h>
#include<stdlib.h>


void factor(int a){
    int i;
    printf("Factor of %d are : ",a);
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            printf("%d ",i);
        }
    }
}

int factorial(){
    int i,b,result1;
    printf("\nEnter number to find factorial : ");
    scanf("%d",&b);
    for(i=b;i>0;i--){
        result1*=i;
    }
    return result1;
}

void prime(int a){
    int i,flag=0;
    for(i=2;i<a/2;i++){
        if(a%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\nIts not prime");
    }
    else{
        printf("\nIts prime");
    }
}

int power(int n,int p){
    int i=1,result=1;
    while(i<=p){
        result*=n;
        i++;
    }
    return result;
}


int main(){
    system("cls");
    int ch,c,a,result,b;
    do{
        printf("\n1-factor\n2-factorial\n3-prime\n4-Power\nEnter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\nEnter number to find factor : ");
                scanf("%d",&a);
                factor(a);
                break;

            case 2:
                result=factorial();
                printf("Factorial of given number is : %d",result);
                break;

            case 3:
                printf("\nEnter number to check for prime number : ");
                scanf("%d",&a);
                prime(a);
                break;

            case 4:
                printf("\nEnter number and its power : ");
                scanf("%d%d",&a,&b);
                result=power(a,b);
                printf("Result is : %d",result);
               
        }
        printf("\nDo you want to continue press 1: ");
        scanf("%d",&c);
    }while(c==1);
}