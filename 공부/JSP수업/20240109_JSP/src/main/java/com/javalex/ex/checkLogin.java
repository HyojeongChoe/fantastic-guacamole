package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class checkLogin
 */
@WebServlet("/check")
public class checkLogin extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public checkLogin() {
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
		request.setCharacterEncoding("UTF-8");	//post에서만 쓰이는 방식
		
		String id = request.getParameter("id");
		String password = request.getParameter("pw");
		
		if(id.equals("admin") && password.equals("1111")) {	//관리자 계정이 있다고 가정하고 값을 설정
			// 세션:: 서버에 저장해놓는 변수
			// 세션은 생성된 직후부터 사용자가 브라우저를 종료하기 전까지 살아있음
			// 연결되는 페이지가 줄줄이 있을 때, 파라미터 전달로는 한계가 있으니 
			// 세션을 사용해서 값 전달하면 좋다
			
			// 1. 세션 생성을 위한 객체 생성
			HttpSession session = request.getSession();
			//session 객체를 통해서, 서버에 변수 삽입
			session.setAttribute("id", id);	//setAttribute("key", "value")	=>("id", "admin")
			session.setAttribute("passwd", password );		//key 값은 값을 추출하기위한 식별자일 뿐, 동일하지 않아도 됨
			
			response.sendRedirect("welcomeLogin.jsp");
		}
		else {
			System.out.println("관리자 로그인에 실패하였습니다.");
			System.out.println("다시 시도해주세용");
			
			response.sendRedirect("login_session.html");	//로그인 창으로 되돌아가기
		}
	}

}
