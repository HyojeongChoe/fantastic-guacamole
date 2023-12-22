package com.kb;

//대학친구
public class UnivFriend {
    //멤버변수 생성
    private String name;    //이름
    private String major;   //전공
    private String phone;   //연락처

    //생성자
    public UnivFriend(String name, String major, String phone) {
        this.name = name;
        this.major = major;
        this.phone = phone;
    }
    //showInfo함수
    public void showInfo(){
        System.out.println("이름: " + this.name);
        System.out.println("전공: " + this.major);
        System.out.println("전화: " + this.phone);
    }
}
