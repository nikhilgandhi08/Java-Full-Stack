package package1;


import java.util.Scanner;

import package2.student;


public class Day4 {
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		student s1=new student();
		
		System.out.print("Enter Roll No: ");
		s1.roll=sc.nextInt();
		
		System.out.print("Enter Name: ");
		s1.name=sc.next();
		
		System.out.print("Enter Marks: ");
		s1.marks=sc.nextFloat();
		
		System.out.println("\nGiven Data is: ");
		System.out.println("Roll: " + s1.roll);
		System.out.println("Name: "+ s1.name);
		System.out.println("Marks: "+ s1.marks);
		
		
		
		
		int n;
		System.out.println("Enter number of students: ");
		n=sc.nextInt();
		
		student s[]=new student[n];
		
		for (int i = 0; i < s.length; i++) {
			s[i]=new student();
			System.out.print("Enter Roll No: ");
			s[i].roll=sc.nextInt();
			
			System.out.print("Enter Name: ");
			s[i].name=sc.next();
			
			System.out.print("Enter Marks: ");
			s[i].marks=sc.nextFloat();
		}
		
		System.out.println("Given Data is: ");
		for (int i = 0; i < s.length; i++) {
			System.out.println("Roll: " + s[i].roll);
			System.out.println("Name: "+ s[i].name);
			System.out.println("Marks: "+ s[i].marks);
		}
		
		sc.close();
	}
}
