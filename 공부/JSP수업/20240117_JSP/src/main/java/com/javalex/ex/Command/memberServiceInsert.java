package com.javalex.ex.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.DAO.memberDAO;
import com.javalex.ex.DTO.memberDTO;

public class memberServiceInsert implements memberService {

	@Override
	public ArrayList<memberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		ArrayList<memberDTO> dto = null;
		
		//DAO에 있는 insert 메소드만 수행
		memberDAO dao = new memberDAO();
		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		String name = request.getParameter("name");
		
		dao.memberInsert(id, pw, name);
		
		return dto;
	}

	
}
