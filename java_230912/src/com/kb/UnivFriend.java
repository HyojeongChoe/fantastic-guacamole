package com.kb;

//대학친구
public class UnivFriend extends Friend {
    //멤버변수 생성

    private String major;   //String형 전공


    //생성자
    public UnivFriend(String name, String phone, String major) {
        super(name, phone); //상위클래스의 생성자를 가지고 생성
        this.major = major;

    }

    /**
     * method name : showInfo
     * parans : none
     * return : void
     * description : 객체의 이름, 전공, 전화번호
     * oythor : hjchoe
     * make date : 2023.09.07
     * update history
     */
    @Override       //상위클래스 재정의 표현
    public void showInfo() {
        super.showInfo();
        System.out.println("전공: " + this.major);
    }
}
