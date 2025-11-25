import java.util.Arrays;
import java.util.Scanner;

public class Frequency_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range=sc.nextInt();
        int m= sc.nextInt();
        int[] arr = new int[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();

        }
        int[] distinct = Arrays.stream(arr).distinct().filter(n -> n <= m).toArray();

        
        for (int i = 0; i < distinct.length; i++) {
            
        }
        

        for (int i = 0; i < distinct.length; i++) {
            int count=0;
            for (int j = 0; j < arr.length; j++) {
                if (distinct[i]==arr[j]) {
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
