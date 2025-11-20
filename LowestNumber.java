import java.util.Scanner;

public class LowestNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range=sc.nextInt();
        int[] arr= new int[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();
        }
        int min = arr[0];
        int index=0;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
                index=i;
            }
        }
        System.out.println(min+" " +(index+1)); 
    }
}
