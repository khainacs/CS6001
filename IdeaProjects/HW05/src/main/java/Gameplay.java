import javax.swing.event.AncestorListener;

public class Gameplay {
    public static void main(String[] args) {
        BlueAstronaut Bod = new BlueAstronaut("Bod", 20, 6, 30);
        BlueAstronaut Heath = new BlueAstronaut("Heath", 30, 3, 21);
        BlueAstronaut Albert = new BlueAstronaut("Albert", 44, 2, 0);
        BlueAstronaut Angel = new BlueAstronaut("Angel", 0, 1, 0);

        RedAstronaut Liam = new RedAstronaut("Liam", 19, "experienced");
        RedAstronaut SuspiciousPerson = new RedAstronaut("Suspicious Person", 100, "expert");

        Liam.sabotage(Bod);

        Liam.freeze(SuspiciousPerson);

        Liam.freeze(Albert);


        Albert.emergencyMeeting(); //Albert is frozen since nothing should happen

        SuspiciousPerson.emergencyMeeting();

        Bod.emergencyMeeting();

        Heath.completeTask();//shoud have numTake = 1

        Heath.completeTask();
        Heath.completeTask();

        Liam.freeze(Angel);

        Liam.sabotage(Bod);
        Liam.sabotage(Bod);;

        Liam.freeze(Bod);
        //System.out.println("12. " + Bod);
        /* 13.Angle call emergency meeting
            Liam should have frozen = true, and crewmate should win
        or 14.Liam call sabotage on Heath 5 times:
               Heath should have susLevel = 41(15 -> 18 -> 22 -> 27 -> 33 -> 41)
         15. Liam freeze Heath:
                Heath should have frozen = true
                 should printed to console Impostor win!!
         */
        //Angel.emergencyMeeting()

        Liam.sabotage(Heath);
        Liam.sabotage(Heath);
        Liam.sabotage(Heath);
        Liam.sabotage(Heath);
        Liam.sabotage(Heath);
        Liam.freeze(Heath);


    }
}
