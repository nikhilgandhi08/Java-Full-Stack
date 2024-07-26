package package8;

import java.util.Scanner;

public class bookinfo {
	public static book[] create() {
		Scanner sc=new Scanner(System.in);
		book b[]=new book[4];
		for (int i = 0; i < b.length; i++) {
			System.out.println("Enter Book Id: ");
			int bookid=sc.nextInt();
			System.out.println("Enter Book Name: ");
			String bookname=sc.next();
			System.out.println("Enter Book Price: ");
			float bookprice=sc.nextFloat();
			
			b[i]=new book(bookid, bookname, bookprice);
			
			sc.close();
		}
		return b;
		
	}
	
	public static void display(book b[]) {
		for (book book : b) {
			System.out.println("==========================");
			System.out.println("Book Id: "+ book.getId());
			System.out.println("Book Name: "+book.getName());
			System.out.println("Book Price: "+book.getPrice());
		}
	}
	
}
