#include<stdio.h>

int main(){
    //Employee Salary

    int salary;
    printf("\nEnter salary:");
    scanf("%d",&salary);

    printf("\nBasic Salary:%d",salary);
    
    float tax;
    tax=0.05*salary;

    float pf;
    pf=0.12*salary;

    float hra;
    hra=0.1*salary;

    int bonus;
    printf("\nEnter bonus amount:");
    scanf("%d",&bonus);

    float tsalary;
    tsalary=salary-tax-pf+hra+bonus;

    printf("\n\t-----------Salary Details------------");
    printf("\n\tBasic Salary  :%d",salary);
    printf("\n\tTax           :%.2f",tax);
    printf("\n\tProvident Fund:%.2f",pf);
    printf("\n\tHRA           :%.2f",hra);
    printf("\n\tBonus         :%d",bonus);
    printf("\n\t--------------------------------------");
    printf("\n\tTotal Salary  :%.2f",tsalary);
   
}