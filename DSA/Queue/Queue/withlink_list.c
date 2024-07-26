#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front,*rear,*curr;

void push(int n){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    if(front==-1){
        front=rear=newnode;
    }else{
        rear->next=newnode;
        rear=newnode;
    }
}

void pop(){
    
    if(front==-1){
        printf("\nQueue is Empty!!");
    }else{
        printf("\nPopped Element is :%d",front->data);
        if(front==rear){
            front = rear = -1;
        }else{
            front=front->next;
        }
    }
}

void display(){
    if(front==-1){
        printf("\nQueue is Empty!!");
    }else{
        curr=front;
        while(curr!=NULL){
            printf("| %d|-->",curr->data);
            curr=curr->next;
        }
    }
}



int main(){
    system("cls");
    front=rear=-1;
    int n,ch,c;
    
    do{
        printf("\n1.Push\n2.Display\n3.Pop\nEnter your choice :");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
                printf("\nEnter value to insert into Queue :");
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