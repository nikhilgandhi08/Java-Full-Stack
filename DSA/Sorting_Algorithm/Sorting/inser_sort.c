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

    printf("\nSorted array using insertion sort is:");

    for(j=1;j<n;j++){
        temp=arr[j];
        i=j-1;
        while(i>=0){
            if(arr[i]>temp)
            {
                arr[i+1]=arr[i];
            }
            else
            {
                break;
            }
            i--;
        }
        arr[i+1]=temp;
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}