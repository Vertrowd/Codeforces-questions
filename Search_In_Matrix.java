import java.util.Scanner;

public class Search_In_Matrix {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int[][] arr = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j]=sc.nextInt();
            }
        }
        int x=sc.nextInt();
        int count=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j]==x) {
                    count++;
                }
            }
        }
        if (count==0) {
            System.out.println("will take number");
        } else{
            System.out.println("will not take number");
        }
    }
}
