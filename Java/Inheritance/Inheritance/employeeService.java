package Inheritance;

import java.util.Scanner;

public class employeeService {
	public static void create(employee[] e, int n) {
		// TODO Auto-generated method stub
		int id;
		String dept;
		float salary;
		int age;
		String name,address,mob,dob;

		Scanner sc=new Scanner(System.in);
		
		for (int i = 0; i < n; i++) {
			System.out.println("Enter Employee id: ");
			id=sc.nextInt();
			System.out.println("Enter Employee Name: ");
			name=sc.next();
			System.out.println("Enter Employee Department: ");
			dept=sc.next();
			System.out.println("Enter Employee Salary: ");
			salary=sc.nextFloat();
			System.out.println("Enter Employee Age: ");
			age=sc.nextInt();
			System.out.println("Enter Employee Address: ");
			address=sc.next();
			System.out.println("Enter Employee Contact No: ");
			mob=sc.next();
			System.out.println("Enter Employee Date of Birth: ");
			dob=sc.next();
			
			e[i]=new employee(age, name, address, mob, dob, id, dept, salary);
			
		}
	}

	public static employee search(employee[] e, int id) {
		// TODO Auto-generated method stub
		for (employee employee : e) {
			if(employee.getId()==id) {
				return employee;
			}
		}
		return null;
		
	}

	public static void display(employee[] e, int n) {
		// TODO Auto-generated method stub
		for (employee employee : e) {
			System.out.println(employee);
		}
		
	}

	public static employee search(employee[] e, String name) {
		// TODO Auto-generated method stub
		for (employee employee : e) {
			if(employee.getName().equalsIgnoreCase(name)) {
				return employee;
			}
		}
		return null;
	}

	public static int delete(employee[] e, int id, int n) {
		// TODO Auto-generated method stub
		for (int i = 0; i < n; i++) {
			if(e[i].getId()==id) {
				for (int j = i; j < n-i; j++) {
					e[j]=e[j+1];
				}
				n--;
			}
			
		}
		
		return n;
	}

	public static int delete(employee[] e, String name, int n) {
		// TODO Auto-generated method stub
		for (int i = 0; i < n; i++) {
			if(e[i].getName().equalsIgnoreCase(name)) {
				for (int j = i; j < n-i; j++) {
					e[j]=e[j+1];
				}
				n--;
			}
			
		}
		return n;
	}
	

}
