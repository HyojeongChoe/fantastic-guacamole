package com.kb;

//회사친구
public class CompFriend {
    //멤버변수 생성
    private String name;    //이름
    private String department;  //부서
    private String phone;   //연락처

    //생성자
    public CompFriend(String name, String department, String phone) {
        this.name = name;
        this.department = department;
        this.phone = phone;
    }
    //showInfo 함수
    public void showInfo() {
        System.out.println("이름: " + this.name);
        System.out.println("부서: " + this.department);
        System.out.println("전화: " + this.phone);
    }
}
