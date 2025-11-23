import java.util.Arrays;
import java.util.Scanner;

public class Dungeon_Equilibrium {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();

        for (int t = 0; t < test; t++) {
            int range = sc.nextInt();
            int[] arr = new int[range];

            for (int i = 0; i < arr.length; i++) {
                arr[i] = sc.nextInt();
            }

            int deletition = 0;
            int[] distinct = Arrays.stream(arr).distinct().toArray();

            for (int i = 0; i < distinct.length; i++) {
                int count = 0;

                for (int j = 0; j < arr.length; j++) {
                    if (distinct[i] == arr[j]) {
                        count++;
                    }
                }

                if (distinct[i] <= count) {
                    deletition += (count - distinct[i]);  
                } else {
                    deletition += count; 
                }
            }

            System.out.println(deletition);
        }
    }
}
