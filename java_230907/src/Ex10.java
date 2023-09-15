public class Ex10 {
    public static void main(String[] args) {
        //5번

        //int형 변수 num1, num2를 선언하고 임의값을 넣어라
        int num1 = 20;
        int num2 = 84;
        //int result를 선언하고 num1+num2의 결과를 저장
        int result = num1 + num2;
        //만약 num1 + num2가 짝수이면
        //-"짝수" 출력
        if ((result) % 2 == 0) {
            System.out.println("짝수");
        }
        //아니면
        //-"홀수" 출력
        else {
            System.out.println("홀수");
        }
    }
}
