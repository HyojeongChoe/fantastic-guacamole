package com.javalex.ex.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.DAO.memberDAO;
import com.javalex.ex.DTO.memberDTO;

public class memberServiceDelete implements memberService{

	@Override
	public ArrayList<memberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		ArrayList<memberDTO> dto = null;
		
		memberDAO dao = new memberDAO();
		String id = request.getParameter("id");
		
		dao.memberDelete(id);
		return dto;
	}
}
