#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");

    int i,j;
    char arr[10];
    int flag=1;

    printf("\nEnter String:");
    scanf("%s",arr);

    for(i=0;arr[i]!='\0';i++);
    
   
    j=i-1;

    for(i=0;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            flag=0;
            break;
        }
        
    }

    if(flag){
        printf("\nIt's palindrome");

    }else{
        printf("\nIt's not palindrome");
    }
    

}
