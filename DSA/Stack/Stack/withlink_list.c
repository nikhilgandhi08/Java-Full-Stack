#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top,*curr;

void push(n){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;

    if(top==NULL){
        top=newnode;
    }else{
      newnode->next=top;
      top=newnode;  
    }
}

void display(){
    if(top==NULL){
        printf("\nStack is Empty");
    }else{
        curr=top;
        while(curr!=NULL){
            printf("|%d| %u|->",curr->data,curr->next);
            curr=curr->next;
        }
    }
}

void pop(){
    if(top==NULL){
        printf("\nStack is Empty!!");
    }else{
        curr=top;
        printf("\nPopped Element :%d",curr->data);
        top=top->next;
        curr->next=NULL;
        free(curr);
    }
}

int main(){
    system("cls");
    int n,ch,c;
    top=NULL;
    do{
        printf("\n1.Push\n2.Display\n3.Pop\nEnter your choice :");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
                printf("\nEnter value to insert into stack :");
                scanf("%d",&n);
                push(n);
                break;

            case 2:
                display();
                break;
            
            case 3:
                pop();
                break;
        }

        printf("\nDo you want to continue? press 1 :");
        scanf("%d",&c);
    }while(c==1);
}