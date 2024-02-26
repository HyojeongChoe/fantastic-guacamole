<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.util.*"  %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h3>환영합니다!!!</h3>
	
	<%	//위에 <%@ page import="java.util.*" import 해야함
	
		//Enumeration :: 연결리스트랑 비슷함
		//en에 순차적으로 데이터를 넣고, 하나씩 처리할 수 있다.
		//만약, confirm_login 서블릿을 거치고 바로 여기로 온거라면
		//"id_session", "pw_session" 총 2개의 값이 저장
		Enumeration en = session.getAttributeNames();
	
		//en에 구성요소가 더 있는지를 확인함(구성요소가 있는대로 반복문 실행)
		while(en.hasMoreElements()){
			//id_session, pw_session 2가지는 각각 키 값
			//"admin", "1111" 2가지는 각각 value값
			String key = en.nextElement().toString();	//en의 가장 앞에있는 구성요소의 key값을 불러옴
			String value = (String)session.getAttribute(key);	//key값을 넣으면 value값을 불러옴
			if(value.equals("admin")){	//session에 저장되어있는 admin값을 불러옴.
				out.println(value+"님");
			}
		}
	%>
</body>
</html>