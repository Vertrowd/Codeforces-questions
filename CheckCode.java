import java.util.Scanner;

public interface CheckCode {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1=sc.nextInt();
        int n2=sc.nextInt();
        String s=sc.next();
        
        if (!s.contains("-")) {
            System.out.println("No");
            return;
        }

        if (s.charAt(0) == '-' || s.charAt(s.length() - 1) == '-') {
            System.out.println("No");
            return;
        }

        String[] parts= s.split("-");
        if (parts.length!=2) {
            System.out.println("No");
            return;
        }

        String start=parts[0];
        String end=parts[1];

        if (start.length()==n1 && end.length()==n2) {
            System.out.println("Yes");
        } else{
            System.out.println("No");
        }



    }
}
