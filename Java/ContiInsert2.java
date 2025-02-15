//using while true & break
import java.util.Scanner;
public class ContiInsert2 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n;
        while(true) {
            System.out.println("insert:");
            n = s.nextInt();
            if(n > 0) break;
            else System.out.print("wrong, ");
        }
        System.out.println("success");
        s.close();
    }
}
