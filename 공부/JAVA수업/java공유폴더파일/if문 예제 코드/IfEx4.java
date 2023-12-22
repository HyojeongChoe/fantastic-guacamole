public class IfEx4 {
    public static void main(String[] args) {
        // 임의의 문자가 “a”, “b”, “c”이면 “영문입니다.”
        // , “1”, “2”, “3”이면 “숫자입니다.”
        // , “+”, ”-”, ”*”이면 “연산자입니다.”를 출력하는 프로그램을 작성하시오.


        // String str을 선언하고 임의의 문자열 저장
        String str = "*";

        if (str.equals("a")
                || str.equals("b")
                || str.equals("c")) {// 만약 str이 "a"이거나 "b"이거나 "c"라면
            // - 영문입니다 출력
            System.out.println("영문입니다.");
        } else if (str.equals("1")
                || str.equals("2")
                || str.equals("3")) {// 아니고 str이 "1"이거나 "2"이거나 "3"라면
            // - 숫자입니다 출력
            System.out.println("숫자입니다.");
        } else if (str.equals("+")
                || str.equals("-")
                || str.equals("*")) {// 아니고 str이 "+"이거나 "-"이거나 "*"라면
            // - 연산자입니다 출력
            System.out.println("연산자입니다.");
        }


    }
}
