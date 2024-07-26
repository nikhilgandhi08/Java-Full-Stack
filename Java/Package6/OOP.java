package package6;


import java.util.Scanner;

public class OOP {
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int n;
		int Roll;
		String Name, course, address;
		float Marks;
		int Year;
		
		
		System.out.println("Enter number of students: ");
		n=sc.nextInt();
		OOP_main oo[]= new OOP_main[n];
		
		for(int i=0;i<n;i++) {
			oo[i]=new OOP_main();
			System.out.println("Enter Name: ");
			Name=sc.next();
			oo[i].setName(Name);
			
			System.out.println("Roll No: ");
			Roll=sc.nextInt();
			oo[i].setRoll(Roll);
			
			System.out.println("Enter year: ");
			Year=sc.nextInt();
			oo[i].setYear(Year);
			
			System.out.println("Enter Course: ");
			course=sc.next();
			oo[i].setCourse(course);
			
			System.out.println("Enter Address: ");
			address=sc.next();
			oo[i].setAddress(address);
			
			System.out.println("Enter Marks: ");
			Marks=sc.nextFloat();
			oo[i].setMarks(Marks);
		}
		
//		for (int i = 0; i < oo.length; i++) {
//		System.out.println("Name :"+oo[i].Name);
//		System.out.println("Roll No :"+oo[i].Roll);
//		System.out.println("Year :"+oo[i].Year );
//		System.out.println("Course :"+oo[i].course);
//		System.out.println("Address :"+oo[i].address);
//		System.out.println("Marks :"+oo[i].Marks);
		
//	}
		

		for (OOP_main oop_main : oo) {
			System.out.println(oop_main);
		}
		sc.close();
		
		
	}
}
