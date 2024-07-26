package Polymorphism;

public class student {
	private String Name;
	private int Roll;
	private float Marks;
	
	student(String name,float marks){
		this.Name=name;
		this.Marks=marks;
	}
	student(String name,int Roll, float marks){
		this.Marks=marks;
		this.Name=name;
		this.Roll=Roll;
	}


	public String getName() {
		return Name;
	}


	public void setName(String name) {
		Name = name;
	}


	public int getRoll() {
		return Roll;
	}


	public void setRoll(int roll) {
		Roll = roll;
	}


	public float getMarks() {
		return Marks;
	}


	public void setMarks(float marks) {
		Marks = marks;
	}


	public static student search(student s[],int roll) {
		for (int i = 0; i < s.length; i++) {
			if(s[i].Roll==roll) {
				return s[i];
			}
			
		}
		return null;
	}
	
	public static student search(student s[],String name) {
		for (int i = 0; i < s.length; i++) {
			if(s[i].Name.equalsIgnoreCase(name)) {
				return s[i];
			}
		}
		return null;
	}


	@Override
	public String toString() {
		return "student Name=" + Name + ", Roll=" + Roll + ", Marks=" + Marks;
	}
	
	
	
}
