package com.javalex.ex.Controller;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.Command.memberService;
import com.javalex.ex.Command.memberServiceDelete;
import com.javalex.ex.Command.memberServiceInsert;
import com.javalex.ex.Command.memberServiceLogin;
import com.javalex.ex.Command.memberServiceSelect;
import com.javalex.ex.DTO.memberDTO;

/**
 * Servlet implementation class commandController
 */
@WebServlet("*.do")
public class commandController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public commandController() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doAction(request,response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doAction(request,response);
	}

	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		String uri = request.getRequestURI();	// 사용자가 불러온 링크를 반환 ex)/20040117_JSP/insert.do
		String conPath = request.getContextPath();	// 프로젝트명 반환 
		String command = uri.substring(conPath.length());	//insert.do, delete.do ... 형식으로 command에 저장
		
		//View(jsp), Controller(프론트컨트롤러, 커맨드)
		memberService mService=null;	//객체생성x, 타입구성만
		if(command.equals("/insert.do")) {	//회원 추가 수행을 요청할 시 
			System.out.println("<회원 추가>를 수행합니다.");
			mService = new memberServiceInsert();
		}else if(command.equals("/delete.do")) {//회원 삭제 요청할 시
			System.out.println("<회원 삭제>를 수행합니다.");
			mService = new memberServiceDelete();
		}else if(command.equals("/login.do")){
			System.out.println("<로그인 테스트> 수행");
			mService = new memberServiceLogin();
		}else if(command.equals("/select.do")) {
			System.out.println("<회원 전체 출력> 수행");
			mService = new memberServiceSelect();
		}
		//insert, delete, login-test 할 때엔 excute 실행만 될 것이고 -> null값 
		//select 할 때엔 result로 실질적인 값이 반환될 것
		ArrayList<memberDTO> result= mService.execute(request, response);
		if(result!=null) {
			//Controller에서만 처리할 수 있는 건 그냥 처리하면 되는데,
			//다만 View 역할의 필요할 대엔 RequestDispatcher가 필요하다....ㅗ
			//	다른 페이지에서 처리를 할 수 있도록 연결
			RequestDispatcher dis = request.getRequestDispatcher("/getList.jsp");	//선언만 한 상태
			dis.forward(request, response);
		}
		response.sendRedirect("adminPage.html");
	}
}
