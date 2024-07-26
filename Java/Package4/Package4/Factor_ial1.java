package Package4;

import java.util.Scanner;

public class Factor_ial1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int ch,c,n;
		factor_ial2 f=new factor_ial2();
		
		do {
			System.out.print("1.Factor\n2.Factorial\n3.Power\n4.Perfect Number\n5.Prime Number\n6.Reverse\n7.Palindrome\nEnter your choice: ");
			ch=sc.nextInt();
			switch(ch) {
			case 1: 
				System.out.println("Enter number for factor: ");
				n=sc.nextInt();
				System.out.print("Factors of "+n+"are: ");
				f.factor(n);
				
				break;
			
			case 2:
				System.out.println("Enter number for factorial: ");
				n=sc.nextInt();
				System.out.println("Factors of "+ n +" are: "+ f.factorial(n));
				break;
			
			case 3:
				System.out.println("Enter number for base: ");
				int b=sc.nextInt();
				System.out.println("Enter number for power: ");
				int p=sc.nextInt();
				System.out.println("Result is: "+ f.power(b,p));
				break;
				
			case 4:
				System.out.println("Enter number for perfect number: ");
				n=sc.nextInt();
				System.out.println("Given number is "+ f.perfect(n));
				break;
				
			case 5:
				System.out.println("Enter number to check prime number: ");
				n=sc.nextInt();
				System.out.println("Given number is " + f.prime(n));
				break;
				
			case 6:
				System.out.println("Enter number to reverse: ");
				n=sc.nextInt();
				System.out.println("Reversed number is: "+ f.reverse(n));
				break;
			}
			
			System.out.print("\nDo you want to continue press 1: ");
			c=sc.nextInt();
		}while(c==1);
		
		sc.close();
	}

}
