public class Calculator {
    public static void main(String[] args) {
        //8번
        //int형 변수 num1, num2를 선언하고 임의값 넣기
        int num1 = 10;
        int num2 = 30;
        //문자형 변수 str 선언하고 +,-,*,/ 중 넣기
        String oper = "-";
        //int형 변수 result 선언하기
        int result;
        //만약 + 라면
        //-result = num1 + num2
        if (oper.equals("+")) {
            result = num1 + num2;
            System.out.println(num1 + " + " + num2 + " = " + result);
        }
        //아니고 - 라면
        //-result = num1 - num2
        else if (oper.equals("-")) {
            result = num1 - num2;
            System.out.println(num1 + " - " + num2 + " = " + result);
        }
        //아니고 * 라면
        //-result = num1 * num2
        else if (oper.equals("*")) {
            result = num1 * num2;
            System.out.println(num1 + " * " + num2 + " = " + result);
        }
        //아니고 / 라면
        //-result = num1 / num2
        else if (oper.equals("/")) {
            result = num1 / num2;
            System.out.println(num1 + " / " + num2 + " = " + result);
        }
        else{
            System.out.println("Error!!!");
        }
    }
}
