<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>

<!-- com.javalex.ex 패키지 안에있는 user 파일을 포함한다 -->
<%@ page import="com.javalex.ex.user"%>

<!DOCTYPE html>

<!-- 액션 태그 :: jsp 태그 중 일부 -->

<!-- jsp:useBean:: 객체 생성 -->
<!-- com.javalex.ex.user 클래스의 인스턴스를 생성하고 uwer1이라는 아이디로 현재 페이지의 스코프에 저장 -->
<jsp:useBean id="user1" class="com.javalex.ex.user" scope="page" />


<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<!-- setProperty, getProperty -->
	<%!String id, pw, name, nickname;%>
	<%
	//input_user html에서 입력한 값들을 변수에 저장함
	id = request.getParameter("id");
	pw = request.getParameter("pw");
	name = request.getParameter("name");
	nickname = request.getParameter("nick");
	%>

	<!--setProperty(user1 객체의 속성을 설정), getProperty(해당 속성 값을 출력) -->
	<jsp:setProperty name="user1" property="id" value="<%=id%>" />
	<jsp:setProperty name="user1" property="password" value="<%=pw%>" />
	<jsp:setProperty name="user1" property="name" value="<%=name%>" />
	<jsp:setProperty name="user1" property="nickname"
		value="<%=nickname%>" />

	<h3>계정 생성이 완료되었습니다.</h3>
	아이디 ::
	<jsp:getProperty name="user1" property="name" />
	비밀번호 ::
	<jsp:getProperty name="user1" property="password" />
	닉네임 ::
	<jsp:getProperty name="user1" property="name" />
	이름 ::
	<jsp:getProperty name="user1" property="nickname" />

	<form method="get" action="input_user.html">
		<input type="submit" value="돌아가기" />
	</form>
</body>
</html>