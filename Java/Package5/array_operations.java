package package5;

public class array_operations {

	public void append(int num,int n,int arr[]) {
		arr[n]=num;
		
	}

	public void search(int s, int arr[],int n) {
		int flag=0;
		for(int i=0; i<n; i++) {
			if(arr[i]==s) {
				flag=1;
				break;
			}
		}
		if(flag==1) {
			System.out.println("Element present ");
		}else {
			System.out.println("Element not present");
		}
		
	}
	
	
	public void delete(int del, int[] arr, int n) {
		int flag=0;
		for(int i=0; i<n; i++) {
			if(del==arr[i]) {
				for(int j=i; j<n; j++) {
					arr[j]=arr[j+1];
				}
				flag=1;
			}
		}
		
		if(flag==1) {
			System.out.println("Element Deleted");
		}else {
			System.out.println("Element not present");
		}
	}
	

	public int delete_duplicate(int[] arr, int n) {
		for(int i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				if(arr[i]==arr[j]) {
					for(int k=j; k<n; k++) {
						arr[k]=arr[k+1];
					}
					j--;
					n--;
				}
			}
		}
		return n;
	}
	
	public void min(int[] arr, int n) {
		int min=arr[0];
		for(int i=1; i<n; i++) {
			if(arr[i]<min) {
				min=arr[i];
			}
		}
		System.out.println("Minimum is: "+min);
	}
	
	public void display(int arr[],int n) {
		for(int i=0; i<n; i++) {
			System.out.println(arr[i]+" ");
		}
	}

	public void max(int[] arr, int n) {
		int max=arr[0];
		for(int i=1; i<n; i++) {
			if(arr[i]>max) {
				max=arr[i];
			}
		}
		System.out.println("Maximum is: "+max);
		
	}

	public void sum(int[] arr, int n) {
		int s=0;
		for(int i=0; i<n; i++) {
			s=s+arr[i];
		}
		System.out.println("Sum is: "+s);
		
	}

	public void sort(int[] arr, int n) {
		int min;
		for(int i=0; i<n; i++) {
			min=arr[i];
			for(int j=i+1; j<n; j++) {
				if(arr[j]<min) {
					arr[i]=arr[j];
					arr[j]=min;
					min=arr[i];
				}
			}
			
		}
		
	}

	public void update(int up, int upval,int[] arr,int n) {
		for(int i=0; i<n; i++) {
			if(arr[i]==up) {
				arr[i]=upval;
			}
		}
		
	}

	public void insert(int up, int upval, int[] arr, int n) {
		for(int i=0; i<n; i++) {
			if(i==up) {
				arr[i]=upval;
			}
		}
		
	}

	public void sortd(int[] arr, int n) {
		int max=arr[0];
		for(int i=1; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				if(arr[j]>max) {
					arr[i]=arr[j];
					arr[j]=max;
					max=arr[i];
				}
			}
		}
		
	}

	

	
		
	

}
