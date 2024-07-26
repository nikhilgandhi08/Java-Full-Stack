package package6;

public class OOP_main {
	
	private int Roll;
	private String Name, course, address;
	private float Marks;
	private int Year;
	
	public void setRoll(int roll) {
		this.Roll=roll;
	}
	
	public int getRoll() {
		return this.Roll;
	}
	
	public void setName(String name) {
		this.Name=name;
	}
	
	public String getName() {
		return this.Name;
	}
	
	public void setCourse(String course) {
		this.course=course;
	}
	
	public String getCourse() {
		return this.course;
	}
	
	public void setAddress(String address) {
		this.address=address;
	}
	
	public String getAddress() {
		return this.address;
	}
	
	public void setMarks(float marks) {
		this.Marks=marks;
	}
	
	public float getMarks() {
		return this.Marks;
	}
	
	public void setYear(int year) {
		this.Year=year;
	}
	
	public int getYear() {
		return this.Year;
	}
	
	
	
	@Override
	public String toString() {
		return "Roll = " + Roll + "\nName = " + Name + "\nCourse = " + course + "\nAddress = " + address + "\nMarks = "
				+ Marks + "\nYear = " + Year;
	}
	
	
}
