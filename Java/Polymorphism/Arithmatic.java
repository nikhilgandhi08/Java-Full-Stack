package Polymorphism;

public class Arithmatic {
	
	public int add(int a,int b) {
		return a+b;
	}
	public int add(int a,int b,int c) {
		return a+b+c;
	}
	public int add(int a,int b, int c, int d) {
		return a+b+c+d;
	}

	public int add(int a,int b, int c, int d, int e) {
		return a+b+c+d+e;
	}
	
	public float add(float a, float b) {
		return a+b;
	}
	
	public int add(int ...a) {
		int sum=0;
		for (int i : a) {
			sum+=i;
		}
		return sum;
	}
	
}