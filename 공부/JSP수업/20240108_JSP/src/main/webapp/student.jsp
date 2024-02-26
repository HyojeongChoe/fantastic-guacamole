<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%
	String name = request.getParameter("name");
	int age = Integer.parseInt(request.getParameter("age"));
	String major = request.getParameter("major");
	String[] hobbies = request.getParameterValues("hobby");
	String site = request.getParameter("site");
	%>
	
	<h1><% out.println("학생정보"); %> </h1>
	
	<%
	out.println("<p> 이름:" + name +"</p>");
	out.println("<p> 나이:" + age +"</p>");
	
	//전공 출력
	switch(major){
	case "computer": 
		major = "컴공학과"; break;
	case "math": 
		major = "수학과"; break;
	case "teacher": 
		major = "교육과"; break;
	}
	out.println("<p> 전공:" + major +"</p>");
	
	out.println("<p>취미: ");
	if(hobbies==null) {
		out.println("취미 없음");	//사용자가 아무것도 선택하지 않았다면
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
			out.println(hobbies[i]);
			if(i!=hobbies.length-1) {	//마지막 값의 차례가 아니라면
				out.println(",");
			}
		}	
	}
	out.println("</p>");
	//사이트 출력
	switch(site){
	case "naver" :
		site = "네이버"; break;
	case "google" :
		site = "구글"; break;
	case "daum" :
		site = "다음"; break;
	}
	out.println("<p>애용하는 사이트: " + site + "</p><br>");
	%>	
</body>
</html>