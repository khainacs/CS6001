package fa.training.entities;

import lombok.Getter;
import lombok.Setter;

@Setter
@Getter
public abstract class Person {
    private String name;
    private String gender;
    private String phoneNumber;
    private String email;

    public Person(String name, String gender, String phoneNumber, String email) {
        this.name = name;
        this.gender = gender;
        this.phoneNumber = phoneNumber;
        this.email = email;
    }

    private void pucharseParkingPass(){
    }

    @Override
    public String toString() {
        return "name='" + name + '\'' +
                ", gender='" + gender + '\'' +
                ", phoneNumber='" + phoneNumber + '\'' +
                ", email='" + email + '\'';
    }
}
