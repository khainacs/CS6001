public abstract class HangHoa {
    private String name;
    public abstract float tinhThue();

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public HangHoa(String name) {
        this.name = name;
    }

}
