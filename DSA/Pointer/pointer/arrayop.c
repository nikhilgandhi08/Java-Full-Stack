#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int arr[5];
    int *ptr=&arr[0];
    int i,sum=0;
    

    printf("\nEnter 5 elements:");
    for(i=0;i<5;i++){
        scanf("%d",(ptr+i));
        sum=sum+*(ptr+i);
    }

    printf("\nSum of 5 elements is:%d",sum);

    for(i=4;i>=0;i--){
        printf("\n%d",*(ptr+i));
    }

}

   