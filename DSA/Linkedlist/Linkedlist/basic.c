#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *addr;
}*start,*curr,*prev;


void create(int n){
    struct node *new_node;
    new_node=malloc(sizeof(struct node));
    new_node->data=n;
    new_node->addr=NULL;

    if(start==NULL){
        start=new_node;
    }else{
        curr=start;
        while(curr->addr!=NULL){
            curr=curr->addr;
        }
        curr->addr=new_node;

    }
}


void InsertFirst(int n){
    struct node *new_node;
    new_node=malloc(sizeof(struct node));
    new_node->data=n;
    new_node->addr=start;
    start=new_node;
}

void InsertMiddle(int n,int loc){
    struct node *new_node;
    new_node=malloc(sizeof(struct node));
    new_node->data=n;
    int cnt=1;
    curr=start;
    while(cnt<loc-1){
        curr=curr->addr;
        cnt++;
    }
    new_node->addr=curr->addr;
    curr->addr=new_node;

}

void delfirst(){
    curr=start;
    start=curr->addr;
    curr->addr=NULL;
    free(curr);
    
}

void delmid(int loc){
    int cnt=1;
    curr=start;
    struct node *temp;
    while(cnt<loc-1){
        curr=curr->addr;
        cnt++;
    }
    temp=curr->addr;
    curr->addr=temp->addr;
    free(temp);

}

void rev(){
    struct node *ptr1,*ptr2,*ptr3;
    ptr1=start;
    ptr2=ptr1->addr;
    ptr3=ptr2->addr;
    while(ptr3!=NULL){
        ptr2->addr=ptr1;
        ptr1=ptr2;
        ptr2=ptr3;
        ptr3=ptr3->addr;
    }
    ptr2->addr=ptr1;
    start->addr=NULL;
    start=ptr2;
    printf("\nLinked list is reversed!!");
}

void Display(){
    if(start==NULL){
        printf("\nLink list is empty");
    }else{
        curr=start;
        while(curr!=NULL){
            printf("|%d | %u|->",curr->data,curr->addr);
            curr=curr->addr;
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


