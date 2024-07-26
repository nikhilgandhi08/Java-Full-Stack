package package8;

public class account {
	private int custid;
	private String custname;
	private float balance;
	
	public account(int custid, String custname, float balance) {
		this.custid=custid;
		this.custname=custname;
		this.balance=balance;
	}

	public int getCustid() {
		return custid;
	}

	public void setCustid(int custid) {
		this.custid = custid;
	}

	public String getCustname() {
		return custname;
	}

	public void setCustname(String custname) {
		this.custname = custname;
	}

	public float getBalance() {
		return balance;
	}

	public void setBalance(float balance) {
		this.balance = balance;
	}

	
	
}
