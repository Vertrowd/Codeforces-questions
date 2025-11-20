import java.util.Scanner;

public class ReplacingNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range=sc.nextInt();
        int[] arr= new int[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();
        }
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]>0) {
                arr[i]=1;
            } else if (arr[i]==0) {
                arr[i]=0;
            }

            else {
                arr[i]=2;
            }
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }

    }
}
