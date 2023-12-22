package com.kb;

public class Friend {

    //멤버변수 생성 이름. 전화번호
    private String name;
    private String phone;


    //생성자 parans : 이름, 전화번호

    public Friend(String name, String phone) {
        this.name = name;
        this.phone = phone;
    }

    //메소드 : showInfo();
    public void showInfo() {
        System.out.println("이름: " + this.name);
        System.out.println("전화번호: " + this.phone);
    }
}

