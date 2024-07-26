#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
}*curr,*start;

void create(int n){
    struct node *new_node;
    new_node=malloc(sizeof(struct node));
    new_node->data=n;
    new_node->prev=NULL;
    new_node->next=NULL;

    if(start==NULL){
        start=new_node;
    }else{
        curr=start;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=new_node;
        new_node->prev=curr;
    }
}

void display(){
    if(start==NULL){
        printf("\nDoubly Linked list is empty");
    }else{
        curr=start;
        while(curr!=NULL){
            printf("|%u | %d | %u|<-->",curr->prev,curr->data,curr->next);
            curr=curr->next;
        }
    }
}

void insert_first(int n){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=n;
    newnode->prev=NULL;
    newnode->next=start;
    start->prev=newnode;
    start=newnode;
    
   
}


void insert_mid(int n,int loc){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=n;
    newnode->prev=NULL;
    newnode->next=NULL;
    int cnt=1;
    curr=start;
    while(cnt<loc-1){
        curr=curr->next;
        cnt++;
    }
    newnode->next=curr->next;
    curr->next=newnode;
    newnode->prev=curr;
    newnode->next->prev=newnode;  
}


void delete_first(){
    curr=start;
    start=start->next;
    start->prev=NULL;
    free(curr);
}

void delete_any(int loc){
    int cnt=1;
    struct node *temp;
    curr=start;
    while(cnt<loc-1){
        start=start->next;
        cnt++;
    }
    temp=curr->next;
    curr->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}

int main(){
    system("cls");
    int c,ch,n,loc;
    do
    {   
        printf("\n1.Create\n2.Display\n3.Insert First\n4.Insert Middle\n5.Delete First \n6.Delete Middle\nEnter your choice:");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
                printf("\nEnter value to insert into linked list :");
                scanf("%d",&n);
                create(n);
                break;
            
            case 2:
                display();
                break;

            case 3:
                printf("\nEnter value to insert into linked list :");
                scanf("%d",&n);
                insert_first(n);
                break;

            case 4:
                printf("\nEnter value and location to insert into linked list :");
                scanf("%d %d",&n,&loc);
                insert_mid(n,loc);
                break;
            
            case 5:
                delete_first();
                break;

            case 6:
                printf("\nEnter location of element to delete :");
                scanf("%d",&loc);
                delete_any(loc);
                break;
        }

    printf("\nDo you want to continue press 1 :");
    scanf("%d",&c);
    } while (c==1);
    

}