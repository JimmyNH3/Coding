import java.util.Scanner;
public class ContiInsert1 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("insert:");
        
        while(s.nextInt() <= 0) {
            System.out.println("wrong, insert:");
        }
        System.out.println("success");
        s.close();
    }
}