package com.javalex.ex.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.DAO.memberDAO;
import com.javalex.ex.DTO.memberDTO;

public class memberServiceLogin implements memberService{

	@Override
	public ArrayList<memberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
	ArrayList<memberDTO> dto = null;
		
		memberDAO dao = new memberDAO();
		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		boolean tf = dao.memberLogin(id, pw);
		
		System.out.println("로그인 테스트 결과: ");
		if(tf==true) {
			System.out.println("성공");
		}
		else {
			System.out.println("실패");
		}
		return dto;
	}

}
