package com.kb;

public class Man {
//    protected 사용 안하고 private 사용하는 법
    private String name;

    public Man(String name) {
        this.name = name;
    }

    public void tellYourName(){System.out.println("My name is " + this.name);
    }
    public void tellYourInfo(){
        System.out.println("My name is " + this.name);
    }
}

