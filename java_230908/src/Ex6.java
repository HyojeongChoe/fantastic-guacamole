public class Ex6 {
    public static void main(String[] args) {
        //5번,6번
        //int형 변수 sum을 선언하고 0으로 초기화
        //while 사용
        int i = 0;
        int sum = 0;
        while (i <= 1000) {
            if (i % 2 == 0 && i % 7 == 0) {
                sum += i;
                System.out.println(i);
            }
            i++;
        }
        System.out.println("총 합: " + sum);

        //for 사용
        int sum1 = 0;
        for (int j = 0; j <= 1000; j++) {
            if (j % 2 == 0 && j % 7 == 0) {
                sum1 += j;
                System.out.println(j);
            }
        }
        System.out.println("총 합: " + sum1);
    }
}
