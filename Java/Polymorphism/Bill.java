package Polymorphism;

public class Bill {
	
	private int id;
	private String cname;
	private int total;
	
	public Bill(int id, String cname, int ...total) {
		// TODO Auto-generated constructor stub
		super();
		this.cname=cname;
		this.id=id;
		
		for (int i : total) {
			this.total+=i;
		}
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getCname() {
		return cname;
	}

	public void setCname(String cname) {
		this.cname = cname;
	}

	public int getTotal() {
		return total;
	}

	public void setTotal(int total) {
		this.total = total;
	}
	

	@Override
	public String toString() {
		return "Bill [id=" + id + ", cname=" + cname + ", total=" + total + "]";
	}

	public static Bill search(Bill[] b, int id2, int n) {
		// TODO Auto-generated method stub
		for(int i=0; i<n; i++) {
			if(b[i].getId()==id2) {
				return b[i];
			}
		}
		return null;
	}

	public static Bill search(Bill[] b, String cname2, int n) {
		// TODO Auto-generated method stub
		for(int i=0; i<n; i++) {
			if(b[i].getCname().equalsIgnoreCase(cname2)) {
				return b[i];
			}
		}
		return null;
	}
	
	

	public static int delete(Bill[] b, int id2, int n) {
		// TODO Auto-generated method stub
		for (int i = 0; i < n-i; i++) {
			if(b[i].getId()==id2) {
				for (int j = i; j <n; j++) {
					b[j]= b[j+1];
				}
				n--;
			}
		}
		return n;
	}

	public static int delete(Bill[] b, String cname2, int n) {
		// TODO Auto-generated method stub
		for(int i=0; i<n; i++) {
			if(b[i].getCname().equalsIgnoreCase(cname2)) {
				if(b[i].getCname().equalsIgnoreCase(cname2)) {
					for (int j = i; j <n-i; j++) {
						b[j]= b[j+1];
					}
					n--;
				}
			}
			
		}
		return n;
	}
}

