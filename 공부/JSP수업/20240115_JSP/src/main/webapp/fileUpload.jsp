<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.util.*" %>    
<%@ page import = "com.oreilly.servlet.MultipartRequest" %>
<%@ page import = "com.oreilly.servlet.multipart.DefaultFileRenamePolicy" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<% //톰캣 서버의 해당 프로젝트 파일 안에서 myupload 폴더 찾는 경로 
		//폴더 생성해놔야 함
		//http://www.servlets.com/cos/ 다운로드하고 cos.jar 파일 lib 안에 넣어줘야함
		//
		String path = application.getRealPath("myupload");
	   System.out.println(path);
	   int size = 1024*1024*10;	//사이즈 : 10MB
	   String fileName="";
	   String originalFileName = "";
	   
	   try{
		  
			   
		   MultipartRequest multi =  //파일 업로드를 위한 MultipartRequest 객체 생성 :: 
				 						//(업로드할 파일, 업로드할 경로, 최대 사이즈, 이놐딩 방식, 파일이름 충돌 방지정책)
				   new MultipartRequest(request, path, size, "UTF-8", new DefaultFileRenamePolicy()); 
		   //사용자가 입력한 파일 받기
		   Enumeration files = multi.getFileNames();
		   String name = files.nextElement().toString(); // 1개의 파일이름 저장
		   
		   // 파일 이츰 충돌이 발생할 시를 대비하여, 2개의 메소드를 모두 사용 
		   fileName = multi.getFilesystemName(name);	//파일명 중복이 발생했을 때 정책에 의해 뒤에 1,2,3 처럼 숫자가 붙어 고유 파일명을 생성
		   originalFileName = multi.getOriginalFileName(name);
		   //콘솔 상 출력
		   System.out.println(fileName);
		   System.out.println(originalFileName);
		   //브라우저상 출력
		   
		   out.println("업로드 성공");
	   }
	   catch(Exception e){
		   System.out.println("파일 업로드 에러");
		   e.printStackTrace();	//실질적인 에러 이름 출력
	   }
	%>
</body>
</html>