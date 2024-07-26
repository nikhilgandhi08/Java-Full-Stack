#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*start,*curr;


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

    }
}

void Display(){
    if(start==NULL){
        printf("\nDoubly Linked list is empty");
    }else{
        curr=start;
        while(curr!=NULL){
            printf("|%u |%d | %u|->",curr->prev,curr->data,curr->next);
            curr=curr->next;
        }
    }
}







int main(){
    system("cls");
    int n,c,ch,loc;



    do{
        printf("\n1.Create\n2.InsertFirst\n3.InsertMiddle\n4.DelFirst\n5.DelMiddle\n6.Display\n7.Reverse \nEnter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\nEnter the value to insert in linked list :");
                scanf("%d",&n);
                create(n);
                break;
            
            case 2:
                printf("\nEnter the value to insert in linked list :");
                scanf("%d",&n);
                InsertFirst(n);
                break;
            
            case 3:
                printf("\nEnter the value & location to insert in linked list :");
                scanf("%d %d",&n,&loc);
                InsertMiddle(n,loc);
                break;

            case 4:
                delfirst();
                break;
            
            case 5:
                printf("\nEnter the location of node to delete: ");
                scanf("%d",loc);
                delmid(loc);
                break;
                
            case 6:
                Display();
                break;

            case 7:
                rev();
                break;

            default:
                break;
            


        }
        printf("\nDo you want to continue press 1:");
        scanf("%d",&c);
        
    }while(c==1);

}
