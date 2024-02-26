package com.javalex.ex.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.DAO.memberDAO;
import com.javalex.ex.DTO.memberDTO;

public class memberServiceSelect implements memberService {

	@Override
	public ArrayList<memberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		ArrayList<memberDTO> result = new ArrayList<memberDTO>();

		memberDAO dao = new memberDAO();
		result=dao.memberSelect();
		
		request.setAttribute("list", result);
		return result;
	}
}
