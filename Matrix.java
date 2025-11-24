import java.util.Scanner;

public class Matrix {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        long[][] arr = new long[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j]=sc.nextInt();
            }
        }

        long sum1=0;
        long sum2=0;

        for (int i = 0; i < n; i++) {       
            for (int j = 0; j < n; j++) {
                if (i==j) {
                    sum1+=arr[i][j];
                }
            }
        }

            for (int i = 0; i < n; i++) {
                sum2 += arr[i][n - 1 - i];
            }
        long diff=Math.abs(sum1-sum2);

        
        System.out.println(diff);
    }
}
