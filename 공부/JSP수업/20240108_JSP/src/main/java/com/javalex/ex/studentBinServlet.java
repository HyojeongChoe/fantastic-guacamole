package com.javalex.ex;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class studentBinServlet
 */
@WebServlet("/stuBin")
public class studentBinServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public studentBinServlet() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub

	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		request.setCharacterEncoding("UTF-8");

		String name = request.getParameter("name");
		int age = Integer.parseInt(request.getParameter("age"));
		String number = request.getParameter("number");
		String gender = request.getParameter("gender");

		// 자바빈을 이용하여 객체 생성
		studentBin stu = new studentBin(name, age, number, gender);

		response.setContentType("text/html; charset=UTF-8");
		// 브라우저상 표시
		PrintWriter pw = response.getWriter();
		pw.append("이름: " + stu.getName() + "</br>");
		pw.append("나이: " + stu.getAge() + "</br>");
		pw.append("번호: " + stu.getNumber() + "</br>");
		pw.append("성별: " + stu.getGender() + "</br>");
	}

}
