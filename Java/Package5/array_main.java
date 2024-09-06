package package5;

import java.util.Scanner;

public class array_main {
	public static void main(String[] args) {
		int ch,c,n;
		Scanner sc=new Scanner(System.in);
		array_operations a=new array_operations();
		int arr[]=new int[100];
		System.out.println("Enter number of elements want to insert: ");
		n=sc.nextInt();
		System.out.println("Enter Elements: ");
		for(int i=0; i<n; i++) {
			arr[i]=sc.nextInt();
		}
		
		do {
			System.out.print("1.Append\n2.Search\n3.Delete\n4.Delete Duplicate\n5.Min\n6.Max\n7.Sort\n8.Update\n9.Sum\n10.Insert\n11.Sort desc\n12.Display\nEnter your choice:");
			ch=sc.nextInt();
			switch(ch) {
			case 1:
				if(n==100) {
					System.out.println("Array is full");
				}else {
					System.out.println("Enter number to append: ");
					int num=sc.nextInt();
					a.append(num,n,arr);
					n++;
				}
				break;
				
			case 2:
				System.out.println("Enter element you want to search: ");
				int s=sc.nextInt();
				a.search(s,arr,n);
				break;
				
			case 3:
				System.out.println("Enter element you want to delete: ");
				int del=sc.nextInt();
				a.delete(del,arr,n);
				break;
				
			case 4:
				n=a.delete_duplicate(arr,n);
				break;
				
			case 5:
				a.min(arr,n);
				break;
			
			case 6:
				a.max(arr,n);
				break;
				
			case 7:
				a.sort(arr,n);
				break;
				
			case 8:
				System.out.println("Element to update and update value: ");
				int up=sc.nextInt();
				int upval=sc.nextInt();
				a.update(up,upval,arr,n);
				break;
				
			case 9:
				a.sum(arr,n);
				break;
				
			case 10:
				System.out.println("Enter insert location and insert value: ");
				up=sc.nextInt();
				upval=sc.nextInt();
				a.insert(up,upval,arr,n);
				break;
				
			case 11:
				a.sortd(arr,n);
				break;
				
			case 12:
				a.display(arr, n);
				break;
			}
			
			
				
			System.out.println("Do you want to continue press 1: ");
			c=sc.nextInt();
		}while(c==1);
		
		sc.close();
	}
}
