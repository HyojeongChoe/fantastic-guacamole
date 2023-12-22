public class Ex3 {
    public static void main(String[] args) {
        //int 변수 result1를 선언하고 3+6저장
        int result1 = (3 + 6);
        System.out.println(result1);

        //int result2를 선언하고 3+6+9를 저장
        int result2 = (result1 + 9);
        System.out.println(result2);

        //int result3를 선언하고 3+6+9+12를 저장
        int result3 = (result2 + 12);
        System.out.println(result3);

        //int result4를 선언하고 result1+result2+result3를 저장
        int result4 = result1 + result2 + result3;
        System.out.println(result4);

        //result 출력
        System.out.println(result4);
    }
}
