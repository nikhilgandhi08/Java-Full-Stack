#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[max];
int top=-1;
int curr;


void push(int n){
    if(top==max-1){
        printf("\nStack is Full");
    }else{
        top=top+1;
        stack[top]=n;
    }
}

void pop(){
    if(top==-1){
        printf("\nStack is Empty");
    }else{
        printf("\nPopped Element :%d",stack[top]);
        top--;
    }
}

void display(){
    if(top==-1){
        printf("\nStack is Empty");
    }else{
        curr=top;
        while(curr>=0){
            printf("%d ",stack[curr]);
            curr--;
        }
    }
}


int main(){
    system("cls");
   
    int n,c,ch;

    do{
        printf("\n1.Push\n2.Pop\n3.Display\nEnter your choice :");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
                printf("\nEnter value to insert into stack :");
                scanf("%d",&n);
                push(n);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;
        }

        printf("\nDo you want to continue? press 1 :");
        scanf("%d",&c);
    }while(c==1);
}