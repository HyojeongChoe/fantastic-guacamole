package com.javalex.ex;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class Student
 */
@WebServlet(name= "/student", urlPatterns = { "/student" })
public class Student extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Student() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		//브라우저상에서 응답받기위해 파일 형식 정의(jsp파일을 만들면 상단에 있는 값 복붙하면 됨)
		response.setContentType("text/html; charset=UTF-8");
		
		//사용자가 선택한 value값 처리
		String name = request.getParameter("name");
		int age = Integer.parseInt(request.getParameter("age"));
		String major = request.getParameter("major");	
		
		//사용자가 선택한 value값 복수처리
		String[] hobbies = request.getParameterValues("hobby");
		String site = request.getParameter("site");
		 
		System.out.println("이름: "+ name); //디버깅용
		
		response.getWriter().append("이름 : " + name + "<br>");
		response.getWriter().append("나이 : " + age + "<br>");
		response.getWriter().append("전공 : " + major + "<br>");
		response.getWriter().append("취미 : ");
		
		for(int i = 0; i < hobbies.length; i++) {
			response.getWriter().append(hobbies[i] + " ");
		} 
		response.getWriter().append("<br>");
		response.getWriter().append("애용하는 사이트 : " + site + "<br>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
