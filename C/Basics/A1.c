#include<stdio.h>

int main(){
   /* printf("\nName:Nikhil Gandhi");
    printf("\nCollege:NBNSSOE");
    printf("\nContact No:7058320805");
    printf("\nBranch:Comp");


    int no1;
    printf("\nEnter any number:");
    scanf("%d",&no1);
    printf("%d",no1);

    float no2;
    printf("\nEnter any decimal number:");
    scanf("%f",&no2);
    printf("%f",no2);

    char ch;
    scanf("%c",&ch);
    printf("\n%c",ch);

    char ch1[10]="NIKHIL";
    printf("\n%s",ch1);

    //Areas and Permimeter

    float area1,radius,p1;
    printf("\nEnter the radius:");
    scanf("%f",&radius);
    area1=3.14*radius*radius;
    p1=2*3.14*radius;
    printf("\nArea of Circle:%.2f",area1);
    printf("\nPerimeter of Circle:%.2f",p1);

    float side,area2,p2;
    printf("\nEnter the side:");
    scanf("%f",&side);
    area2=side*side;
    p2=4*side;
    printf("\nArea of Square:%.2f",area2);
    printf("\nPerimeter of square:%.2f",p2);*/

    //Mark Memo

    int roll;
    char name[20];
    int sub1,sub2,sub3,total;
    float percentage;

    printf("\nEnter roll no:");
    scanf("%d",&roll);
    printf("\nEnter name:");
    scanf("%s",&name);
    printf("\nEnter marks of sub1,sub2,sub3:");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    total=sub1+sub2+sub3;
    percentage=(float)total/3;

    printf("\n\t-------------Student Marksheet-------------");
    printf("\n\tStudent Roll No:%d",roll);
    printf("\n\tStudent Name   :%s",name);
    printf("\n\tSubject 1      :%d",sub1);
    printf("\n\tSubject 2      :%d",sub2);
    printf("\n\tSubject 3      :%d",sub3);
    printf("\n\tTotal Marks    :%d",total);
    printf("\n\tPercentage     :%.2f",percentage);

    if(sub1>=35 && sub2>=35 && sub3>=35){
        printf("\n\tResult     :Pass");
    }else{
        printf("\n\tResult     :Fail");
    }
    printf("\n\t-------------------------------------------");
   

    
}