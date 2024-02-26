package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class checkCookie
 */
@WebServlet("/cookie")
public class checkCookie extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public checkCookie() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		
		String id = request.getParameter("id");
		String password = request.getParameter("pw");
		
		if(id.equals("admin") && password.equals("1111")) {
			// 쿠키 :: 클라이언트(로컬pc)에 저장하는 변수
			// 세션보다는 보안에 좋지 않음
			// 사용자가 프로그램/브라우저를 꺼도 변수가 유지
			
			// Cookie 클래스를 통해 객체 생성
			// import하면 생성자쪽에 빨간줄 뜨는 이유 :: Cookie생성자는 매개변수 반드시 필요
			Cookie cookie = new Cookie("id", id);	//(key, value) cookie객체 생성
			
			// 쿠키 설정 -> 유효기간 설정 (아래같은 경우에는 30초로 설정)
			cookie.setMaxAge(30);	
			
			// 사용자 응답에 쿠키객체 포함 ( welcomeCookie 불러오면서 cookie 도 같이 전송)
			response.addCookie(cookie);	
			response.sendRedirect("welcomeCookie.jsp");
		}
		else {
			System.out.println("로그인에 실패하였습니다.");
			response.sendRedirect("loginCookie.html");
		}
	}

}
