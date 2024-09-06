package Package4;

import java.util.Scanner;

public class Area2 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int ch,c;
		Area1 a=new Area1();
		
		do {
			System.out.println("Areas");
			System.out.print("1.Circle\n2.Triangle\n3.Rectangle\nEnter your choice: ");
			ch=sc.nextInt();
			switch(ch) {
			case 1: 
				
				System.out.println("Enter Radius of Circle: ");
				float r=sc.nextFloat();
				System.out.println("Area of Circle is: "+a.circle(r));
				break;
			
			case 2:
				System.out.println("Enter base and height of triangle: ");
				float b=sc.nextFloat();
				float h= sc.nextFloat();
				System.out.println("Area of Triangle is: "+a.triangle(b, h));
				break;
			
			case 3:
				System.out.println("Enter length and breadth of rectangle: ");
				float l=sc.nextFloat();
				float br=sc.nextFloat();
				System.out.println("Area of Rectangle is: "+a.rectangle(l, br));
				break;
			}
			
			System.out.print("Do you want to continue press 1: ");
			c=sc.nextInt();
		}while(c==1);
		
		sc.close();
	}
}
