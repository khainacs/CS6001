import java.sql.SQLOutput;
import java.util.Scanner;

public class SuaHop extends DongHop{
    private String theDang;

    public String getTheDang() {
        return theDang;
    }

    public void setTheDang(String theDang) {
        this.theDang = theDang;
    }

    public SuaHop(String name, String moTa, String NSX, String NHH,
                  boolean nhapKhau, boolean xuatKhau, float trongLuong, String theDang) {
        super(name, moTa, NSX, NHH, nhapKhau, xuatKhau, trongLuong);
        this.theDang = theDang;
    }

    @Override
    public float tinhThue() {
        if (super.isNhapKhau()){
            return 0.3f;
        }
        return 0;
    }

    public void input(){
        Scanner enter = new Scanner(System.in);
        System.out.print("enter the name: ");
        String strName = enter.nextLine();
        this.setName(strName);
        System.out.print("enter mô tả: ");
        String strMoTa = enter.nextLine();
        this.setMoTa(strMoTa);
        System.out.print("enter ngày sản xuất: ");
        String strNSX = enter.nextLine();
        System.out.print("enter the ngày hết hạn: ");
        String strNHH = enter.nextLine();
        this.setHSD(strNSX, strNHH);
        System.out.print("enter nhập khẩu or not: ");
        Boolean NK = enter.nextBoolean();
        this.setNhapKhau(NK);
        System.out.print("enter xuất khẩu or not: ");
        Boolean XK = enter.nextBoolean();
        this.setXuatKhau(XK);
        System.out.println("enter trọng lượng: ");
        Float TL = enter.nextFloat();
        this.setTrongLuong(TL);
        System.out.println("enter thể dạng: ");
        this.theDang = enter.nextLine();
    }
    public String output(){
        return super.output() + ",Thể dạng: " + theDang;
    }
}
