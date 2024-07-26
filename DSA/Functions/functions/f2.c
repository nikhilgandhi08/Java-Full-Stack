#include<stdio.h>
#include<stdlib.h>

#define max 20



void factor(){
    int n,i;
    printf("\nEnter any number for factors : ");
    scanf("%d",&n);
    printf("\nFactors are : ");
    for(i = 2; i <= n/2; i++){
        if(n % i == 0){
            printf("%d ",i);
        }
    }

}

void factorial(){
    int n,i,result=1;
    printf("\nEnter any number for factorial : ");
    scanf("%d",&n);
    
    for(i=n;i>0;i--){
        result *= i;
    }
   printf("\nFactorial of %d! : %d ",n,result);
}

void prime(){
    int n,i,flag=0;
    printf("\nEnter any number to check whether it is prime : ");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++){
        if(n%i!=0){
           flag=1;
           break;
        }
    }
    if(flag==1){
        printf("\nEntered number is prime number");
    }else{
        printf("\nEntered number is not prime number");
    }
}

void reverse(){
    int n,i,arr[max];
    printf("\nEnter number of elements do you want to insert : ");
    scanf("%d",&n);
    printf("\nEnter %d elements : ",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nReverse elements are : ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}

void palindrome(){
    int n,i,j,flag=0,arr[max];
    printf("\nEnter number of elements do you want to insert : ");
    scanf("%d",&n);
    printf("\nEnter %d elements : ",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\nEntered number is not palindrome");
    }else{
        printf("\nEntered number is palindrome");
    }
}

void fibonacci(){

    // int i,n,arr[max];
    // arr[0]=0,arr[1]=1;
    // printf("Enter number of fibonacci elements do you want to display :  ");
    // scanf("%d",&n);
    // printf("\n%d ",arr[0]);
    // for(i=1;i<n;i++){
    //     printf("%d ",arr[i]);
    //     arr[i+1]=arr[i]+arr[i-1];
    // }
   
    printf("\nWithout array : ");
    int t1=0,t2=1,temp=0,i,n;
    printf("\nEnter number of fibonacci elements do you want to display :  ");
    scanf("%d",&n);
    printf("\nFibonacci Series is : %d %d ",t1,t2);
    temp=t1+t2;
    for(i=3;i<=n;i++){
        printf("%d ",temp);
        t1=t2;
        t2=temp;
        temp=t1+t2;
    }

}

void sod(){
    int arr[max],n,i,sum=0;
    printf("\nEnter number of elements do you want to insert : ");
    scanf("%d",&n);
    printf("\nEnter %d elements : ",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("\nSum of entered elements is : %d",sum);
}

void arm(){
    int n=0,num,result=1,i,r,q;
    printf("Enter any number to check for armstrong number : ");
    scanf("%d",&num);
    while(num!=0){
        num=num/10;
        n++;
    }
    q=num/10;
    while(num!=0){
        for(i=0;i<n;i++){
            r=num%10;
            result*=r;
        }
    }
}

int main(){
    system("cls");
    int ch,c;

    do{
        printf("\n1-Factor\n2-Factorial\n3-Prime\n4-Reverse\n5-Palindrome\n6-Fibonnaci\n7-Sum of digit\n8-Armstrong\n9-Perfect no\n10-Neon no\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                factor();
                break;

            case 2:
                factorial();
                break;

            case 3:
                prime();
                break;

            case 4:
                reverse();
                break;

            case 5:
                palindrome();
                break;

            case 6:
                fibonacci();
                break;

            case 7:
                sod();
                break;

            case 8:
                arm();
                break;
        }
        printf("\nDo you want to continue press 1:");
        scanf("%d",c);
    }while(c!=1);

}



  



