#include<stdio.h>

#define max 20

int main(){
    int  setunion[max],set1[max],set2[max],l1,l2,ch,i,j,c,x;
    int k=0;

    

    do{

    printf("\n1.Create Set\n2.Display Sets\n3.Union Operation\n4.Intersection Operation\n5.Set2-Set1");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
        switch(ch){
                case 1:
                    printf("\nEnter number of elements do you want in set1:\n");
                    scanf("%d",&l1);
                    printf("\nEnter %d elements",l1);

                    for(i=0;i<l1;i++){
                        scanf("%d",&set1[i]);
                    }

                    printf("\nEnter number of elements do you want in set2:\n");
                    scanf("%d",&l2);
                    printf("\nEnter %d elements",l2);

                    for(i=0;i<l2;i++){
                        scanf("%d",&set2[i]);
                    }
                    printf("\nSets created successfully!!");
                    break;

                case 2:
                    printf("\nSet1\n");
                    for(i=0;i<l1;i++){
                        printf("%d ",set1[i]);
                    }

                    printf("\nSet2\n");
                    for(i=0;i<l2;i++){
                        printf("%d ",set2[i]);
                    }
                    break;
                case 3:
                    for(i=0;i<l1;i++){
                        setunion[k]=set1[i];
                        k++;
                    }

                    for(j=0;j<l2;j++){
                        x=1;
                        for(i=0;i<l1;i++){
                        
                            if(set2[j]==set1[i]){
                                x=0;
                                break;
                            }                          
                        }
                        if(x==1){
                                setunion[k]=set2[j];
                                k++;
                        
                            }
                    }

                    for(i=0;i<k;i++){
                        printf("%d ",setunion[i]);
                    }
                    break;

                    
                 case 4:
                    printf("\nIntersection of two sets is:");
                    for(i=0;i<l1;i++){
                        x=1;
                        for(j=0;j<l2;j++){
                            if(set1[i]==set2[j]){
                                x=0;
                            }
                        }
                        if(x==0){
                            printf("%d ",set1[i]);
                        }
                    }  
                    break;

                case 5:
                    printf("\nDifference Set1-Set2:");
                    for(i=0;i<l1;i++){
                        x=1;
                        for(j=0;j<l2;j++){
                            if(set1[i]==set2[j]){
                                x=0;
                            }
                        }
                        if(x==1){
                            printf("%d ",set1[i]);
                        }
                    }
                    break;
            }

            printf("\nDo you want to continue press1?");
            scanf("%d",&c);
    }while(c==1);

}