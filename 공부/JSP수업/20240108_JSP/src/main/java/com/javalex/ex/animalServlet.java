package com.javalex.ex;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class animalServlet
 */
@WebServlet("/animal")
public class animalServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public animalServlet() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		
		request.setCharacterEncoding("UTF-8");
		
		// html 파일에서의 입력값 파라미터 처리
		String name = request.getParameter("name");
		String kinds = request.getParameter("kinds");
		int age = Integer.parseInt(request.getParameter("age"));
		String num = request.getParameter("num");
		
		//자바빈을 이용하여, animal 객체 생성(객체 생성하려면 생성자가 필요. animal 클래스에서 추가로 작성해야함)
		animal a = new animal(kinds, name, age, num);
		
		
		response.setContentType("text/html; charset=UTF-8");
		//브라우저 상 객체 멤버변수 값들을 출력
		PrintWriter pw = response.getWriter();
		pw.append("동물 종: " + a.getKinds()+"</br>");
		pw.append("이름: " + a.getName()+"</br>");
		pw.append("나이: " + a.getAge()+"</br>");
		pw.append("번호: " + a.getNumber() +"</br>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
