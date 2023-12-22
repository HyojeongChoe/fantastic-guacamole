import java.util.Scanner;

public class Ex14 {
    public static void main(String[] args) {
        // 약수

        // 입력받기 위한 객체 선언
        Scanner scanner = new Scanner(System.in);

        // int input을 선언하고 입력받아 저장한다.
        System.out.println("숫자 입력 : ");
        String str = scanner.nextLine();
        int input = Integer.parseInt(str);

        // i는 1부터 input까지 반복
        for (int i = 1; i <= input; i++) {
            // - 만약 input % i == 0
            if (input % i == 0) {
                // -- 출력 i
                System.out.println(i);
            }
        }


    }
}
