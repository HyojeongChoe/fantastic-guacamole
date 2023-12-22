public class IfEx1 {
    public static void main(String[] args) {
        // int num을 선언하고 120을 저장한다.
        int num = 120;

        if (num > 0 && (num % 2) == 0) {// 만약 num > 0 라면
            System.out.println("양수이면서 짝수");
        }
    }
}
