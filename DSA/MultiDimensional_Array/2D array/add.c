#include<stdio.h>
#include<stdlib.h>
#define max 20

int main(){
    system("cls");
    int i,j,arr[max][max],brr[max][3],add[max][max],row,col;

    printf("\nHow many rows you want in matrix:");
    scanf("%d",&row);
    printf("\nHow many columns you want in matrix:");
    scanf("%d",&col);
    printf("\nEnter elements for matrix1:");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nEnter element for loc arr[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }


    printf("\nEnter elements for matrix2:");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nEnter element for loc brr[%d][%d] :",i,j);
            scanf("%d",&brr[i][j]);
        }
    }

    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            add[i][j]=arr[i][j]+brr[i][j];
        }
    }

    printf("\nAddition is:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
}
}