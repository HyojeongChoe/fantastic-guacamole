<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>    
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%! String name; %>
<% name= "Choe Hyojeong"; %>
<h3>저의 이름은 <%="최효정"%> 입니다.</h3>

<h3>저의 이름은 ${"최효정"} 입니다.</h3>
저의 영어이름은 ${name} 입니다.	<!-- 이러한 내용은 JSTL로 사용 -->

<p>100+10+1의 결과는 ${100+10+1}입니다.</p>
<!-- 파라미터 처리를 할 때에는, param 객체를 활용 ex) param.id -->
<hr>

<!-- 변수 선언, 초기화 -->
<c:set var = "name" value = "Choe Hyojeong" />
<h3>저의 영어 이름은 ${name}입니다.</h3>
<h3>저의 영어 이름은 <c:out value="${name}"/>입니다.</h3>
<hr>

<!-- 조건문 -->
<c:if test ="${1+2==3}"> <!-- test 안쪽 : 조건적어주는 곳 -->
	"1+2==3"은 참 입니다.
</c:if>		<!-- else if, else의 형식을 표함한 건 문법이 따로 있음 -->
<hr>
<c:choose>
	<c:when test ="${10>100}">10은 100보다 큽니다.</c:when>	<%-- if -- %>
	<c:when test ="${10==100}">10은 100과 같다.</c:when>	<%-- else if --%>
	<c:otherwise>10은 100보다 작습니다.</c:otherwise>		<%-- else --%>
</c:choose>	<!-- JSTL 태그 안쪽에는, html 주석 사용하면 안됨 -->
<hr>	

<!-- 반복문 -->
<c:forEach var="i" begin="1" end="10" step="2">
	${i}
</c:forEach>

<!-- 일반 -->
<%
	try{
		int result = 2/0;
	}catch(Exception e){
		out.println("에러명: " + e.getMessage());
	}
%>
<br>
<!-- JSTL try~catch문 -->
<c:catch var = "myError">	<%--myError는 위의 e 역할 --%>
	2/0 결과값:<%=2/0 %>	<%--try 구문 --%>
</c:catch>
<c:out value="${myError}"/>
</body>
</html>