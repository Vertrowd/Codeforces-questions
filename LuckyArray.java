import java.util.Arrays;
import java.util.Scanner;

public class LuckyArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range=sc.nextInt();
        int[] arr= new int[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        int min=arr[0];
        int count=0;
        for (int i = 0; i < arr.length; i++) {
            if (min==arr[i]) {
                count++;
            }
        }
        
        if (count%2==0) {
            System.out.println("Unlucky");
        } else{
            System.out.println("Lucky");
        }
    }
}
