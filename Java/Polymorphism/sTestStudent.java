package Polymorphism;

import java.util.Scanner;

public class sTestStudent {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name;
		int Roll;
		float marks;
		int n,c;
		student result;
		
		System.out.println("Enter number of Students:");
		n=sc.nextInt();
		student s[]=new student[n];
		
		for (int i = 0; i < s.length; i++) {
			System.out.println("Enter Name: ");
			name=sc.next();
			System.out.println("Enter Roll No: ");
			Roll=sc.nextInt();
			System.out.println("Enter Marks: ");
			marks=sc.nextFloat();
			s[i]=new student(name, Roll, marks);
		}
		
		while(true) {
			System.out.println("1.Search by Roll\n2.Search by Name\n3.Exit\nEnter your choice: ");
			c=sc.nextInt();
			switch(c) {
			case 1:
				System.out.println("Enter Roll:");
				Roll=sc.nextInt();
				result=student.search(s, Roll);
				if(result==null) {
					System.out.println("Roll No. not found");
				}else
					System.out.println(result);
				break;
				
			case 2:
				System.out.println("Enter Name:");
				name=sc.next();
				result=student.search(s, name);
				if(result==null) {
					System.out.println("Name not found");
				}else
					System.out.println(result);
				break;
				
			case 3:
				return;
			}
			sc.close();
		}
	}
}
