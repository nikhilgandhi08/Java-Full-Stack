#include<stdio.h>
#include<stdlib.h>

struct  stud{
    int rollno;
    char sname[10];
    float perct;

    struct stud *addr;
}*start,*curr,*prev;

void create(){
    struct stud *newstud;
    newstud=malloc(sizeof( struct stud));
    printf("Enter Roll Number :");
    scanf("%d",&newstud->rollno);
    printf("Enter Student Name :");
    scanf("%s",newstud->sname);
    printf("Enter Student Percentage :");
    scanf("%f",&newstud->perct);
    newstud->addr=NULL;

    if(start==NULL){
        start=newstud;
    }else{
        curr=start;
        prev=NULL;
        while(curr!=NULL && newstud->perct>=curr->perct){
            prev=curr;
            curr=curr->addr;
        }
        if(prev==NULL){
            newstud->addr=start;
            start=newstud;
        }else{
            newstud->addr=curr;
            prev->addr=newstud;
        }
    }

}

void display(){
    if(start==NULL){
        printf("Empty Record");
    }else{
        curr=start;
        while(curr!=NULL){
            printf("|%d |%s |%.2f |%u |->",curr->rollno,curr->sname,curr->perct,curr->addr);
            curr=curr->addr;
        }
    }
}

void search(int n){
    curr=start;
    int flag;
    while(curr!=NULL){
        flag=1;
        if(n==curr->rollno){
            printf("\nStudent Record Found!!");
            break;
        }else{
            flag=0;
        }
        curr=curr->addr;
    }
    if(flag==1){
        printf("\n|%d |%s |%.2f |%u |->",curr->rollno,curr->sname,curr->perct,curr->addr);
    }
}

void delete(int n){
    struct stud *prev;
    curr=start;
    int flag;
    prev=curr;
    while(curr!=NULL){
        if(n==curr->rollno){
            flag=1;
            break;
        }else{
            flag=0;
        }
        prev=curr;
        curr=curr->addr;
    }
    if(flag==1){
        prev->addr=curr->addr;
        curr->addr=NULL;
        free(curr);
        printf("Student Record Deleted Successfully");
    }
}
int main(){
    system("cls");
    int n,ch,c,loc;

    start=NULL;
    do{ 
        printf("\n1.Create\n2.Display\n3.Search\n4.Delete\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("Enter Roll No of student to search :");
                scanf("%d",&n);
                search(n);
                break;

            case 4:
                printf("Enter Roll No of student to search :");
                scanf("%d",&n);
                delete(n);
                break;
        }
        printf("\nDo you want to continue? press 1 :");
        scanf("%d",&c);
    }while(c==1);
}