public class Ex7 {
    public static void main(String[] args) {
        //7번,8번
        //1부터 10까지의 곱의 결과를 출력하는 프로그램을 while문을 이용해서 작성하시오.
        //int형 변수 num을 선언 및 1을 저장
        int num = 1;
        //int형 변수 result를 선언하고 1 저장 (초기값이 1이어야 곱셈이 됨)
        int result = 1;
        //10까지 반복
        while (num <= 10) {
            result *= num;
            System.out.println(num);
            num++;
        }
        System.out.println(result);

        //1부터 10까지의 곱의 결과를 출력하는 프로그램을 for문을 이용해서 작성하시오.
        //결과값을 출력할 int형 변수 result1 선언 및 초기화
        int result1 = 1;
        for (int i = 0; i < 10; i++) {
            result1 *= (i + 1);
        }
        System.out.println("1부터 10까지의 곱" + result1);
    }
}
