package com.javalex.ex.Command;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import java.util.*;
import com.javalex.ex.DTO.memberDTO;

public interface memberService {
	//인터페이스 :: 필드는 모두 상수, "메소드는 모두 추상메소드"
	
	//Execute 추상메소드 만들고
	//insert, delete, "select" 때문에 arraylist 필요, login-test 기능
	//반환형까지 작성했으면 인터페이스 작성 완료
	//command 패턴 클래스의 틀
	public ArrayList<memberDTO> execute (HttpServletRequest request, HttpServletResponse response);
}
