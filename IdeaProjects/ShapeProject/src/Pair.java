public class Pair<T, K> {
    private T partFirstNumber;
    private  K partSecondNumber;

    public Pair(T num1, K num2) {
        this.partFirstNumber = num1;
        this.partSecondNumber = num2;
    }

    public T getPartFirstNumber1() {
        return partFirstNumber;
    }

    public void setPartFirstNumber(T num1) {
        this.partFirstNumber = num1;
    }

    public K getPartSecondNumber() {
        return partSecondNumber;
    }

    public void setPartSecondNumber(K partSecondNumber) {
        this.partSecondNumber = partSecondNumber;
    }
}
