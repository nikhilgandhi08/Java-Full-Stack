#include<stdio.h>
#include<stdlib.h>
#define max 20
int main(){
    system("cls");
    int n,c,search=0,ch=0,flag=0,temp=0;
    int i,j,arr[max];
    int lb,ub,mid=0;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);

    printf("\nEnter %d Elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    do
    {   
        printf("\nEntered array is:");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\nEnter number to search:");
        scanf("%d",&search);
        printf("\n1.Linear Search\n2.Binary Search\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){

            case 1:
            for(i=0;i<n;i++){
                flag=0;
                if(arr[i]==search){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("Element %d found at location %d",search,i+1);
            }
                break;

            case 2:

            printf("\nSorted array is:");
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
            
            lb=0;
            ub=n-1;
                
            for(i=0;i<n;i++){
                if(lb<ub){
                    mid=(lb+ub)/2;
                    if(arr[mid]==search){
                        printf("\nElement %d found at location %d",search,mid+1);
                        break;
                    }
                    if(arr[mid]<search){
                        lb=mid+1;
                    }
                    if(arr[mid]>search){
                        ub=mid-1;
                    }
                }
                else{
                    flag=1;
                    break;     
                }
            }

            if(flag==1){
                printf("\nElement not found");
            }
                break;

            default:
                break;

        }
        printf("\nDo you want to continue press 1:");
        scanf("%d",&c);
    } while (c==1);
    
}



        