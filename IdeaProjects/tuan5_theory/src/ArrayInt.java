import java.util.Scanner;

public class ArrayInt {
    private int[] arr;
    private int length;

    public int[] getArr() {
        return arr;
    }

    public void setArr(int[] arr) {
        this.arr = arr;
    }
    public int getLength() {
        return length;
    }

    public void setLength(int length) {
        this.length = length;
    }

    public ArrayInt() {
        this.arr = new int[length];
    }
    public ArrayInt(int length)
    {
        this.length = length;
        this.arr = new int[this.length];
    }
    public void inputScreen()
    {
        Scanner enter = new Scanner(System.in);
        try{
            for(int i = 0; i < this.length; i++)
            {
                System.out.print("enter: ");
                arr[i] = enter.nextInt();
            }
        }catch (NumberFormatException e)
        {
            System.out.println("Number is not illegal");
        }
    }
    public int getPosistion(int position) throws IndexOutOfBoundsException
    {
        //lấy phần tử thứ i
        //lỗi: out of bound
        return arr[position-1];

    }
    public void sortIncrease() throws IndexOutOfBoundsException
    {
        for (int i = 0; i < this.length; i++){
            for (int j = 0; j < this.length; j++) {
                if (arr[i] > arr[j])
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }

        }
    }
    public void sortDecrease() throws IndexOutOfBoundsException
    {
        for (int i = 0; i < this.length; i++){
            for (int j = 0; j < this.length; j++) {
                if (arr[i] < arr[j])
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }

        }
    }
    public int[] insert(int position, int x) throws IndexOutOfBoundsException{
        this.length += 1;
        int[] newArr = new int[length];
        int i, j = 0;
        for (i = 0; i < this.length; i++)
        {
            if (position-1 == i)
            {
                newArr[i] = x;
            }
            else{
                newArr[i] = arr[j];
                j++;
            }


        }
        return newArr;
    }
    public void outScreen()
    {
        try{
            for(int num: arr)
            {
                System.out.print(num + " ");
            }
        }catch (RuntimeException e)
        {
            e.printStackTrace();
        }
    }

    public void outScreen(int[] arr)
    {
        try{
            for(int num: arr)
            {
                System.out.print(num + " ");
            }
        }catch (RuntimeException e)
        {
            e.printStackTrace();
        }
    }

}
