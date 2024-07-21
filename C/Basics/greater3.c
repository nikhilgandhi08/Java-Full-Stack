#include<stdio.h>
int main(){
    int n1,n2,n3;

    printf("Enter 3 numbers :");
    scanf("%d%d%d",&n1,&n2,&n3);

    if((n1>n2)&&(n1>n3)){
        printf("First Number is greater");
    }
    else if((n2>n1)&&(n2>n3)){
        printf("Second Number is greater");
    }
    else if((n3>n1)&&(n3>n2)){
        printf("Third Number is greater");
    }
     else if((n1==n2)&&(n1>n3)){
        printf("Number 1 and Number 2 are equal and greater than number 3");
    }
    else if((n2==n3)&&(n2>n1)){
        printf("Number 2 and Number 3 are equal and greater than number 1");
    }
    else if((n3==n1)&&(n3>n2)){
        printf("Number 3 and Number 1 are equal and greater than number 2");
    }
    else if((n1==0)&&(n2==0)&&(n3==0)){
        printf("All Numbers are zero");
    }
    else if(n1==n2==n3){
        printf("All Numbers are equal");
    }


}
      
