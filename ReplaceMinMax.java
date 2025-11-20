import java.util.Scanner;

public class ReplaceMinMax {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int range=sc.nextInt();
        int[] arr = new int[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();
        }
        int min=arr[0];
        int index=0;
        int max=arr[0];
        int index1=0;
        for (int i = 0; i < arr.length; i++) {      
        if (arr[i] < min) {
        min = arr[i];
        index = i;
        }
}
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]>max) {
                max=arr[i];
                index1=i;
            }
        }
        arr[index]=max;
        arr[index1]=min;
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
}
}
