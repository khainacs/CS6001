import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Mange {
    ArrayList<HangHoa> arr = new ArrayList<HangHoa>();
    private final String str_DEFAULT = "13/6/2023";
    public ArrayList<HangHoa> getArr() {
        return arr;
    }

    public void setArr(ArrayList<HangHoa> arr) {
        this.arr = arr;
    }

    public Mange() {
        this.arr = new ArrayList<>();
    }
    public void insert(HangHoa obj){
        this.arr.add(obj);
    }
    public void search(){
        Scanner enter = new Scanner(System.in);
        int press;
        do{
            System.out.println("\t\t\t1. Smart Phone");
            System.out.println("\t\t\t2.Sửa hộp");
            System.out.println("\t\t\t3.Thực phẩm chức năng");
            System.out.println("\t\t\t0. exit");
            System.out.println("enter option hàng hóa mà bạn muốn:");
            press = enter.nextInt();
            switch (press) {
                case 1: {
                    System.out.print("enter the name: ");
                    String str = enter.nextLine();
                    for (HangHoa obj : arr) {
                        if (obj instanceof SmartPhone && obj.getName().equals(str)) {
                            System.out.println(((SmartPhone) obj).output());
                        }
                    }
                }
                case 2: {
                    System.out.print("enter the name: ");
                    String str = enter.nextLine();
                    String[] partDEFAULT = str_DEFAULT.split("/");
                    for (HangHoa obj : arr) {
                        if (obj instanceof SuaHop && obj.getName().equals(str)) {
                            String[] partSuaHop = ((SuaHop) obj).getHSD().getNHH().split("/");
                            if (Integer.parseInt(partSuaHop[2]) > Integer.parseInt(partDEFAULT[2])) {
                                System.out.println(((SuaHop) obj).output());
                            } else if (Integer.parseInt(partSuaHop[2]) == Integer.parseInt(partDEFAULT[2])) {
                                if (Integer.parseInt(partSuaHop[1]) > Integer.parseInt(partDEFAULT[1])) {
                                    System.out.println(((SuaHop) obj).output());
                                } else if (Integer.parseInt(partSuaHop[1]) == Integer.parseInt(partDEFAULT[1])) {
                                    if (Integer.parseInt(partSuaHop[0]) > Integer.parseInt(partDEFAULT[0])) {
                                        System.out.println(((SuaHop) obj).output());
                                    }
                                }
                            }
                        }

                    }
                }
                case 3: {
                    System.out.print("enter the name: ");
                    String str = enter.nextLine();
                    String[] partDEFAULT = str_DEFAULT.split("/");
                    for (HangHoa obj : arr) {
                        if (obj instanceof ThucPhamChucNang && obj.getName().equals(str)) {
                            String[] partThucPhamChucNang = ((ThucPhamChucNang) obj).getHSD().getNHH().split("/");
                            if (Integer.parseInt(partThucPhamChucNang[2]) > Integer.parseInt(partDEFAULT[2])) {
                                System.out.println(((ThucPhamChucNang) obj).output());
                            } else if (Integer.parseInt(partThucPhamChucNang[2]) == Integer.parseInt(partDEFAULT[2])) {
                                if (Integer.parseInt(partThucPhamChucNang[1]) > Integer.parseInt(partDEFAULT[1])) {
                                    System.out.println(((ThucPhamChucNang) obj).output());
                                } else if (Integer.parseInt(partThucPhamChucNang[1]) == Integer.parseInt(partDEFAULT[1])) {
                                    if (Integer.parseInt(partThucPhamChucNang[0]) > Integer.parseInt(partDEFAULT[0])) {
                                        System.out.println(((ThucPhamChucNang) obj).output());
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }while(press != 0);
    }
    public void sort(){
        for(int i = 0; i < arr.size(); i++){
            for (int j = 0; j < arr.size(); j++){
                int comparison = arr.get(i).getName().compareTo(arr.get(j).getName());
                if ( comparison < 0){
                    HangHoa tmp = arr.get(i);
                    arr.set(i, arr.get(j));
                    arr.set(j, tmp);
                }
            }
        }
    }
    public void delete(int position){
        for(int i = position-1; i < arr.size()-1; i++){
            arr.set(i, arr.get(i+1));
        }
    }

}
