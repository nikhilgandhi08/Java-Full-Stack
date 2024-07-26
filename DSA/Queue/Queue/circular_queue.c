#include<stdio.h>
#include<stdlib.h>

#define max 5

int que[max];
int front=-1,rear=-1,i;

void push(int n){
    if(front==-1){
        front++;
        rear++;
        que[front]=n;
    }else{
        if((front==rear+1) || ((rear==max-1) && (front==0))){
            printf("\nCircular Queue is full!!");
        }else{
           rear=(rear+1)%max;
           que[rear]=n;
        }
    }
}

void pop(){
    if(front==-1){
        printf("\nQueue is Empty!!");
    }else{
        printf("\nPopped Element is :%d",que[front]);
        if(front==rear){
            front=rear=-1;
        }else{
            front=(front+1)%max;
        }
    }
}

void display(){
    if(front==-1){
        printf("\nQueue is Empty!!");
    }else{
        i=front;
        while((i!=rear+1) || ((i==0) && (rear==max-1))){
            printf("| %d|-->",que[i]);
            i++;
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
                printf("\nEnter value to insert into Queue :");
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