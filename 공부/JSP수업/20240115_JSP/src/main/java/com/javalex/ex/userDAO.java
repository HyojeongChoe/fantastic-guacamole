package com.javalex.ex;
import java.sql.*;
import javax.sql.DataSource;
import javax.naming.*;

public class userDAO {
	//DB연동할 때 필요한 객체
	private Connection conn = null;
	private Statement st = null;
	private PreparedStatement ps = null;
	private ResultSet rs = null;
	//url,id,pw와 같은 드라이버들을 server에서 만져줘야함
	// 163줄 <끝태그 / 없애주고 사이에 <Resource [이 안에 DB연결] /></Context>
	
	// DAO 생성자에서 드라이버 로드 -> Class.forName()
	// 각 메소드에서 url, id, pw과 conn을 통해서, DB접속
	// => DB 접속에 시간 많이 걸림
	
	//시간 절약을 위해서, DataSource 객체 사용
	private DataSource ds = null;	//빨간줄 뜨면 위쪽에 DataSource import 해주기
	
	//생성자
	public userDAO() {
		//jdbc 드라이버 로드
		try {
			//해당 프로젝트의 컨텍스트 내용을 찾음(Context 안에 Resource가 있기 때문)
			Context ctx = new InitialContext();
			//위 리소스로, DataSource 객체 초기화
			//타입이 맞지 않기 때문에 DataSource타입으로 바꿔줌
			ds = (DataSource)ctx.lookup("java:comp/env/jdbc/mysql");
		}
		catch(Exception e) {
			System.out.println("userDAO 생성자 에러");
			e.printStackTrace();	//실제 에러 표시
		}
	}
	//DB에 있는 값 가져오기
	public void insertUser(String id, String pw, String name, int age, String gender) {
			conn = null;	//충돌이 일어나지 않게 하기위해
			ps = null;
		try {
			//DataSource 객체 통해서 DB접속
			//서버에있는 리소스로 즉시 접속 시도 
			conn = ds.getConnection();
			String query = "INSERT INTO USER VALUES (?,?,?,?,?)";	//DB의 다섯개의 값 넣기 위해
			ps = conn.prepareStatement(query);	//ps객체 초기화 하면서 쿼리 문 넣기
			//insert 구문에서 칼럼 순서를 명시하지 않으면
			//테이블 생성 시 칼럼 선언한 순서대로 삽입해줘야 함
			ps.setString(1, id);
			ps.setString(2, pw);
			ps.setString(3, name);
			ps.setInt(4,age);
			ps.setString(5, gender);
			ps.executeUpdate();
			
			System.out.println("회원가입이 성공적으로 완료되었습니다.");
		}
		catch(Exception e) {
			System.out.println("insertUser 메소드 에러");
			e.printStackTrace();
		}
		finally {
			try {
				conn.close();
				ps.close();
			}
			catch(Exception e) {
				System.out.println("객체 닫기 실패");
				e.printStackTrace();
			}	
		}
	}
}
