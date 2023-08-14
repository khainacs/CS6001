import java.io.PrintStream;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

public class BlueAstronaut extends Player implements Crewmate{
    private int numTasks;
    private int taskSpeed;
    private static final int DEFAULT_NUMTASKS = 6;
    private static final int DEFAULT_TASKSPEED = 10;
    private static final int DEFAULT_SUSLEVEL = 15;

    public BlueAstronaut (String name, int susLevel, int numTasks, int taskSpeed){
        super(name, susLevel);
        this.numTasks = numTasks;
        this.taskSpeed = taskSpeed;
    }
    public BlueAstronaut (String name){
        super(name, DEFAULT_SUSLEVEL);
        this.numTasks = DEFAULT_NUMTASKS;
        this.taskSpeed = DEFAULT_TASKSPEED;
    }
    public void emergencyMeeting (){
        //A Player that is frozen cannot call an emergency meeting.
        if (!this.isFrozen()) {
            //I use sort method to find who is player have susLevel and is not frozen
            Arrays.sort(getPlayers(), Comparator.comparing(Player:: isFrozen).thenComparing(Player:: getSusLevel, Comparator.reverseOrder()));
            }
            //If two players have the same highest susLevel, no player will be voted off.
            //If above case does not happen, we mark the player who has highest susLevel and call gameOver method
            //otherwise, nothing happen
            if (getPlayers()[0].getName() != this.getName() && getPlayers()[0].getSusLevel() != getPlayers()[1].getSusLevel()) {
                getPlayers()[0].setFrozen(true);
                PrintStream var10000 = System.out;
                Player[] var10001 = getPlayers();
                var10000.println(var10001[0].getName() + " is frozen");
                this.gameOver();
            }
    }
    @Override
    public void completeTask() {
        //if player is frozen, nothing happen
        if (this.isFrozen()){
            return;
        }
        //If taskSpeed is greater than 20, subtract 2 from numTasks. Otherwise, subtract 1 from
        //numTasks.

        int currentNumTasks = this.numTasks;
        if (this.taskSpeed > 20){
            this.numTasks -= 2;
        } else {
            this.numTasks -= 1;
        }
        //If numTasks falls below 0, set it to 0
        if (this.numTasks < 0){
            this.numTasks = 0;
        }
        //from beginning, currentNumTasks and this.numTasks are equal
        //after progress from 50->54, if this.numTasks equals 0 and currenNumTasks
        //Therefore, we can conclude this is the first time that this player reach numTasks = 0
        if (currentNumTasks > 0 && this.numTasks == 0) {
            System.out.println("I have completed all my tasks");
            this.setSusLevel((int)(this.getSusLevel() / 2));
        }
    }
    public boolean equal (Object o){
        //Two BlueAstronauts are equal if they both have the same name, frozen, susLevel, numTasks,
        //and taskSpeed
        //Returns a boolean
        if (o instanceof BlueAstronaut) {
            BlueAstronaut blue = (BlueAstronaut) o;
            return super.equals(blue) && this.numTasks == blue.numTasks
                    && this.taskSpeed == blue.taskSpeed;
        }
        return false;
    }
    public String toString (){
        String numTasks = " I have " + this.numTasks + " left over.";
        String firstStr = super.toString();

        String rep = firstStr + numTasks;
        if (this.getSusLevel() > 15){
            rep = rep.toUpperCase();
        }

        return rep ;
    }
}
