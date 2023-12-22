public class BankAccount {
    private int balance;    // 잔고

    private String name;    // 계좌주성명

    public BankAccount(int balance, String name) {
        this.name = name;
        deposit(balance);
    }

    // 입금
    public void deposit(int amount) {
        this.balance += amount;
        System.out.println(amount + "원이 입금되었습니다.");
        this.showBalance();
    }

    // 출금
    public void withdraw(int amount) {
        if (this.balance < amount) {
            System.out.println("잔고가 부족합니다.");
            this.showBalance();
            return;
        }
        this.balance -= amount;
        System.out.println(amount + "원이 출금되었습니다.");
        this.showBalance();
    }

    public void showBalance() {
        System.out.println(this.name + "님의 현재 잔고 : " + this.balance);
    }
}
