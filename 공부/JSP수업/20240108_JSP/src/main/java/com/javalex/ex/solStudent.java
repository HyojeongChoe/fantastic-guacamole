package com.javalex.ex;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class solStudent
 */
@WebServlet(name = "/solStudent" , urlPatterns = { "/solStudent" })
public class solStudent extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public solStudent() {
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
		
		PrintWriter pw = response.getWriter();	//빨간줄뜨면 상단의 import 추가하면 사라짐
		pw.append("<p>이름: " + name + "</p>"); //== pw.println()써도 됨
		pw.println("<p>나이: " + age + "</p>");
		
		//전공 값 출력 :: 영문으로 전달받은 값을 한글로 바꿔서 출력
		switch(major) {
		case "computer" : //value 값이 computer 라면
			major="컴공과";
			break;
		case "math" :
			major="수학과";
			break;
		case "teacher" :
			major="교육과";
			break;
		}
		pw.println("<p>전공: " + major + "</p>");
		
		//취미 출력 :: 영문으로 전달받은 값들을 한글로 바꿔서 출력
		pw.println("<p>취미: ");
		if(hobbies==null) {
			pw.println("취미 없음");	//사용자가 아무것도 선택하지 않았다면
		}
		else {	//사용자가 취미란에 어떤 것이라도 선택을 한 경우
			for(int i = 0 ; i < hobbies.length; i ++) {
				switch(hobbies[i]) {	//0부터 시작하여, hobby 값들 한글로 바꾸기
				case "running":
					hobbies[i]="러닝";break;
				case "reading":
					hobbies[i]="독서";break;
				case "cooking":
					hobbies[i]="요리";break;
				case "gaming":
					hobbies[i]="게임";break;	
				}
				pw.println(hobbies[i]);
				if(i!=hobbies.length-1) {	//마지막 값의 차례가 아니라면
					pw.println(",");
				}
			}	
		}
		pw.println("</p>");
		
		//사이트명 출력 :: 영문으로 전달받은 값을 한글로 전환하여 출력
		switch(site) {
		case "naver" : //value 값이 computer 라면
			site="네이버";
			break;
		case "google" :
			site="구글";
			break;
		case "daum" :
			site="다음";
			break;
		}
		pw.println("<p>애용하는 사이트: " + site + "</p>");
		
		// \" 로 println 수행하면 "로 전송됨
		pw.println("<form action=\"input.html\">");
		pw.println("<input type= \"submit\" value = \"다시작성하기\" />");
		pw.println("</form>");	
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
