#include<stdio.h>
 
int main(){

    int consumerNumber;
    char custName[10];
    int noofunits;
    float tax,finalbill,total=0;

    printf("Enter Consumer Number:");
    scanf("%d",&consumerNumber);

    printf("\nEnter Customer Name:");
    scanf("%s",&custName);

    printf("\nEnter No. of Units:");
    scanf("%d",&noofunits);

    if(noofunits<=100){
        total= noofunits*3.33;
    }
    else if(noofunits>100 && noofunits<=300){
        total=100*3.33+(noofunits-100)*5.55;
    }
    else if(noofunits>300 && noofunits<=500){
        total=100*3.33+200*5.55+(noofunits-300)*7.77;
    }
    else{
        total=100*3.33+200*5.55+200*7.77+(noofunits-500)*11.11;
    }

    tax=0.06*total;
    finalbill=total+tax;

    printf("\n\t-----------------Electricity Bill-----------------");
    printf("\n\tConsumer Number           :%d",consumerNumber);
    printf("\n\tCustomer Name             :%s",custName);
    printf("\n\tNumber of Units           :%d",noofunits);
    printf("\n\tTotal Amount excluding tax:%.2f",total+500);
    printf("\n\tTax                       :%.2f",tax);
    printf("\n\tTotal Bill including tax  :%.2f",finalbill);
}