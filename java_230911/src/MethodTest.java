public class MethodTest {
    public static void main(String[] args) {
        int age = getMyAge(30);     //호출할 때 argument
        String name = getMyName("홍길동");
        System.out.println(age);
        System.out.println(name);
    }

    public static int getMyAge(int age, String name) {   //소괄호 안 parameter
        String name1 = "최효정";       //종료되는 순간 메모리에서 사라짐. 지역변수 개념

        //여러개도 전달 가능 but 갯수와 타입이 동일해야함
        //메소드를 실행할 때 데이터를 전달해줌 객체도 가능
        //카멜표기법                 //호출할 때도 같이 전달 해줘야 함

        //메소드명
        //의미있게
        //동사로
        return age;
    }

    public static int getMyAge(int age) {    //호출하는 조건은 메소드명과 parameter
        return age;
        //리턴의 개념 두가지
        //1. 데이터를 호출한 곳으로 돌려줌 -> 데이터 전달
        //2. 리턴을 만난 순간 함수를 종료
        //여러개의 데이터를 리턴하고 싶으면 class를 리턴
        //Call by value, Call by reference
        //
    }
    public static String getMyName(String name){
        return name;
    }
}
