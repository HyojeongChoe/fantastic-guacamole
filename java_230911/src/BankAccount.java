import org.w3c.dom.ls.LSOutput;

public class BankAccount {
    //클래스 내에서 정보를 수정..
    //멤버변수
    private int balance;    //잔고
    private String name;    //계좌주성명

    //생성자는 멤버변수 바로 아래
    //
    //기본생성자
    public BankAccount(){   //똑같은 메소드명 쓸수있는 이유 :
                            //메소드명이 같더라도 parameter가 다르면은 같은 메소드명 사용 가능// 오버로드
                            //parameter의 타입이 달라야함 ex) println ()
    }
    //parameter 두개를 가진 생성자
    public BankAccount(int balance, String name) {
        if(balance<0){
            System.out.println("마이너스 통장 불가");
            balance = 0;
        }
        this.name = name;   //이름을 먼저 설정해줘야 deposi->showBalance ->this.name에 공백 x
        deposit(balance);   //이력을 남기기 위해 디파짓을 불러와서 넣음.
    }

    //입금
    public void deposit(int amount) {
        this.balance += amount;
        System.out.println(amount + "원이 입금처리 되었습니다.");
        this.showBalance();
    }

    //출금
    public void withdraw(int amount) {
        if (this.balance < amount) {
            System.out.println("잔고가 부족합니다.");
            this.showBalance();
            return;
        }
        this.balance -= amount;
        System.out.println(amount + "원이 출금처리 되었습니다.");
        this.showBalance();
    }

    public void showBalance() {
        System.out.println(this.name + "님의 현재 잔고 : " + this.balance + "원");
    }
//백도어
//    public void setBalance(int balance) {
//        this.balance = balance;
//    }
}
