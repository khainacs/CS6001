public class Main {
    public static void main(String[] args) {
       HangHoa obj = new SmartPhone("Iphone","09413", "9/3/1990");
        HangHoa obj1 = new SmartPhone("Hawei","05732", "11/10/2023");
        HangHoa obj2 = new SmartPhone("Oppo","03843", "18/8/2003");

        HangHoa obj3 = new SuaHop("VinalMilk", "nhiều chất xo", "13/1/2022",
                "13/6/2022", true, false, 3.1f, "bột");
        HangHoa obj4 = new SuaHop("FAFA", "nhiều béo", "20/3/2022",
                "30/11/2022", false, true, 6.0f, "lỏng");

        HangHoa obj5 = new ThucPhamChucNang("A", "b", "11/1/2000", "10/1/1999",
                true, false, 10f, (byte) 3);
        HangHoa obj6 = new ThucPhamChucNang("B", "a", "10/1/2000", "10/1/1999",
                true, false, 10f,   (byte) 3);
        Mange arr = new Mange();
        arr.insert(obj);
        arr.insert(obj1);
        arr.insert(obj2);
        arr.insert(obj3);
        arr.insert(obj4);
        arr.insert(obj5);
        arr.insert(obj6);
        arr.sort();
    }
}
