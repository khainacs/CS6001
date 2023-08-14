import java.util.Scanner;

public class HangSuDung {
    private String NgaySX;
    private String NHH;

    public String getNgaySX() {
        return NgaySX;
    }

    public void setNgaySX(String ngaySX) {
        NgaySX = ngaySX;
    }

    public String getNHH() {
        return NHH;
    }

    public void setNHH(String NHH) {
        this.NHH = NHH;
    }

    public HangSuDung(String ngaySX, String NHH) {
        NgaySX = ngaySX;
        this.NHH = NHH;
    }
    public void input(){
        Scanner enter = new Scanner(System.in);
        System.out.print("enter NgaySX: ");
        this.NgaySX = enter.nextLine();
        System.out.println("enter NHH: ");
        this.NHH = enter.nextLine();
    }
    public String output(){
        return ",Ngày hết hạn: " + NgaySX + ",Ngày hêt hạn: " + NHH;
    }
}
