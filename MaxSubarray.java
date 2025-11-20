import java.util.Scanner;

public class MaxSubarray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int test=sc.nextInt();
        for(int t=0;t<test;t++){
            int range=sc.nextInt();
            int[] arr = new int[range];
            int[] store = new int[range];
            for (int i = 0; i < arr.length; i++) {
                arr[i]=sc.nextInt();
            }
            for (int i = 0; i < arr.length; i++) {
                int currentmax=arr[i];
                for (int j = i; j < arr.length; j++) {
                    currentmax=Math.max(currentmax, arr[j]);
                    System.out.print(currentmax+" ");
                }
            }
            System.out.println();
            
        }
    }
}
