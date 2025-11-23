import java.util.Scanner;

public class febonacci {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int i,j,k,n,limit;
        limit=sc.nextInt();
        n=0;
        k=0;
    for(i=-1,j=1;n<limit;n++){
        k=i+j;
        i=j;
        j=k;
    }
    System.out.print(k);
    }
}