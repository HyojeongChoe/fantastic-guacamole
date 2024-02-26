<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "com.javalex.ex.studentDAO" %>
<%@ page import = "java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<table border="1">
	<tr>
		<th>학번, 이름, 나이, 학년, 전공</th>
	</tr>
	
	<%
	//생성자에서 명령한대로, JDBC 드라이버 로드가 될 것
		studentDAO dao = new studentDAO();
	//학생 전체 조회 결과값을 data에 저장
		ArrayList<String> data = dao.showAllStudent();
		
	for(String item:data){ // item 변수를 통해 data의 데이터에 접근
		//데이터에 저장
	%>		
	<tr>
	<td><%=item %></td>
	</tr>	
	<% }%>
</table>
</body>
</html>