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
		//전달된 값 읽기
		String firstStr = request.getParameter("first");
		String secondStr = request.getParameter("second");
		String operation = request.getParameter("operation");
	
		//스트링타입으로 입력받은 값 실수형으로 변환
		double first = (firstStr != null && !firstStr.isEmpty()) ? Double.parseDouble(firstStr) : 0;
		double second = (secondStr != null && !secondStr.isEmpty()) ? Double.parseDouble(secondStr) : 0;
		
		//계산 결과
		
		double result = 0;
		
		if("+".equals(operation)){
			result = first + second;
		}else if("-".equals(operation)){
			result = first - second;
		}else if("*".equals(operation)){
			result = first * second;
		}else if("/".equals(operation)){
			result = first / second;
		}else if("%".equals(operation)){
			result = first % second;
		}else{
			out.println("유효하지 않은 연산..");
			return;
		}
	%>

	<h3>결과 : <%=first %> <%=operation %> <%=second %> = <%= result %></h3>
</body>
</html>
