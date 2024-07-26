package package8;

import java.util.Scanner;

public class accountinfo {
	public static account[] create() {
		Scanner sc=new Scanner(System.in);
		account a[]=new account[4];
		
		for (int i = 0; i < a.length; i++) {
			System.out.println("Enter Customer Id: ");
			int custid=sc.nextInt();
			
			System.out.println("Enter Customer Name: ");
			String custname=sc.next();
			
			System.out.println("Enter Balance: ");
			float balance=sc.nextFloat();
			
			a[i]=new account(custid, custname, balance);
		}
		sc.close();
		return a;
		
	}
	
	public static void display(account a[]) {
		for (account account : a) {
			System.out.println("Customer Id: "+account.getCustid());
			System.out.println("Customer Name: "+account.getCustname());
			System.out.println("Balance: "+account.getBalance());
		}
	}
}
