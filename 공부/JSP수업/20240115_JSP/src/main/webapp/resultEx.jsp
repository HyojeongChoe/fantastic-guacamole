<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>

<body>
<%request.setCharacterEncoding("UTF-8"); %>

<h3>getParameter 정보</h3>
<p>이름: <%=request.getParameter("name") %></p>
<p>나이: <%=request.getParameter("age") %></p>

<h3>El 태그 정보</h3>

<p>이름: ${param.name}</p>
<p>나이: ${param.age}</p>


<jsp:useBean id = "user1" class="com.javalex.ex.userDTO" scope="page" />
<jsp:setProperty name="user1" property="name" value="${param.name}" />
<jsp:setProperty name="user1" property="age" value="${param.age}" />
<!-- EL -->

<h3>DTO 활용해서 출력</h3>
<p> 이름 : <jsp:getProperty name="user1" property="name" /> <br>
    나이 : <jsp:getProperty name="user1" property="age" />

</p>
</body>


</html>