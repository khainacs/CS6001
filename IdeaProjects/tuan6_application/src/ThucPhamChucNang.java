import java.util.PrimitiveIterator;
import java.util.Scanner;

public class ThucPhamChucNang extends  DongHop{
    private byte sTND;

    public ThucPhamChucNang(String name, String moTa, String NSX, String NHH,
                            boolean nhapKhau, boolean xuatKhau, float trongLuong, byte sTND) {
        super(name, moTa, NSX, NHH, nhapKhau, xuatKhau, trongLuong);
        this.sTND = sTND;
    }

    public byte getsTND() {
        return sTND;
    }

    public void setsTND(byte sTND) {
        this.sTND = sTND;
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
        this.sTND = enter.nextByte();
    }
    public String output(){
        return super.output() + ",Số tuổi nên dùng: " + sTND;
    }

    @Override
    public float tinhThue() {
        if (super.isNhapKhau()){
            return 0.5f;
        }
        return 0;
    }
}
