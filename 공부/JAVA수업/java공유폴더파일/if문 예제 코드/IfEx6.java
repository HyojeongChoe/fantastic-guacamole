public class IfEx6 {
    public static void main(String[] args) {
        // 임의의 두 정수를 뺀 결과가 0이거나 양수이면 “+”
        // , 음수이면 “-”를 출력하는 프로그램을 작성하시오.



        // int num1을 선언하고 임의의 정수 저장
        int num1 = 12431234;

        // int num2를 선언하고 임의의 정수 저장
        int num2 = 1234523;

        // int result를 선언하고 num1 - num2의 결과를 저장
        int result = num1 - num2;

        if (result >= 0) {
            System.out.println("+");
        } else {
            System.out.println("-");
        }

        // 만약 result >= 0이 라면
        // - + 출력

        // 아니라면
        // - - 출력
    }
}
