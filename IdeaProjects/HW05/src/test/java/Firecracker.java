public class Firecracker {
    private int loudness;
    private String powderType;

    public boolean equals(Object o) {
        if (o instanceof Firecracker) {
            Firecracker f = (Firecracker) o;
            return ((loudness == f.loudness) && (powderType.equals(f.powderType)));
        }
        return false;
    }
    public boolean compareTo(Firecracker f){
        return loudness > f.loudness;
    }
}
