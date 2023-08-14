import java.util.Scanner;

public abstract class DongHop extends ThucPham{
    private boolean nhapKhau;
    private boolean xuatKhau;
    private float trongLuong;

    public boolean isNhapKhau() {
        return nhapKhau;
    }

    public void setNhapKhau(boolean nhapKhau) {
        this.nhapKhau = nhapKhau;
    }

    public boolean isXuatKhau() {
        return xuatKhau;
    }

    public void setXuatKhau(boolean xuatKhau) {
        this.xuatKhau = xuatKhau;
    }

    public float getTrongLuong() {
        return trongLuong;
    }

    public void setTrongLuong(float trongLuong) {
        this.trongLuong = trongLuong;
    }

    public DongHop(String name, String moTa, String NSX, String NHH, boolean nhapKhau, boolean xuatKhau,
                   float trongLuong) {
        super(name, moTa, NSX, NHH);
        this.nhapKhau = nhapKhau;
        this.xuatKhau = xuatKhau;
        this.trongLuong = trongLuong;
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
        this.nhapKhau = enter.nextBoolean();
        System.out.print("enter xuất khẩu or not: ");
        this.xuatKhau = enter.nextBoolean();
        System.out.println("enter trọng lượng: ");
        this.trongLuong = enter.nextFloat();
    }
    public String ouput(){
        return super.output() + ",xuất khẩu: " + xuatKhau + ",nhập khẩu: " + nhapKhau
                + ",Trọng lượng: " + trongLuong;
    }
}
