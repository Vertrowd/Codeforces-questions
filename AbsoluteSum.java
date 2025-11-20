import java.util.Scanner;

public class AbsoluteSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range=sc.nextInt();
        long[] arr= new long[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextLong();
        }
        long sum=0;
        for (int i = 0; i < arr.length; i++) {
            sum=sum+arr[i];
        }
        if (sum<0) {
            sum=-sum;
            System.out.println(sum);
        } else{
            System.out.println(sum);
        }
    }
}
