package package3;

import java.util.Scanner;

public class arrMult {
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		int r1,r2,c1,c2;
		
		System.out.println("Rows in array1: ");
		r1=sc.nextInt();
		
		System.out.println("Columns in array1: ");
		c1=sc.nextInt();
		
		int arr1[][]=new int[r1][c1];
		accept(arr1,r1,c1);
		
		
		System.out.println("Rows in array2: ");
		r2=sc.nextInt();
		
		System.out.println("Columns in array2: ");
		c2=sc.nextInt();
		
		int arr2[][]=new int[r2][c2];
		accept(arr2,r2,c2);
		
		int mult[][]=new int[r1][c2];
		mult(arr1,arr2,r1,c1,mult);
		display(mult,r1,c2);
		
		
	}
	
	private static void accept(int a[][],int r,int c) {
		System.out.println("Enter "+ r*c + "Elements: ");
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {
				a[i][j]=sc.nextInt();
			}
		}
	}
	
	private static void mult(int a[][], int b[][],int r1,int c1,int mult[][]) {
			
		for(int i=0;i<r1;i++) {
			for(int j=0;j<c1;j++){
				for(int c=0;c<c1;c++) {
					mult[i][j]+=a[i][c]*b[c][j];
				}
			}
		}
	}
	
	private static void display(int mult[][],int r1,int c2) {
		System.out.println("Multiplication is: ");
		for(int i=0; i<r1; i++) {
			for(int j=0;j<c2;j++) {
				System.out.print(mult[i][j]+" ");
			}
			System.out.println();
		}
	}
	
	
}
