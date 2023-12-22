public class IfEx5 {
    public static void main(String[] args) {
        // 임의의 두 정수를 더한 결과가 짝수이면 “짝수”
        // , 아니면 “홀수”를 출력하는 프로그램을 작성하시오.


        // int num1을 선언하고 임의의 정수 저장
        int num1 = 123;

        // int num2를 선언하고 임의의 정수 저장
        int num2 = 124;

        // int result를 선언하고 num1 + num2의 결과를 저장
        int result = num1 + num2;

        if (result % 2 == 0) {// 만약 result가 짝수라면
            // - 짝수 출력
            System.out.println("짝수");
        } else {// 아니라면
            // - 홀수 출력
            System.out.println("홀수");
        }


    }
}
