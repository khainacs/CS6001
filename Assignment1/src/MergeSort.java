import java.util.Vector;

public class MergeSort {
    private Vector<Integer> arr;
    public MergeSort(Vector<Integer> arr){
        this.arr = arr;
    }
    private void merge(int start,int mid, int end){
        int[] tmp = new int[end - start + 1];
        int i = start, j = mid + 1, k = 0;
        while(i <= mid && j <= end){
            if (arr.get(i) < arr.get(j)){
                tmp[k++] = arr.get(i++);
            }
            else{
                tmp[k++] = arr.get(j++);
            }
        }
        while (i <= mid){
            tmp[k++] = arr.get(i++);
        }
        while(j <= end){
            tmp[k++] = arr.get(j++);
        }
        for(int p = 0; p < tmp.length; p++){
            arr.set(start+ p, tmp[p]);
        }
    }
    public Vector<Integer> doWork(Vector<Integer> answer, int start, int end){

        if (start < end) {
            int mid = (start + end) / 2;
            doWork(answer, start, mid);
            doWork(answer, mid+1, end);
            merge( start, mid, end);
        }
        return answer = arr;
    }

}
