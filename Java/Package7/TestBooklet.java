package package7;

import java.util.Scanner;

public class TestBooklet {
	public static void main(String[] args) {
		int ch,c,n;
		int id,pages;
		String name,author,company;
		float price;
		Scanner sc= new Scanner(System.in);
		
		booklet b[]=new booklet[100];
		System.out.println("Enter number of books you want to enter: ");
		n=sc.nextInt();
		for (int i = 0; i <n; i++) {
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
			
			b[i]=new booklet(id, name, author, company, pages, price);
		}
		System.out.println("\nEntered Data: ");
		for (int i = 0; i <n; i++) {
			b[i].display();
		}
		
		do {
			System.out.println("1.New(unique id is allowed)\n2.Search by id\n3.Search by name\n4.Sort by price\n5.Sort by pages\n6.Update price\n7.Search by author name\n8.Delete\n9.Display\nEnter your Choice: ");
			ch=sc.nextInt();
			switch(ch) {
				case 1:
					System.out.println("Enter id: ");
					id=sc.nextInt();
					boolean flag=true;
					for(int i=0;i<n;i++) {
						if(b[i].getId()==id) {
							flag=false;
							break;
						}
					}
					if(flag) {
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
					
						b[n]=new booklet(id, name, author, company, pages, price);
						n++;
					}else {
						System.out.println("The book id already exist!!");
					}
					break;
					
				case 2:
					System.out.println("Enter name: ");
					name=sc.next();
					for(int i=0; i<n; i++) {
						if(b[i].getName().equalsIgnoreCase(name)) {
							System.out.println("Book Found!!");
							b[i].display();
						}
					}
					break;
					
				case 3:
					System.out.println("Enter id: ");
					id=sc.nextInt();
					for(int i=0; i<n; i++) {
						if(b[i].getId()==id) {
							System.out.println("Book Found!!");
							b[i].display();
						}
					}
					break;
					
				case 4:
					float min;
					booklet temp;
					for(int i=0; i<n; i++) {
						min=b[i].getPrice();
						for(int j=i+1; j<n; j++) {
							if(b[j].getPrice()<min) {
								min=b[j].getPrice();
								temp= b[j];
								b[j]=b[i];
								b[i]=temp;
							}
						}
						
					}
					for(int j=0; j<n; j++) {
						b[j].display();
					}
					break;
					
				case 5:
					int pgno;
					booklet temp1;
					for(int i=0; i<n; i++) {
						pgno=b[i].getPages();
						for(int j=i+1; j<n; j++) {
							if(b[j].getPages()>pgno) {
								pgno=b[j].getPages();
								temp1= b[j];
								b[j]=b[i];
								b[i]=temp1;
							}
						}
						
					}
					break;
					
				case 6:
					System.out.println("Enter Book Id: ");
					id=sc.nextInt();
					for(int i=0; i<n; i++) {
						if(b[i].getId()==id) {
							System.out.println("Enter updated price: ");
							price=sc.nextFloat();
							b[i].setPrice(price);
							System.out.println("Updated Successfully");
							b[i].display();
						}
					}
					break;
					
				case 7:
					System.out.println("Enter author name: ");
					author=sc.next();
					for(int i=0; i<n; i++) {
						if(b[i].getName().equalsIgnoreCase(author)) {
							System.out.println("Book Found!!");
							b[i].display();
						}
					}
					break;
					
				case 8:
					System.out.println("Enter Book Id: ");
					id=sc.nextInt();
					boolean flag1=false;
					int i;
					for( i=0; i<n; i++) {
						if(b[i].getId()==id) {
							flag1=true;
							break;
						}
					}
					
					if (flag1) {
						while(i<n) {
							b[i]=b[i+1];
							i++;
						}
						n--;
					}
					break;
					
				case 9:
					for(int j=0; j<n; j++) {
						b[j].display();
					}
					break;
					
					
			}
			System.out.println("Do you want to continue press 1: ");
			c=sc.nextInt();
		}while(c==1);
		
		sc.close();
	}
	
	
}
