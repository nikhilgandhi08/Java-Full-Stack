package Polymorphism;

import java.util.Scanner;

public class Billmain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int id,ch;
		Bill result;
		String cname;
		Scanner sc=new Scanner(System.in);
		int n;
		System.out.println("Enter number of customers: ");
		n=sc.nextInt();
		
		Bill b[]=new Bill[100];
		
		System.out.println("Enter number of amounts: ");
		int m=sc.nextInt();
		int amount[]=new int[m];
		
		
		for (int i = 0; i < n; i++) {
			System.out.println("Enter a id: ");
			id=sc.nextInt();
			System.out.println("Enter Customer Name: ");
			cname=sc.next();
			System.out.println("Enter Total Amount: ");
			for(int j=0; j<m; j++) {
				amount[j]=sc.nextInt();
			}
			
			b[i]=new Bill(id, cname, amount);
			
		}
		
		for (Bill bill : b) {
			System.out.println("Bill id: "+bill.getId());
			System.out.println("Customer Name: "+bill.getCname());
			System.out.println("Total Amount: "+bill.getTotal());
		}
		
		while(true) {
			System.out.println("1.Search by id\n2.Search by Name\n\n3.Display\n4.Delete by id\n5.Delete by name\n6.Exit\nEnter your choice: ");
			ch=sc.nextInt();
			
			switch(ch) {
			
			case 1:
				System.out.println("Enter id: ");
				id=sc.nextInt();
				result=Bill.search(b,id,n);
				if(result==null) {
					System.out.println("Id not found");
				}
				break;
				
			case 2:
				System.out.println("Enter id: ");
				cname=sc.next();
				result=Bill.search(b,cname,n);
				if(result==null) {
					System.out.println("Name not found");
				}
				break;
				
			case 3:
				for (Bill bill : b) {
					System.out.println("Bill id: "+bill.getId());
					System.out.println("Customer Name: "+bill.getCname());
					System.out.println("Total Amount: "+bill.getTotal());
				}
				break;
				
			case 4:
				System.out.println("Enter id: ");
				id=sc.nextInt();
				n=Bill.delete(b,id,n);
				break;
				
			case 5:
				System.out.println("Enter name: ");
				cname=sc.next();
				n=Bill.delete(b,cname,n);
				break;
			
			case 6:
				return;
			}
			
			sc.close();
		}
		
		

	}

	

}
