#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");

    int arr[5]={10,20,30,40,50};
    int *ptr=&arr[0];

    printf("\n%u\t:\t%d",ptr,*(ptr));
    printf("\n%u\t:\t%d",ptr+0,*(ptr+0));
    printf("\n%u\t:\t%d",ptr+1,*(ptr+1));
    printf("\n%u\t:\t%d",ptr+2,*(ptr+2));
    printf("\n%u\t:\t%d",ptr+3,*(ptr+3));
    printf("\n%u\t:\t%d",ptr+4,*(ptr+4));
    

    printf("\nUsing for loop");
    for(int i=0;i<5;i++){
        printf("\n%u\t:\t%d",ptr+i,*(ptr+i));
    }

}