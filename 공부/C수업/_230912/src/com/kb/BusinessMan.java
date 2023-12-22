package com.kb;

public class BusinessMan extends Man{
    private String company;
    private String position;

    //생성자 선언
    public BusinessMan(String company, String position, String name) {
        super(name);    //슈퍼 키워드는 맨위. 상위 클래스의 네임으로 감
        this.company = company;
        this.position = position;
//        this.name = name;

    }
@Override  // 상위클래스에있는 tellYourInfo 재정의
    public void tellYourInfo(){
        System.out.println("My company is " + this.company);
        System.out.println("My position is " + this.position);
        tellYourName(); //Man 클래스를 확장했기 때문에 호출 가능!

    super.tellYourInfo();   //오버라이딩
    }
}
