package com.kb;

public class TestImpl implements Test {
    //Test라는 interface를 구현하는 곳.
    //여기서 interface에 대한 정의 안하면 오류
    //return method parameter 똑같아야함
    //TestImpl은 Test의 한 종류다
    //override 재정의
    @Override
    public void print() {

    }
    public void sort(){
        //선언 된 함수 외에 다른 함수 정의 가능
    }
    private int count;
    //멤버변수도 선언 가능

}
