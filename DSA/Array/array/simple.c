#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int arr[10];
    int i,search,flag=0;
   
    printf("Enter any 10 no:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter no. to search in array:");
    scanf("%d",&search);

    for(i=0;i<10;i++){
        if(search==arr[i]){
            
            flag=1;
            break;
        }
    }
    if(flag==1){
         printf("No found at %d location",i+1);
    }
    else{
        printf("Element not found");
    }
}