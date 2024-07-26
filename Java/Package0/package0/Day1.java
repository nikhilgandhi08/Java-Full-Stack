package package0;

import java.util.Scanner;

public class Day1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Hello World");
		int a,b;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter two numbers: ");
		a=sc.nextInt();
		b=sc.nextInt();
		
		System.err.println("Addition is: " +(a+b));
		
		
		int a1,a2,a3;
		System.out.println("Enter three numbers: ");
		a1=sc.nextInt();
		a2=sc.nextInt();
		a3=sc.nextInt();
		
//		if(a1>=a2 && a1>=a3) {
//			System.out.println("Max: "+a1);
//		}else if(a2>=a1 && a2>=a3) {
//			System.out.println("Max: "+a2);
//		}else {
//			System.out.println("Max: "+a3);
//		}
		
		System.out.println("Max: "+ Math.max(a1, Math.max(a2, a3)));
		
		int b1,b2;
		System.out.println("Enter two numbers: ");
		b1=sc.nextInt();
		b2=sc.nextInt();
		
		System.out.println("Arithmetic Operations are: ");
		System.out.println("Addition is: "+Math.addExact(b1, b2));
		System.out.println("Substraction is: "+Math.subtractExact(b1, b2));
		System.out.println("Multiplication is: "+Math.multiplyExact(b1, b2));
		System.out.println("Division is: "+Math.floorDiv(b1, b2));
		System.out.println("Maximum is: "+Math.max(b1, b2));
		System.out.println("Minimum is: "+Math.min(b1, b2));
		
		
		sc.close();

	}

}
