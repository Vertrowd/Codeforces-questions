import java.util.Scanner;

public class ArrayReverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int range=sc.nextInt();
        int[] arr= new int[range];
        int[] store= new int[range];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=sc.nextInt();
        }
        // for (int i = arr.length-1; i >= 0; i--) {
        //     System.out.print(arr[i]+" ");
        // }
        for (int i = arr.length-1,j=0; i >= 0; i--,j++) {
            store[j]=arr[i];
        }

        int count=0;
        for (int i = 0; i < store.length; i++) {
            
            if (arr[i]!=store[i]) {
                count++;
            }
        }
        if (count==0) {
            System.out.println("YES");
        } else{
            System.out.println("NO");
        }
    }
}
