package com.javalex.ex;

public class studentBin {
	// 자바빈생성
	// 멤버변수 :: 이름, 나이, 번호, 성별
	private String name;
	private int age;
	private String number;
	private String gender;

	// 생성자
	public studentBin() {
		//기본생성자: 만들어놓은 생성자가 없을때에만 유효
	}
	public studentBin(String n, int a, String num, String g) {
		this.name = n;
		this.age = a;
		this.number = num;
		this.gender = g;
	}

	// get,set
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

	public String getNumber() {
		return number;
	}

	public void setNumber(String number) {
		this.number = number;
	}

	public String getGender() {
		return gender;
	}

	public void setGender(String gender) {
		this.gender = gender;
	}

}
