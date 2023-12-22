public class IfEx7 {
    public static void main(String[] args) {
        // 임의의 두 정수를 비교하여
        // 첫 번째 정수가 두 번째 정수보다 크고 짝수이면 “안녕하세요.”를
        // 출력하는 프로그램을 작성하시오.



        // int num1을 선언하고 임의의 정수 저장
        int num1 = 13245;

        // int num2를 선언하고 임의의 정수 저장
        int num2 = 23246;

        // 만약 num1 > num2 && num1 % 2 == 0이라면
        if (num1 > num2 && num1 % 2 == 0) {
            System.out.println("안녕하세요");
        }
        // - 안녕하세요 출력
    }
}
