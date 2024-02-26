package com.javalex.ex;

// 클래스 => 자바빈 => "DTO(공식적인 용어)"	
public class userDTO {
	//멤버변수
	private String name;
	private int age;
	
	//getter setter 
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	
}
