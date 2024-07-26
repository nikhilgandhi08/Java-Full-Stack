#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int arr[10];
    int even=0,odd=0,esum=0,osum=0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<10;i++){
       
       if(arr[i]%2==0){
        even++;
        esum+=arr[i];
       }else{
        odd++;
        osum+=arr[i];
       }
    }
    printf("\nEven number count:%d",even);
    printf("\nOdd number count:%d",odd);
    printf("\nEven number sum:%d",esum);
    printf("\nOdd number odd:%d",osum);
}