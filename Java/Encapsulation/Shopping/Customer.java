package Shopping;

public class Customer {
	private int custId;
	private String custName;
	private String mobileNumber;
	
	private Address addr;
	private Product prod;
	
	public Customer(int custId, String custName, String mobileNumber, Address addr, Product prod) {
		this.custId=custId;
		this.custName=custName;
		this.mobileNumber=mobileNumber;
		this.addr=addr;
		this.prod=prod;
	}

	public int getCustId() {
		return custId;
	}

	public void setCustId(int custId) {
		this.custId = custId;
	}

	public String getCustName() {
		return custName;
	}

	public void setCustName(String custName) {
		this.custName = custName;
	}

	public String getMobileNumber() {
		return mobileNumber;
	}

	public void setMobileNumber(String mobileNumber) {
		this.mobileNumber = mobileNumber;
	}

	public Address getAddr() {
		return addr;
	}

	public void setAddr(Address addr) {
		this.addr = addr;
	}

	public Product getProd() {
		return prod;
	}

	public void setProd(Product prod) {
		this.prod = prod;
	}
	
	
}
