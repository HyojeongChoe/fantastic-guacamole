<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>CheckAge</title>
</head>
<body>
	<%
		int age = Integer.parseInt(request.getParameter("age"));
		
		if(age<20){	//sendRedirect :: formÀÇ action ¿ªÇÒ
			response.sendRedirect("kid.jsp");
		}
		else{
			response.sendRedirect("adult.jsp");
		}
	%>
</body>
</html>