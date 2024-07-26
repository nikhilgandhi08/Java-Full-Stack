#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int i;
    char str1[10],str2[10],temp[10];

    printf("\nEnter String 1:");
    scanf("%s",&str1);
    printf("\nEnter String 2:");
    scanf("%s",&str2);

   for(i=0;str2[i]!='\0';i++){
    temp[i]=str1[i];
    str1[i]=str2[i];
    str2[i]=temp[i];
   }
    
    
    printf("\nString after swap String 1:%s",str1);
    printf("\nString after swap String 2:%s",str2);
}