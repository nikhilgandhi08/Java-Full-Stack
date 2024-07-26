#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int sloc,eloc,i;
    char arr[10];
    printf("Enter String:");
    scanf("%s",arr);

    printf("\nEnter start loc of substring:");
    scanf("%d",&sloc);

    printf("\nEnter no of characters you want:");
    scanf("%d",&eloc);

    printf("\nSubstring is:");
    for(i=sloc-1;i<sloc+eloc;i++){
        printf("%c",arr[i]);
    }


}