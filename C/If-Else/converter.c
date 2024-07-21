#include<stdio.h>

int main(){

    int ch1,ch2;
    float source,destination;

    printf("1.INR\n2.USD\n3.EURO\nFrom which currency you want to convert:");
    scanf("%d",&ch1);

    printf("Enter amount:");
    scanf("%f",&source);
    printf("\n1.INR\n2.USD\n3.EURO\nTo which currency you want to convert:");
    scanf("%d",&ch2);


    if(ch1==1){     
        if(ch2==1){
            printf("\nINR is selected");
            destination=source;
            printf("\nResult:%.2f INR",destination);
        }
        else if(ch2==2){
            printf("\nUSD is selected");
            destination=0.012*source;
            printf("\nResult:%.2f USD",destination);
        }
        else if(ch2==3){
            printf("\nEURO is selected");
            destination=0.011*source;
            printf("\nResult:%.2f EURO",destination);
        }
        else{
            printf("\nEnter valid input");
        }
    }
    else if(ch1==2){     
        if(ch2==1){
            printf("\nINR is selected");
            destination=83.19*source;
            printf("\nResult:%.2f INR",destination);
        }
        else if(ch2==2){
            printf("\nUSD is selected");
            destination=source;
            printf("\nResult:%.2f USD",destination);
        }
        else if(ch2==3){
            printf("\nEURO is selected");
            destination=0.92*source;
            printf("\nResult:%.2f EURO",destination);
        }
        else{
            printf("\nEnter valid input");
        }
    }
    else if(ch1==3){     
        if(ch2==1){
            printf("\nINR is selected");
            destination=90.31*source;
            printf("\nResult:%.2f INR",destination);
        }
        else if(ch2==2){
            printf("\nUSD is selected");
            destination=1.09*source;
            printf("\nResult:%.2f USD",destination);
        }
        else if(ch2==3){
            printf("\nEURO is selected");
            destination=source;
            printf("\nResult:%.2f EURO",destination);
        }
        else{
            printf("\nEnter valid input");
        }
    }
    else{
        printf("\nEnter valid input");
    }

}