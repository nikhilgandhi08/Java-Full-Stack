#include<stdio.h>
#include<stdlib.h>
#define max 20

int main(){
    system("cls");
    int vcount=0,ccount=0,count=0,i,length;
    char name[max];
    char vow[10]={'a','e','i','o','u','A','E','I','O','U'};
    printf("\nEnter Name:");
    scanf("%s",&name);

    for(i=0;name[i]!=0;i++){
        count++;
    }

    printf("\nLength of your name is:%d",count);

    printf("\nReverse order of your name:");
    for(i=count-1;i>=0;i--){
        printf("%c",name[i]);
    }

    
    for(i=0;i<count-1;i++){
        for(int j=0;j<10;j++){
            if(name[i]==vow[j]){
                vcount++;
            }else{
                ccount++;
            }
        }
    }

    printf("\nVowels in name:%d",vcount);
    printf("\nConsonants in name:%d",ccount);
    

}