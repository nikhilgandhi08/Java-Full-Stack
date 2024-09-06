package package3;

import java.util.Scanner;

public class arrAdd {
	public static void main(String[] args) {
		int r,c;
		Scanner sc=new Scanner(System.in);
		System.out.println("Number of Rows: ");
		r=sc.nextInt();
		System.out.println("Number of Columns: ");
		c=sc.nextInt();
		
		int arr1[][]=new int[r][c];
		int arr2[][]=new int[r][c];
		System.out.println("Enter Numbers in Array1: " + r*c);
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++)
				arr1[i][j]=sc.nextInt();
		}
		
		System.out.println("Enter Numbers in Array2: " + r*c);
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++)
				arr2[i][j]=sc.nextInt();
		}
		
		System.out.println("Addition is: ");
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++) {
				System.out.print(" "+ (arr1[i][j] + arr2[i][j]));
			}
			System.out.println();
		}
		
		sc.close();
	}
	
	
	
	
}
