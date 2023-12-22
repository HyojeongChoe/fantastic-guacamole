public class Ex8 {
    public static void main(String[] args) {
        //3번

        //int형 변수 num을 선언하고 임의의 양수값을 저장하셈
        int num = 12;

        //만약 mum이 3의 배수이면
        //-"3의 배수입니다." 출력
        if (num % 3 == 0) {
            System.out.println("3의 배수입니다");
        }
        //아니고 4의 배수이면
        //-"4의 배수입니다." 출력
        else if(num % 4 == 0){
            System.out.println("4의 배수입니다.");
        }
        //둘다 아니면
        //-"알 수 없습니다." 출력
        else{
            System.out.println("알 수 없습니다.");
        }
    }
}
