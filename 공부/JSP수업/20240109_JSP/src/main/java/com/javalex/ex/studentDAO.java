package com.javalex.ex;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement; //sql문 작성할때 필요한것들 따로 import 하거나 * 해도 됨.
import java.util.ArrayList;

public class studentDAO {

	// DB서버 url, 아이디, 비밀번호 선언
	private String url = "jdbc:mysql://localhost:3306/apidb";
	private String id = "root";
	private String password = "1234";

	// DB랑 연결하기위해 필요한 객체 선언
	private Connection conn = null;
	private Statement st = null;
	private ResultSet rs = null;

	// 기본생성자
	public studentDAO() {
		try {
			// jdbc 드라이버 로드(lib 폴더 안의 jar 파일 불러옴)
			Class.forName("com.mysql.jdbc.Driver"); // 단독사용 불가능
		} catch (Exception e) {
			System.out.println("드라이버 로드 실패");
		}
	}

	public ArrayList<String> showAllStudent() {
		// 메소드 반환값으로 할 연결리스트 선언
		ArrayList<String> result = new ArrayList<String>();

		// DB랑 접속
		try {
			conn = DriverManager.getConnection(url, id, password);
			st = conn.createStatement(); // Statement 객체 생성
			String query = "SELECT * FROM STUDENT"; // 쿼리문 작성
			rs = st.executeQuery(query);// 쿼리문실행

			while (rs.next()) {	//next():: boolean 타입, 다음행이 있으면 true, 없으면 false 반환
				String studentInfo = rs.getInt("hakbun")+", "+ rs.getString("name")+","
						+ " "
				+ rs.getInt("age")+", "
				+ rs.getInt("grade")+", "+ rs.getString("major");
				
				//생성된 문자열을 ArrayList에 추가
				result.add(studentInfo);
			}
		} catch (Exception e) {
			System.out.println("DB접속 실패");
		} finally {

		}
		// DB정보들을 result에 하나씩 담아놓기
		return result;
	}
}
