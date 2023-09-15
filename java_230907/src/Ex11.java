public class Ex11 {
    public static void main(String[] args) {
        //6번
        //int 형 변수 num1, num2를 선언하고 임의값을 넣으셈
        int num1 = 199;
        int num2 = 200;
        //int형 변수 result를 선언하고 num1 - num2의 값을 저장하라
        int result = num1 - num2;
        //만약 result 가 0 이거나 양수이면
        //- "+"출력
        if (result >= 0) {
            System.out.println("+");
        }
        //아니면
        //- "-" 출력
        else {
            System.out.println("-");
        }
    }
}
