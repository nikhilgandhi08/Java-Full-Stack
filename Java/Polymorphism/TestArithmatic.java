package Polymorphism;

public class TestArithmatic {
	public static void main(String[] args) {
		Arithmatic arith=new Arithmatic();
		System.out.println(arith.add(1, 2));
		System.out.println(arith.add(3, 4, 5));
		System.out.println(arith.add(1, 2, 3, 4));
		System.out.println(arith.add(1, 2, 3, 4, 5));
		System.out.println(arith.add(1, 2, 3, 4, 5,6,7,8,9,10));

	}
}
