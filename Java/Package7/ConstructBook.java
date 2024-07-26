package package7;

public class ConstructBook {
	private int id,pages;
	private String name,author,company;
	private float price;
	
	public ConstructBook(int id,String name, String author, String company, int pages, float price) {
		
		this.id=id;
		this.author=author;
		this.company=company;
		this.name=name;
		this.pages=pages;
		this.price=price;
	}
	
	public void display() {
		System.out.println("Id: "+this.id);
		System.out.println("Name: "+this.name);
		System.out.println("Author: "+this.author);
		System.out.println("Company: "+this.company);
		System.out.println("Pages: "+this.pages);
		System.out.println("Price: "+this.price);
				
	}
}
