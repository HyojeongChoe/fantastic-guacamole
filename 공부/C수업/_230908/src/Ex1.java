import java.util.Scanner;

public class Ex1 {
    public static void main(String[] args) {
        int num = 15;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                System.out.println(i);
            }
        }
    }
}
