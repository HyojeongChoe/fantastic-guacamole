public class Ex8 {
    public static void main(String[] args) {
//        //9,10번
        //구구단 중 5단을 출력하는 프로그램을 while문을 이용하여 작성하시오.
        //int형 변수 i를 선언하고 단을 출력할 5를 저장
        int i = 5;  //단출력
        //int형 변수 j를 선언하고 1~9까지 반복
        int j = 1;
        //int형 변수 result를 선언하고 i*j 저장
        while (j <= 9) {
            int result = i * j;
            System.out.println(i + " x " + j + " =  " + result);
            j++;
        }
        //구구단 중 5단을 출력하는 프로그램을 for문을 이용하여 작성하시오.
        //int형 변수 num 을 선언하고 5 저장
        int num = 5;
        for (int k = 1; k <= 9; k++) {
            System.out.println(num + " x " + k + " =  " + num * k);
        }
    }
}
