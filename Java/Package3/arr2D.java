package package3;

import java.util.Scanner;

public class arr2D {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int r,c;
		Scanner sc=new Scanner(System.in);
		System.out.println("Number of Rows: ");
		r=sc.nextInt();
		System.out.println("Number of Columns: ");
		c=sc.nextInt();
		
		int arr[][]=new int[r][c];
		System.out.println("Enter Numbers: " + r*c);
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++)
				arr[i][j]=sc.nextInt();
		}
		
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++) {
				System.out.print(" "+ arr[i][j]);
			}
			System.out.println();
		}
		
		sc.close();
		
	}

}
