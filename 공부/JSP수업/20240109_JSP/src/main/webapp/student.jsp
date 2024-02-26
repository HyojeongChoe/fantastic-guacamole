<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ page import="com.javalex.ex.studentDAO"%>
<%@ page import="java.util.ArrayList" %>
<!DOCTYPE html>
<html>
<head>
<style>
	tr,td{
		text-align: center;
	}
</style>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h2>학생 정보 조회</h2>
	<table border="1" width="300px" height="50px">
		<tr>
			<th>학번, 이름, 나이, 학년, 전공</th>
		</tr>
		<%
        studentDAO dao = new studentDAO();
		//studentList에는 데이터베이스에서 가져온 학생정보가 문자열 형태로 저장
		ArrayList<String> studentList = dao.showAllStudent();

        for (int i = 0; i < studentList.size(); i++) {
            String studentInfo = studentList.get(i);
        %>
        <tr>
            <td><%= studentInfo %></td>
        </tr>
        <% } %>
	</table>
</body>
</html>