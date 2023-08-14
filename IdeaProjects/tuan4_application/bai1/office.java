package Java.tuan4_application.bai1;

/**
 * office
 */
public class office {
    private String idOffice, nameOffice;

    public String getIdOffice() {
        return idOffice;
    }

    public void setIdOffice(String idOffice) {
        this.idOffice = idOffice;
    }

    public String getNameOffice() {
        return nameOffice;
    }

    public void setNameOffice(String nameOffice) {
        this.nameOffice = nameOffice;
    }

    public office(String idOffice, String nameOffice) {
        this.idOffice = idOffice;
        this.nameOffice = nameOffice;
    }
    
}