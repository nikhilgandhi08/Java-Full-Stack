package Package4;

public class factor_ial2 {
	
	
	public void factor(int n) {
		for(int i=2; i<n/2; i++) {
			if(n%i==0) {
				System.out.print(i + " ");
			}
		}
	}
	
	
	public int factorial(int n) {
		int result=1;
		for(int i=1; i<=n; i++) {
			result= result*i;
		}
		return result;
	}
	
	
	public int power(int b, int p) {
		int result=1;
		for(int i=1;i<=p;i++) {
			result=result*b;
		}
		return result;
	}
	
	
	public String perfect(int n) {
		int sum=0;
		for(int i=1; i<=n/2; i++) {
			if(n%i==0) {
				sum=sum+i;
			}
		}
		if(n==sum) {
			return "perfect number";
		}else {
			return "not a perfect number";
		}
	}
	
	public String prime(int n) {
		int flag=0;
		for(int i=0; i<=n/2; i++) {
			if(n%i==0) {
				flag=1;
			}
		}
		
		if(flag==1) {
			return "not a prime number";
		}else {
			return "prime number";
		}
	}
	
	public int reverse(int n) {
		int rem,rev=1;
		while(n>0) {
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		return n;
	}
}
