public class Ex4 {
    public static void main(String[] args) {
        //변수 n1, n2, n3가 다음과 같을 때 n1>,n2>,n3이면 true, 아니면 false

        //n1={(25+5) + (36/4)-72}*5
        int n1 = ((25 + 5) + (36 / 4) - 72) * 5;
        //n2 = {(25*5) + (36-4) + 71} /4
        int n2 = ((25 * 5) + (36 - 4) + 71) / 4;
        //n3 = (128/4)*2
        int n3 = (128 / 4) * 2;

        System.out.println(n1);
        System.out.println(n2);
        System.out.println(n3);
        System.out.println(n1 > n2 && n2 > n3);
    }
}
