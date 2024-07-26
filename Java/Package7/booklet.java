package package7;

public class booklet {
	private int id,pages;
	private String name,author,company;
	private float price;
	
	public booklet(int id,String name, String author, String company, int pages, float price) {
			
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

	public int getId() {
		return id;
	}

	public int getPages() {
		return pages;
	}

	public String getName() {
		return name;
	}

	public String getAuthor() {
		return author;
	}

	public String getCompany() {
		return company;
	}

	public float getPrice() {
		return price;
	}

	public void setId(int id) {
		this.id = id;
	}

	public void setPages(int pages) {
		this.pages = pages;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setAuthor(String author) {
		this.author = author;
	}

	public void setCompany(String company) {
		this.company = company;
	}

	public void setPrice(float price) {
		this.price = price;
	}

	

	
	
	
}
