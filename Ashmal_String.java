import java.util.Scanner;

public class Ashmal_String {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();  
        while (t-- > 0) {
            int n = sc.nextInt();
            String[] arr = new String[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.next();
            }

            String s = arr[0]; 
            for (int i = 1; i < n; i++) {
                
                if ((arr[i] + s).compareTo(s + arr[i]) < 0) {
                    s = arr[i] + s;
                } else {
                    s = s + arr[i];
                }
            }
            System.out.println(s);
        }
    }
}
