#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    char arr[20];
    int i,ascii,c,ch;
    

   do{
    printf("\nEnter your name:");
    scanf("%s",arr);
    printf("\n1.Upper Case\n2.Lower Case");
    printf("\nEnter your choice:");
    scanf("%d",&ch);

    switch(ch){
        case 1:
        printf("%s in upper case:",arr);
        for(i=0;arr[i]!=0;i++){
            ascii=arr[i];
            if(ascii>=97 && ascii<=122){
                ascii=ascii-32;
            }
            printf("%c",ascii);
        }
        break;

        case 2:
        printf("%s in lower case:",arr);
        for(i=0;arr[i]!=0;i++){
            ascii=arr[i];
            if(ascii>=65 && ascii<=90){
                ascii=ascii+32;
            }
            printf("%c",ascii);
        }
        break;
    }

    printf("\nDo you want to continue press 1:");
    scanf("%d",c);
   }while(c!=1);

}