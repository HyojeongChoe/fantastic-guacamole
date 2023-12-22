public class Ex9 {
    public static void main(String[] args) {
        //4번

        String str = "a";       //스트링 클래스 객체 str
        //만약 임의의 문자가 a,b,c이면
        //-"영문입니다."
        if (str.equals("a") || str.equals("b") || str.equals("c")) {   //문자열 비교할 땐 str.equals("a") 같으면 true,
            System.out.println("영문입니다.");
        }
        //아니고 1,2,3이면
        //-"숫자입니다."
        else if (str.equals("1") || str.equals("2") || str.equals("3")) {
            System.out.println("숫자입니다.");
        }
        //아니고 +,-,*이면
        //-연산자입니다
        else if (str.equals("+") || str.equals("-") || str.equals("*")) {
            System.out.println("연산자입니다.");
        }
    }
}
