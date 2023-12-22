public class IfEx3 {
    public static void main(String[] args) {
        // 임의의 양의 정수가 3의 배수이면 “3의 배수입니다.”
        // , 4의 배수이면 “4의 배수입니다.“
        // , 둘다 아니면 “알 수 없습니다.”를 출력하는 프로그램을 작성하시오.


        // int num을 선언하고 임의의 정수를 저장한다.
        int num = 1234;

        if (num % 3 == 0) {// 만약 num이 3의 배수라면
            // - 3의 배수입니다 출력
            System.out.println("3의 배수입니다.");
        } else if (num % 4 == 0) {// 아니고 num이 4의 배수라면
            // - 4의 배수입니다 출력
            System.out.println("4의 배수입니다.");
        } else {// 아니라면
            // - 알 수 없습니다. 출력
            System.out.println("알 수 없습니다.");
        }
    }
}
