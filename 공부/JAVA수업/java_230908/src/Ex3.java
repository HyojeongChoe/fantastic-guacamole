public class Ex3 {
    public static void main(String[] args) {
      //반복문 1번
        //1부터 99까지의 합을 구하는 반복문
        int i = 1;
        //합을 저장할 변수 sum을 선언하고 0으로 초기화
        int sum = 0;
        while (i < 100) {
            sum += i;
            i++;
        }
        System.out.println(sum);

        //2번
        int sum1 = 0;
        for(int j = 0 ; j < 100 ; j ++){
            sum1 += j;
        }
        System.out.println(sum1);
    }
}
