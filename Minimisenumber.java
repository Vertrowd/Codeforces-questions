import java.util.Arrays;
import java.util.Scanner;

public class Minimisenumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range = sc.nextInt();
        long[] arr = new long[range];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextLong();
        }

        long count = 0;

        while (true) {


            for (int j = 0; j < arr.length; j++) {
                if (arr[j] % 2 != 0) {
                    System.out.println(count);
                    return;
                }
            }


            for (int j = 0; j < arr.length; j++) {
                arr[j] /= 2;
            }

            count++;
        }
    }
}
