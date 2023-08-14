package Java.tuan4_application.bai4.Objects;

/**
 * office
 */
public class Office {
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

    public Office(String idOffice, String nameOffice) {
        this.idOffice = idOffice;
        this.nameOffice = nameOffice;
    }

    @Override
    public String toString() {
        return  idOffice  + "," + nameOffice;
    }
}