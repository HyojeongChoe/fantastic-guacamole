<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.util.Enumeration" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<!-- 서버에 있는 세션을 제거하면서 로그아웃 수행, html 파일로 돌아가기 -->
<!--  -->
<%!
	String key;
	Enumeration en;
%>

<%
	en = session.getAttributeNames();
	int size = 0;	//몇개를 삭제했는지 알기위해
	while(en.hasMoreElements()){
		key = en.nextElement().toString();
		//key 값을 통해서 session 삭제 , 
		//key값을 가져오면 value는 자동으로 삭제되기 때문에 value까지 불러올필요 x
		
		session.removeAttribute(key);	//key와 value값들 한꺼번에 삭제 
		size++;
	}
	
	System.out.println(size+ "개의 세션이 제거되었습니다.");
	
	//모든 세션을 지우고 나면 로그인폼으로 돌아가기 수행
	response.sendRedirect("login_session.html");
%>
</body>
</html>