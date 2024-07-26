package Inheritance;

import java.util.Scanner;

public class employeetest {
	public static void main(String[] args) {
		int id,ch;
		employee result;
		String name;
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of employees: ");
		int n=sc.nextInt();
		employee e[]= new employee[n];
		employeeService.create(e,n);
		
		
		while (true) {
			System.out.println("1.Diplay\n2.Search by id\n3.Search by name\n4.Delete by id\n5.Delete by name\n6.Exit\nEnter your choice: ");
			ch=sc.nextInt();
			switch(ch) {
			case 1:
				employeeService.display(e,n);
				break;
				
			case 2:
				System.out.println("Enter id: ");
				id=sc.nextInt();
				result=employeeService.search(e,id);
				if(result==null) {
					System.out.println("Id not found");
				}else {
					System.out.println(result);
				}
				break;
				
			case 3:
				System.out.println("Enter Name: ");
				name=sc.next();
				result=employeeService.search(e, name);
				if(result==null) {
					System.out.println("Id not found");
				}else {
					System.out.println(result);
				}
				break;
				
			case 4:
				System.out.println("Enter id: ");
				id=sc.nextInt();
				n=employeeService.delete(e,id,n);
				break;
				
			case 5:
				System.out.println("Enter Name: ");
				name=sc.next();
				n=employeeService.delete(e,name,n);
				return;
				
			case 6:
				System.exit(0);
				
			}
			
		}
	}
	
}
