package Package4;

import java.util.Scanner;

public class main1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int a,b;
		operation obj = new operation();
		System.out.println("Enter two numbers: ");
		a=sc.nextInt();
		b=sc.nextInt();
		
		obj.addData(a, b);
		obj.subData(a, b);
		obj.mulData(a, b);
		obj.divData(a, b);
		
		sc.close();
	}
	
}
