package bai1;

public class Array {
    private int len;
    private Student[] arr = new Student[10];

    public Array() {
        this.arr = arr;
    }

    public int getLen() {
        return len;
    }

    public void setArr(Student[] arr) {
        this.arr = arr;
    }

    public void setLen(int len) {
        this.len = len;
    }

    public void input()
    {
        for(int i = 0; i < len; i++)
        {
            arr[i] = new Student();
            arr[i].iput();
        }
    }
    public void output()
    {
       for(int i = 0; i < len; i++)
       {
           System.out.println(arr[i].toString());
       }
    }

    public void Sort()
    {
        for (int i = 0; i < len; i++) {
            for (int j = i+1; j < len; j++) {
                if (arr[i].getGrade() > arr[j].getGrade())
                {
                    Student tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
}
