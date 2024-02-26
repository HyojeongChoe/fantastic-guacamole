package com.javalex.ex;

import java.sql.*;

public class employeeDAO {
	// DB 접속에 필요한 정보
	private String url = "jdbc:mysql://localhost:3306/apidb";
	private String id = "root";
	private String pw = "1234";

	// DB연동에 필요한 4가지 불러오기
	private Connection conn = null;
	private Statement st = null;
	private ResultSet rs = null;
	private PreparedStatement ps = null;	//동적SQL문 작성에 필요한 객체
	//html에 입력값1이 있고,
	//"SELECT * FROM employee WHERE id = 입력값1"	쓰고싶을 때 preparedstatement 불러와야함
	
	//생성자 :: JDBC 드라이버 로드
	public employeeDAO() {
		try {
			Class.forName("com.mysql.jdbc.Driver");
		}
		catch(Exception e) {
			System.out.println("JDBC 드라이버 로드 실패");
		}
	}
	
	// employee DB:: 아이디, 비밀번호, 이름
	// 예상할 수 있는 필요한 기능 :: DB에 저장된 id, pw 중 입력으로 받은 아이디, 비밀번호가 있는지
	public Boolean checkAccount(String inputid, String inputpw) {
		// DB 내용은 DAO 자체에서 접근 가능
		// html 에서 입력받은값은 , 매개변수로 받아올 필요가 있음
		
		try {
			// 1. DB접속 (Connection)
			conn = DriverManager.getConnection(url, id, pw);
			// 2. SQL문 실행
			
			// "DB에 있는 id-passwd 쌍 중에서 
			
			// "inputid-inputpw 와 같은 데이터 조회
			String query = "SELECT * FROM employee WHERE id = ? && passwd = ?"; 
			
			ps = conn.prepareStatement(query);	//ps 객체 초기화(사용할 쿼리문 미리 적용)
			ps.setString(1,inputid);	// 첫번째 ?에 inputid 값을 삽입
			ps.setString(2, inputpw);
			
			//SQL문 실행 결과 담기
			rs = ps.executeQuery();
			
			//로그인에 성공했다면, rs에 값이 있을 것		rs.next()로 값 조회 가능
			//로그인에 실패했다면, rs에 값이 없을 것		rs.next()로 값 조회 X (적절한 값이 없음)
			if(rs.next()) {	//rs에 값이 있다면,
				return true;
			}else {
				return false;	//실행은 되었지만 DB에 회원정보가 없을 때
			}
		}catch(Exception e){
			System.out.println("checkAccount 메소드 에러");
			//try문 안에서 리턴
			return false;	//실행하다가 에러가 걸렸을 때
		}
	}
	//로그인을 시도하는 계정의 사용자 이름을 반환
	public String getName(String inputid, String inputpw) {
		try {
			// 1. DB접속 (Connection)
			conn = DriverManager.getConnection(url, id, pw);
			
			//DB에 있는 데이터 중
			//html 파일에서 입력한 id와 pw가 같은 데이터의 이름을 빼오기
			String query = "SELECT * FROM employee WHERE id=? && passwd = ?";
			ps = conn.prepareStatement(query);
			ps.setString(1,inputid);
			ps.setString(2, inputpw);
			rs = ps.executeQuery();
			
			//반환할 값을 저장할 변수 name 선언 (임의의 값으로 초기화)
			String name ="";
			if(rs.next()) { //rs에 데이터가 있다면,	 
				name = rs.getString("name"); 		//해당 데이터의 이름값 가져오기
			}
			return name;
		}
		catch(Exception e) {
			System.out.println("getName 메소드 에러");
			return "Error";
		}
	}
}
