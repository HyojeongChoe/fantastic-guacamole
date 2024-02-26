<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>

<%@page import="com.javalex.ex.studentBin"%>

<!-- 액션 태그 -->
<!-- useBean:: 특정 자바빈의 내용을 가져옴. id의 이름으로 대체해서 사용 가능 -->
<jsp:useBean id="student1" class="com.javalex.ex.studentBin"
	scope="page" />

<!-- setProperty :: 특정 필드의 값을 설정 -->
<jsp:setProperty name="student1" property="name" value="백정윤" />
<jsp:setProperty name="student1" property="age" value="27" />
<jsp:setProperty name="student1" property="number" value="4" />
<jsp:setProperty name="student1" property="gender" value="남자" />

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<!-- getProperty :: 특정 필드의 값을 반환 -->
	student1 이름 : <jsp:getProperty name="student1" property="name" /><br>
	student1 나이 : <jsp:getProperty name="student1" property="age" /> <br>

	<%
	//page 지시어로 자바빈 파일을 import해야 사용가능
	studentBin stu1 = new studentBin("최효정", 29, "100", "여자");
	studentBin stu2 = new studentBin();

	stu2.setName("이종권");
	stu2.setAge(28);
	stu2.setNumber("5");
	stu2.setGender("남자");
	
	out.println("이름: " + stu1.getName() + "");  
	out.println("나이: " + stu1.getAge());
	
	out.println("이름: " + stu2.getName());
	out.println("나이: " + stu2.getAge());
	%>
</body>
</html>