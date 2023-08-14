import java.util.Arrays;

public class RedAstronaut extends Player implements Impostor{
    private String skill;
    private static final int DEFAULT_SUSLEVEL = 15;
    private static final String DEFAULT_SKILL = "experienced";

    public RedAstronaut (String name, int susLevel, String skill){
       super(name, susLevel);
       this.skill = skill;
    }
    public RedAstronaut (String name){
        super(name, DEFAULT_SUSLEVEL);
        this.skill = DEFAULT_SKILL;
    }

    @Override
    public void emergencyMeeting() {
        if (this.isFrozen()){
            return;
        }
        Arrays.sort(this.getPlayers());
        if (getPlayers()[0].getSusLevel() == getPlayers()[1].getSusLevel()){
            return;
        }
        if (getPlayers()[0].getSusLevel() == this.getSusLevel()){
            return;
        }
        this.getPlayers()[0].setFrozen(true);
        this.gameOver();
    }
    @Override
    public void freeze(Player p) {
        if (p instanceof Impostor){
            return;
        }
        if (p instanceof Impostor && p.isFrozen()){
            return;
        }
        if (this.getSusLevel() < p.getSusLevel()){
            p.setFrozen(true);
        }
        if (this.getSusLevel() > p.getSusLevel()){
            this.setSusLevel(this.getSusLevel() * 2);
        }
        this.gameOver();
    }

    @Override
    public void sabotage(Player p) {
        if (p instanceof Impostor){
            return;
        }
        if (p instanceof Impostor && p.isFrozen()){
            return;
        }

        int susLevel = p.getSusLevel();
        int newSus = susLevel;

        if (this.getSusLevel() < 20){
            newSus += (int) (susLevel * 0.5);
        }else {
            newSus += (int) (susLevel * 0.25);
        }

        p.setSusLevel(newSus);
    }

    public boolean equals(Object o) {
        if (o instanceof RedAstronaut) {
            RedAstronaut red = (RedAstronaut) o;
            return super.equals(red) && this.skill.equals(red.skill);
        }
        return false;
    }
    public String toString (){
        String skill = String.format(" I am an %s player!", this.skill);
        String firstStr = super.toString();

        String rep = firstStr + skill;
        if (this.getSusLevel() > 15){
            rep = rep.toUpperCase();
        }

        return rep ;
    }
}
