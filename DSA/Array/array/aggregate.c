#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int arr[10];
    int i,sum=0;
    int min,max;
    printf("Enter any 10 salaries:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++){
        sum=sum+arr[i];
    }
    printf("\nSum of salaries:%d",sum);
    printf("\nAverage Salary:%d",sum/10);
    min=arr[0];

    for(i=0;i<10;i++){
        if(min>arr[i]){
            min=arr[i];
            
        }
    }
    printf("\nMinimum Salary:%d",min);

    max=arr[0];
    for(i=0;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
            
        }
    }
    printf("\nMaximum Salary:%d",max);

}