import java.util.Scanner;

public class A4_800_Watermelon_bruteforce_math_Round4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int w;

        w = sc.nextInt();
        sc.close();

        if (w > 2) {
            if (w % 2 == 0) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        } else {
            System.out.println("No");
        }
    }
}
