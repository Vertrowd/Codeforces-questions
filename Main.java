import java.util.*;
import java.io.*;

public class Main {
    public static long gcd(long a, long b) {
        while (b != 0) {
            long temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String[] parts = br.readLine().split(" ");
            long[] a = new long[n];
            long mn = Long.MAX_VALUE;
            for (int i = 0; i < n; i++) {
                a[i] = Long.parseLong(parts[i]);
                if (a[i] < mn) mn = a[i];
            }

            long g = 0;
            for (int i = 0; i < n; i++) {
                g = gcd(g, a[i] - mn);
            }

            out.println(mn + g);
        }
        out.flush();
    }
}
