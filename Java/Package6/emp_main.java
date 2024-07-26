package package6;

import java.util.Scanner;

public class emp_main {

	public static void main(String[] args) {
		 int id;
		 float salary;
		 String address,dept,mob,name;
		 int n;
		 Scanner sc= new Scanner(System.in);
		 
		 System.out.println("Enter number of Employees :");
		 n=sc.nextInt();
		 emp e[]=new emp[n];
		 
		 for (int i = 0; i < e.length; i++) {
			e[i]=new emp();
			
			System.out.println("Enter id: ");
			id=sc.nextInt();
			e[i].setId(id);
			
			System.out.println("Enter Name: ");
			name=sc.next();
			e[i].setName(name);
			
			System.out.println("Enter Department: ");
			dept=sc.next();
			e[i].setDept(dept);
			
			System.out.println("Enter Mobile No: ");
			mob=sc.next();
			e[i].setMob(mob);
			
			System.out.println("Enter Address: ");
			address=sc.next();
			e[i].setAddress(address);
			
			System.out.println("Enter Salary: ");
			salary=sc.nextFloat();
			e[i].setSalary(salary);			
		}
		 
		 for (emp emp : e) {
			System.out.println(emp);
		}
		 sc.close();
		 
		 

	}

}
