import java.util.Scanner;

public class W_Mirror_Array {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int[][] arr = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j]=sc.nextInt();
            }
        }
        
        int[][] temp = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp[i][j] = arr[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            int count=1;
            for (int j = 0; j <m; j++) {
                temp[i][j]=arr[i][m-count];
                count++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(temp[i][j]+" ");
            }
            System.out.println();
        }
    }
}
