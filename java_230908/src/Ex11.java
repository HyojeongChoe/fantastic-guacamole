public class Ex11 {
    public static void main(String[] args) {
        //13번
        // 구구단의 짝수 단만 출력
        for (int i = 2; i < 10; i++) {
            for (int j = 1; j < 10; j++) {
                if (i % 2 == 0 && j <= i) {   // 짝수단이면서 j<=i 까지
                    System.out.println(i + "x" + j + "=" + i * j);
                }
            }
            System.out.println("\n");
        }
    }
}
