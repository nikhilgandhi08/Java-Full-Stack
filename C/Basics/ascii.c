#include<stdio.h>

int main(){

    char ch;

    printf("\nEnter any character:");
    scanf("%c",&ch);

    printf("\nascii of %c is %d",ch,ch);

    if((ch>=65)&&(ch<=90)){
        printf("\nIts capital character");
    }
    else if((ch>=97)&&(ch<=122)){
        printf("\nIts small character");
    }
    else if((ch>=48)&&(ch<=57)){
        printf("\nIts number");
    }
    else{
        printf("\nIts other character");
    }
}