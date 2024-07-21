#include<stdio.h>

int main(){
    int ch,o;
    int total=0;
    int cnt=0;
    menu:
    printf("\n--------------------MENU----------------------");
    printf("\n1-Starter\n2-Main Course\n3-Desserts");
    printf("\nEnter your choice:");
    scanf("%d",&ch);

    if(ch==1){
        starters:
        printf("\n---------------WELCOME TO STARTERS----------------");
        printf("\n1-Masala Papad\t:40");
        printf("\n2-Paneer Chilly\t:250");
        printf("\n3-Paneer Tikka\t:250");
        printf("\nEnter your choice:");
        scanf("%d",&o);

        if(o==1){
            total = total + 40;

        }
        else if(o==2){
            total= total +250;
        }
        else if(o==3){
            total= total+250;
        }
        else{
            printf("\nEnter valid order");
        }

        if(o<=3){
            cnt++;
            printf("\n%d Order is confirmed",cnt);
        }
        printf("\nDo you want to conitnue with starters again press 1:");
        scanf("%d",&ch);

        if(ch==1){
            goto starters;
        }
    
    }
    else if(ch==2){
        maincourse:
        printf("\n--------------MAIN COURSE-------------");
        printf("\n1.Paneer Butter Masal-250");
        printf("\n2.Paneer Tikka Masala-270");
        printf("\n3.Veg Maratha-200");
        printf("\nEnter your choice:");
        scanf("%d",&o);

        if(o==1){
            total=total+250;
        }
        else if(o==2){
            total=total+270;
        }
        else if(o==3){
            total=total+200;
        }
        else{
            printf("\nEnter valid order");
        }

        if(o<=3){
            cnt++;
            printf("\n%d order is confirmed");
        }
        printf("\nDo you want to continue with main course again press 1:");
        scanf("%d",ch);
        if(ch==1){
            goto maincourse;
        }

    }




    printf("\nDo you want to continue with main menu again press 1:");
    scanf("%d",&ch);
    if(ch==1){
        goto menu;
    }

   if (cnt>=1){
    printf("\n\t----------------BILL------------");
    printf("\nNo of items   :%d",cnt);
    printf("\nTaxable Amount:%d",total);
    printf("\nTotal Tax     :%.2f",total*0.12);
    printf("\nTotal Bill    :%.2f",total+total*0.12);
   }else{
    printf("\nNO ORDER");
   }






    
}