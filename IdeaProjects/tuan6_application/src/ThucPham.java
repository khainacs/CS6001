import java.util.Scanner;

public abstract class ThucPham extends HangHoa{
    private String moTa;
    private HangSuDung HSD;
    public void setHSD(String NSX, String NHH){
        this.HSD = new HangSuDung(NSX, NHH);
    }
    public String getMoTa() {
        return moTa;
    }

    public void setMoTa(String moTa) {
        this.moTa = moTa;
    }

    public HangSuDung getHSD() {
        return HSD;
    }

    public void setHSD(HangSuDung HSD) {
        this.HSD = HSD;
    }

    public ThucPham(String name, String moTa, String NSX, String NHH) {
        super(name);
        this.moTa = moTa;
        this.HSD = new HangSuDung(NSX, NHH);
    }
    public void input(){
        Scanner enter = new Scanner(System.in);
        System.out.print("enter the name: ");
        String strName = enter.nextLine();
        this.setName(strName);
        System.out.print("enter mô tả: ");
        this.moTa = enter.nextLine();
        System.out.print("enter ngày sản xuất: ");
        String strNSX = enter.nextLine();
        System.out.println("enter ngày hết hạn: ");
        String strNHH = enter.nextLine();
        this.HSD = new HangSuDung(strNSX, strNHH);
    }
    public String output(){
        return "Tên: " + super.getName() + ",Mô tả: " + moTa + HSD.output();
    }

}
