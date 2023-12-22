import java.util.Scanner;

public class Ex2_Scanner_Def {
    public static void main(String[] args) {

        //입력 받기 위한 객체 선언
        Scanner scanner = new Scanner(System.in);

        //int input을 선언하고 입력받아 저장한다
        System.out.println("숫자 입력: ");
        String str = scanner.nextLine();     //정수를 입력받으면 무조건 스트링으로 넘어옴
        int input = Integer.parseInt(str);

        //i는 1부터 input까지 반복
        //-만약 input % i == 0 이면
        //--출력 i
        for(int i = 1; i <= input; i++){
            if(input % i == 0){
                System.out.println(i);
            }
        }
    }
}
