import java.util.Scanner;

public class PositionArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range=sc.nextInt();
        int[] arr= new int[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();
        }

        for (int i = 0; i < arr.length; i++) {
            if (arr[i]<=10) {
                System.out.println("A"+"["+i+"]"+" = "+arr[i]);
            }
        }
    }
}
