package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class HiJsp
 */
@WebServlet("/HJ")
public class HiJsp extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public HiJsp() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//여기에선, 브라우저 상에서 나타나게끔 설정 -> append()
		response.setCharacterEncoding("UTF-8");	//한글 깨짐방지 -> 최상단에 적어야 함
		response.setContentType("text/html; charset=UTF-8");	//이걸 작성하면 append를 사용해 브라우저를 통해 나타낼 수 있음
		
		String name = request.getParameter("name");	// -> append 안에 집어넣을 수 있음
		response.getWriter().append("<h2>"+name + "님환영합니다.</h2>");
		
		//System.out.println("GET메소드가 실행되었습ㅁ니다.");
	}
	
	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setCharacterEncoding("UTF-8");	//한글 깨짐방지 -> 최상단에 적어야 함
		response.setContentType("text/html; charset=UTF-8");
		String name = request.getParameter("name");
		
		response.getWriter().append("<h2>"+name + "님환영합니다.</h2>");
		System.out.println(name + "님 환영합니다.");
		
		
		//POST가 GET 보다 보안에 강화되었다.
		
	}

}
