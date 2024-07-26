package Shopping;

public class Shopinfo {
	
	public Customer create() {
		Product prod=new Product(1,"laptop",1000,2);
		Address add=new Address("Pune","Maharashtra",411002);
		Customer cust=new Customer(1,"Nikhil","7058320805",add,prod);
		return cust;
	}
	
	public void display(Customer cust) {
		System.out.println("Product Id: "+ cust.getProd().getProdId());
		System.out.println("Product Name: "+cust.getProd().getProdName());
		System.out.println("Product Price: "+cust.getProd().getProdPrice());
		System.out.println("Product Quantity: "+cust.getProd().getProdQty());
		System.out.println("Customer Id: "+cust.getCustId());
		System.out.println("Customer Name: "+cust.getCustName());
		System.out.println("Contact Number: "+cust.getMobileNumber());
		System.out.println("City: "+cust.getAddr().getCity());
		System.out.println("State: "+cust.getAddr().getState());
		System.out.println("Pincode: "+cust.getAddr().getPincode());
		
	}
	
	public static void main(String[] args) {
		Shopinfo sinfo=new Shopinfo();
		Customer c=sinfo.create();
		sinfo.display(c);	
	}
}
