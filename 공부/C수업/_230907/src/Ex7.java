public class Ex7 {
    public static void main(String[] args) {
        //2번

        //int형 변수 num을 선언하고 임의의 양의정수를 저장하셈
        int num = 15;

        //만약 양의 정수가 짝수이면
        //-"2의 배수입니다." 출력
        if (num % 2 == 0) {
            System.out.println("2의 배수입니다.");
        }
        //아니면
        //-"2의 배수가 아닙니다." 출력
        else {
            System.out.println("2의 배수가 아닙니다.");
        }
    }
}
