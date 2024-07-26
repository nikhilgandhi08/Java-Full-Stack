package Inheritance;

import java.util.Scanner;

public class Studentmain extends Person {
	public static void main(String[] args) {
		int age;
		String name, address, mob, dob;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Name: ");
		name=sc.next();
		System.out.println("Enter Age: ");
		age=sc.nextInt();
		System.out.println("Enter Address: ");
		address=sc.next();
		System.out.println("Enter Mobile No: ");
		mob=sc.next();
		System.out.println("Enter Date of Birth");
		dob=sc.next();
		Person p=new Person(age, name, address, mob, dob);
		
		System.out.println(p);
		
		sc.close();
	}
}
