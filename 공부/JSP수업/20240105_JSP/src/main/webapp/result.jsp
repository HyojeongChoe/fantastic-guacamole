<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

	<!-- 
		input.html에서 제출 버튼 눌렀을 때,
		전송받은 값들이, num1, num2, opt
	 -->
	 <%
	 	//여기 안에서는 자바 코드 삽입 가능
	 	String oper = request.getParameter("opt");
	 	int n1 = Integer.parseInt(request.getParameter("num1"));
	 	int n2 = Integer.parseInt(request.getParameter("num2"));
	 	int result = 0 ;
	 	
	 	switch(oper){
	 	case "+": result = n1 + n2;
	 		break;
	 	case "-": result = n1 - n2;
	 		break;
	 	case "*": result = n1 * n2;
	 		break;
	 	case "/": result = n1 / n2;
	 		break;
	 	case "%": result = n1 % n2;
	 		break;
	 	}
	 %>
	<h3>결과값 = <%=result %></h3>
</body>
</html>