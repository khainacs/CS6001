import java.util.Scanner;

public class SmartPhone extends HangHoa{
    private String phoneNumber;
    private String NSX;

    @Override
    public float tinhThue() {
        return 0.4f;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }

    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    public String getNSX() {
        return NSX;
    }

    public void setNSX(String NSX) {
        this.NSX = NSX;
    }

    public SmartPhone(String name, String phoneNumber, String NSX) {
        super(name);
        this.phoneNumber = phoneNumber;
        this.NSX = NSX;
    }
    public void input(){
        Scanner enter = new Scanner(System.in);
        System.out.print("enter the name: ");
        String str = enter.nextLine();
        this.setName(str);
        System.out.print("enter the phone number: ");
        this.phoneNumber = enter.nextLine();
        System.out.print("enter the ngày sản xuất: ");
        this.NSX = enter.nextLine();
    }
    public String output(){
        return "Tên: " + super.getName() + ",số điện thoại: " + phoneNumber + ",ngày sản xuất: " + NSX;
    }
}
