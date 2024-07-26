#include<stdio.h>
#include<stdlib.h>

#define max 20

int main(){
    system("cls");
    int n,temp=0;
    int i,j,arr[max];
    printf("\nEnter the number of elements:");
    scanf("%d",&n);

    printf("\nEnter %d Elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nSorted array using bubble sort is:");
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}