package com.kb;

public class Friend {

    //멤버변수 생성
    protected String name;  //이름
    protected String phone; //연락처

    //생성자
    public Friend(String name, String phone) {
        this.name = name;
        this.phone = phone;
    }

    //showInfo 함수
    public void showinfo(){
        System.out.println("이름: " + this.name);
        System.out.println("전화: " + this.phone);
    }
}
