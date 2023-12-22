public class Operation {
    //BankAccount의 외부 클래스
    //잔고에 직접 접근할 수 x 출금과 입금, 확인만 가넝
    public static void main(String[] args) {
        BankAccount ba1 = new BankAccount(10000,"a");    //Bank Account가 객체화
        // 정수타입은 0으로 class와 관련된 것(string)은 null boolean false
        BankAccount ba2 = new BankAccount(5000,"b");    //생성자 데이터 넣기.

        ba1.deposit(10000);     //객체의 메소드 호출
        ba2.withdraw(10000);
        ba1.withdraw(10001);

    }
}
