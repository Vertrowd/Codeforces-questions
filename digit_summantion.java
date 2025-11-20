import java.util.Scanner;

public class digit_summantion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n1=sc.nextLong();
        long n2=sc.nextLong();

        long d1=n1%10;
        long d2=n2%10;
        long sum = d1+d2;
        System.out.println(sum);


    }
}
