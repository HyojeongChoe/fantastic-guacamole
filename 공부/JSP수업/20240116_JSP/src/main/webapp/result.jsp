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

<!-- 처음 숫자, 끝 숫자 파라미터 처리 -->
<c:set var = "n1" value = "${param.firstn}" />
<c:set var = "n2" value = "${param.secondn}" />
<c:set var = "count" value = "0"/>

<c:forEach var="i" begin="${n1}" end="${n2}">
	<c:if test ="${i%3==0}">
	<c:out value = "${i}" />
	<c:set var = "count" value="${count+1}"/>
	</c:if>
</c:forEach>
<br>
3의 배수의 개수는 <c:out value = "${count}" />
</body>
</html>