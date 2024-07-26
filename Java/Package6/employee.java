package package6;

import java.util.Scanner;

public class employee {
	public static void main(String[] args) {
		 int id;
		 float salary;
		 String address,dept,mob,name;
		 int n,ch,c;
		 
		 Scanner sc=new Scanner(System.in);
		 System.out.println("Enter Number of Employees: ");
		 n=sc.nextInt();
		 emp em[]=new emp[n];
		 
		 for (int i = 0; i < em.length; i++) {
			 em[i]=new emp();
				
				System.out.println("Enter id: ");
				id=sc.nextInt();
				em[i].setId(id);
				
				System.out.println("Enter Name: ");
				name=sc.next();
				em[i].setName(name);
				
				System.out.println("Enter Department: ");
				dept=sc.next();
				em[i].setDept(dept);
				
				System.out.println("Enter Mobile No: ");
				mob=sc.next();
				em[i].setMob(mob);
				
				System.out.println("Enter Address: ");
				address=sc.next();
				em[i].setAddress(address);
				
				System.out.println("Enter Salary: ");
				salary=sc.nextFloat();
				em[i].setSalary(salary);
			
		}
		 
		 do {
			 System.out.println("Search By :\n1.Id\n2.Name\n3.Max Salary\n4.Min Salary\n5.Sort By Salary\n6.Display\nEnter a choice: ");
			 ch=sc.nextInt();
			 
			 switch(ch) {
			 	case 1:
			 		System.out.println("Enter Id: ");
			 		id=sc.nextInt();
			 		for (int i = 0; i < em.length; i++) {
						if(em[i].getId()==id) {
							System.out.println(em[i]);
						}
					}
			 		break;
			 		
			 	case 2:
			 		System.out.println("Enter Name: ");
			 		name=sc.next();
			 		
			 		for (int i = 0; i < em.length; i++) {
						if(em[i].getName().equalsIgnoreCase(name)) {
							System.out.println(em[i]);
						}
					}
			 		break;
			 		
			 	case 3:
			 		float max=em[0].getSalary();
			 		for (int i = 1; i < em.length; i++) {
						if(em[i].getSalary()>max) {
							max=em[i].getSalary();
						}
					}
			 		System.out.println("Maximum Salary Employee: ");
			 		for (int i = 0; i < em.length; i++) {
						if(em[i].getSalary()==max) {
							System.out.println(em[i]);
						}
					}
			 		
			 		
			 		break;
			 		
			 	case 4:
			 		float min=em[0].getSalary();
			 		for (int i = 1; i < em.length; i++) {
						if(em[i].getSalary()<min) {
							min=em[i].getSalary();
						}
					}
			 		System.out.println("Minimum Salary Employee: ");
			 		for (int i = 0; i < em.length; i++) {
						if(em[i].getSalary()==min) {
							System.out.println(em[i]);
						}
					}
			 		
			 		break;
			 		
			 	case 5:
			 		emp temp=new emp();
			 		for (int i = 0; i < em.length; i++) {
			 			float mini =em[i].getSalary();
						for (int j = 0; j < em.length; j++) {
							if(em[j].getSalary()<mini) {
								temp=em[j];
								em[j]=em[i];
								em[i]=temp;
								mini=temp.getSalary();
								
							}
						}
					}
			 		break;
			 		
			 	case 6:
			 		for (emp emp : em) {
						System.out.println(emp);
					}
			 }
			 System.out.println("Do you want to continue press 1: ");
			 c=sc.nextInt();
		 }while(c==1);
			 
	}
	
	
}
