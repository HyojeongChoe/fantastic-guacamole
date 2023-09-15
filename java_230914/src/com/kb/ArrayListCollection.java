package com.kb;

import java.util.ArrayList;
import java.util.List;

public class ArrayListCollection {
    public static void main(String[] args) {
        //스트링을 저장할수있는 어레이리스트 생성
        List<String> list = new ArrayList<>();  //스트링클래스
        list.add("Toy");    //index:0
        list.add("Box");    //index:1
        list.add("Robot");

        //저장된 문자열 인스턴스의 참조
        for (int i = 0; i < list.size(); i++) {//size: 자료 갯수
            System.out.println(list.get(i));    //get:인덱스에 해당하는 객체 나옴
        }
        System.out.println();
        list.remove(0); //index 0 삭제
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
    }
}
