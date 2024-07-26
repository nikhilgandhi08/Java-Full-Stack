package package7;

import java.util.Scanner;

public class TestBook {

	public static void main(String[] args) {
		int id,pages;
		String name,author,company;
		float price;
		int n;
		Scanner sc=new Scanner(System.in);
		
		
		System.out.println("How many books: ");
		n=sc.nextInt();
		
		ConstructBook b[]=new ConstructBook[n];
		for (int i = 0; i < b.length; i++) {
			System.out.println("Enter id: ");
			id=sc.nextInt();
			
			System.out.println("Enter name: ");
			name=sc.next();
			
			System.out.println("Enter author: ");
			author=sc.next();
			
			System.out.println("Enter pages: ");
			pages=sc.nextInt();
			
			System.out.println("Enter company: ");
			company=sc.next();
			
			System.out.println("Enter price: ");
			price=sc.nextFloat();
			
			b[i]=new ConstructBook(id, name, author, company, pages, price);
		}
		
		for (ConstructBook x: b) {
			x.display();	
		}
	}

}
