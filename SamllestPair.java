import java.util.Arrays;
import java.util.Scanner;

public class SamllestPair {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();

        for (int t = 0; t < test; t++) {

            int n = sc.nextInt();
            int[] arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int totalPairs = (n * (n - 1)) / 2;
            int[] store = new int[totalPairs];
            int k = 0;

            for (int i = 1; i < n; i++) {
                for (int j = i + 1; j <= n; j++) {
                    int sum = arr[i - 1] + arr[j - 1] + (j - i);
                    store[k++] = sum;
                }
            }

            Arrays.sort(store);
            System.out.println(store[0]);
        }
    }
}
