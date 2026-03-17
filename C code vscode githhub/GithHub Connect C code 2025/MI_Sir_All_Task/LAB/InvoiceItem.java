
public class InvoiceItem {
     String id = "101";
     String desc="RAM";
     int qty=2;
     double unitPrice=1000.00;

     InvoiceItem(String id, String desc, int qty, double unitPrice) 
   {
        this.id = id;
        this.desc = desc;
        this.qty = qty;
        this.unitPrice = unitPrice;
    }

    public String getId() 
   {
        return id;
    }

    public String getDesc() 
   {
        return desc;
    }

    public int getQty() 
    {
        return qty;
    }

    public void setQty(int qty) 
    {
        this.qty = qty;
    }

    public double getUnitPrice() 
    {
        return unitPrice;
    }

    public void setUnitPrice(double unitPrice) 
   {
        this.unitPrice = unitPrice;
    }

    public double getTotal() 
    {
        return qty * unitPrice;
    }

    public String toString() 
    {
        return "InvoiceItem [id=" + id + ", desc=" + desc + ", qty=" + qty + ", unitPrice=" + unitPrice + "]";
    }

    public static void main(String[] args) {

        InvoiceItem I1 = new InvoiceItem("101", "RAM", 2, 1000.00);

        System.out.println(I1.toString());
        System.out.println("Total: " + I1.getTotal());

    }
    
}

