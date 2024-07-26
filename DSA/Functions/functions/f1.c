#include<stdio.h>
#include<stdlib.h>





void area_circle(){
    int r;
    float area;

    printf("Enter radius:");
    scanf("%d",&r);

    area=3.14*r*r;
    printf("\nArea of circle:%.2f",area);
}

void area_triangle(){
    int l,b;
    float area;

    printf("\nEnter length and breadth of triangle:");
    scanf("%d%d",&l,&b);

    area=0.5*l*b;
    printf("\nArea of triangle:%.2f",area);
}


void area_rect(){
    int l,b,area;

    printf("\nEnter length and breadth of rectangle:");
    scanf("%d%d",&l,&b);

    area=l*b;
    printf("\nArea of rectangle:%d",area);

}

void sum (){
    int n1,n2,add;

    printf("\nEnter number 1:");
    scanf("%d",&n1);

    printf("\nEnter number 2:");
    scanf("%d",&n2);

    add=n1+n2;
    printf("\nAddition is:%d",add);

}

int main(){
    system("cls");
    int ch,c=1;
    

    while(c==1){
        printf("\n1.Sum\n2.Circle Area\n3.Triangle Area\n4.Rectangle Area");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
            switch(ch){
                case 1:
                    sum();  
                    break;

                case 2:
                    area_circle();
                    break;

                case 3:
                    area_triangle();
                    break;

                case 4:
                    area_rect();
                    break;

        }
        printf("\nDo you want to continue press1:");
        scanf("%d",&c);
        if(c!=1){

            break;
           
        }

    }
    printf("\n-----------THANK YOU-------------");

}