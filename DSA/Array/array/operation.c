#include<stdio.h>
#include<stdlib.h>

#define max 20

int main(){
    system("cls");
    int ch,n,i,s,c,loc,newel;
    int up_val;
    int flag=0;
    int arr[max];
    int temp;
    do{
    printf("1-Create New Array\n2-Display Array\n3-Search Element in Array\n4-Insert element in Array\n5-Delete element from array\n6-Sort Array\n7.Update Value");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
   
        switch(ch){
            case 1:
                printf("How many element do want to enter:");
                scanf("%d",&n);
                printf("\nEnter %d elements:",n);
                for(i=0;i<n;i++){
                    scanf("%d",&arr[i]);
                }
                printf("\nArray Created Successfully!!!");
                break;

            case 2:
                printf("\nArray Elements are:");
                for(i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;

            case 3:
                printf("Enter num to search in array:");
                scanf("%d",&s);
                for(i=0;i<n;i++){
                    if(s==arr[i]){
                        flag=1;
                        break;
                    }else{
                        flag=0;
                    }
                                       
                }
                if(flag=1){
                        printf("\nElement found");
                    }else{
                        printf("\nElement not found");
                    }
                break;

            case 4:
                printf("\nEnter element to insert and location:");
                scanf("%d %d",&newel,&loc);
                for(i=n-1;i>=loc-1;i--){
                    arr[i+1]=arr[i];
                }
                arr[i+1]=newel;
                n++;

                break;

            case 5:
            printf("\nEnter location of element to delete:");
            scanf("%d",&loc);
            temp=arr[loc-1];
            for(i=loc-1;i<n;i++){
               arr[i]=arr[i+1];
            }
            n--;
            break;
        
            case 6:
                for(i=0;i<n;i++){
                    for(int j=i+1;j<=n-1;j++){
                        if(arr[i]>arr[j]){
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
                }
                break;
            
            case 7:
               
                printf("\nEnter updated value and location: ");
                scanf("%d%d",&up_val,&loc);
                arr[loc-1]=up_val;
                printf("\nValue Updated");
                break;

        }
        printf("\nDo you want continue press 1:");
        scanf("%d",&c);
        

    }while(c==1);
    printf("--------------------------OK BYEEE------------------------"); 
}