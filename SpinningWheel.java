import java.util.*;

public class SpinningWheel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int l = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();

            int[] arr = new int[l];

            for (int i = 0; i < l; i++) {
                arr[i]=(a+(i*b))%l;
            }

            Arrays.sort(arr);
            System.out.println(arr[arr.length-1]);

            // boolean[] visited = new boolean[l];
            // int current = a;
            // int maxPrize = a;
            // while (!visited[current]) {
            //     visited[current] = true;
            //     maxPrize = Math.max(maxPrize, current);
            //     current = (current + b) % l;
            // }
            //System.out.println(maxPrize);
        }
        sc.close();
    }
}
