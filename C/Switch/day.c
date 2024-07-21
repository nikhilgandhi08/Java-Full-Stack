#include<stdio.h>

int main(){

    int date;

    printf("Enter Date:");
    scanf("%d",&date);
    int date2;
    if(date<=31 && date>=0){
    date2=date%7;

        switch(date2){
            case 1:
            printf("\nSunday");
            break;

            case 2:
            printf("\nMonday");
            break;

            case 3:
            printf("\nTuesday");
            break;

            case 4:
            printf("\nWednesday");
            break;

            case 5:
            printf("\nThursday");
            break;

            case 6:
            printf("\nFriday");
            break;

            case 0:
            printf("\nSaturday");
            break;

            default:
            printf("Enter valid date");
            break;

        }
    }else{
        printf("\nEnter valid date");
    }
}