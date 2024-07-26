#include<stdio.h>
#include<stdlib.h>
#define max 20
int main(){
    system("cls");
    int n,temp=0;
    int i,j,arr[max],min;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);

    printf("\nEnter %d Elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nSorted array using selection sort is:");
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}