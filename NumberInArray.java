import java.util.Scanner;

public class NumberInArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range=sc.nextInt();
        long[] arr= new long[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextLong();
        }
        long x = sc.nextLong();
        int count=0;
        for (int i = 0; i < arr.length; i++) {
            if (x==arr[i]) {
                System.out.println(i);
                count++;
                break;
            }
        }
        if (count==0) {
            System.out.println(-1);
        }
    }    
}
