<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ page import="java.util.Enumeration"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h3>환영합니다!!!</h3>

	<%! //선언부에 따로 빼놓는 게 좋음
		String key, value;
		Enumeration en;
	%>

	<%
	// Enumeration :: 연결리스트에 가깝 (배열과도 비슷)
	// array[0], array[1], ...
	// en["name"], en["age"], ... 

	// Enumeration 통해서, 세션에 저장되어있는 값들 불러오기
	en = session.getAttributeNames();

	// hasMoreElements()
	// en을 하나하나 탐색 => 다음 요소가 있다면 계속 실행
	// en의 마지막 요소에 도달하면 실행 종료
	int size=0;	//몇번 도는지 알아보기 위해
	while (en.hasMoreElements()) {
		// key, value 값을 각각 구하는 방법

		// key값 구하기 :: en의 다음 요소 키 값을 String으로 변환하여 저장
		key = en.nextElement().toString();
		// value 값 구하기 
		value = session.getAttribute(key).toString();
		// 			 = (String)session.getAttribute(key);

		if (value.equals("admin")) {
			out.println(value + "님!");
		}
		size++;
	} 
	//위에 있는 out.println()과는 완전히 다른 메소드
	System.out.println("서버에 저장된 세션 개수 :: " + size);
	%>
	<a href="logout.jsp" >로그아웃</a>
</body>
</html>