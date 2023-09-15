package com.kb;

//회사친구
public class CompFriend extends Friend {
    //멤버변수 생성
    private String department;  //부서

    //생성자
    public CompFriend(String name, String department, String phone) {
        super(name, phone);
        this.department = department;
    }

    //showInfo 함수
    @Override       //상위클래스 재정의 표현
    public void showInfo() {
        super.showInfo();
        System.out.println("부서: " + this.department);

    }
}
