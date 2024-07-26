#include<stdio.h>
#include<stdlib.h>
#define max 20

int main(){
    system("cls");
    int i,j,arr[max][max],row,col;
    printf("\nHow many rows you want in matrix:");
    scanf("%d",&row);
    printf("\nHow many columns you want in matrix:");
    scanf("%d",&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nEnter element for loc arr[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMatrix Elements are:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}