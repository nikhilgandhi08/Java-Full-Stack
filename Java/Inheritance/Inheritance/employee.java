package Inheritance;

public class employee extends Person {
	private int id;
	private String dept;
	private float salary;
	public employee(int age, String name, String address, String mob, String dob, int id, String dept, float salary) {
		super(age, name, address, mob, dob);
		this.id = id;
		this.dept = dept;
		this.salary = salary;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getDept() {
		return dept;
	}
	public void setDept(String dept) {
		this.dept = dept;
	}
	public float getSalary() {
		return salary;
	}
	public void setSalary(float salary) {
		this.salary = salary;
	}
	@Override
	public String toString() {
		return "employee [id=" + id + ", dept=" + dept + ", salary=" + salary + ", age=" + age + ", name=" + name
				+ ", address=" + address + ", mob=" + mob + ", dob=" + dob + "]";
	}
	
	
	
	
}
