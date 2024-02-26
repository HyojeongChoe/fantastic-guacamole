package com.javalex.ex.DAO;

import java.sql.*;
import java.util.ArrayList;

import javax.naming.*;
import javax.sql.DataSource;
import com.javalex.ex.DTO.memberDTO;

public class memberDAO {
	private Connection conn = null;
	private Statement st = null;
	private ResultSet rs = null;
	private PreparedStatement ps = null;

	private DataSource ds = null;

	public memberDAO() {
		try {
			Context ctx = new InitialContext(); // 프로젝트명반환
			ds = (DataSource) ctx.lookup("java:comp/env/jdbc/mysql");
		} catch (Exception e) {
			System.out.println("드라이버 로드 실패");
			e.printStackTrace();
		}
	}

	// 추가 기능
	public void memberInsert(String id, String pw, String name) {
		conn = null;
		ps = null;
		// ds는 초기화하면 DB접속에 문제가 생김
		try {
			conn = ds.getConnection();// DB접속
			String query = "INSERT INTO member VALUES(?,?,?)"; // 물음표가 있기 때문에 ps사용
			ps = conn.prepareStatement(query);
			ps.setString(1, id);
			ps.setString(2, pw);
			ps.setString(3, name);
			ps.executeUpdate();

		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				conn.close();
				ps.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
	}

	// 삭제 기능
	public void memberDelete(String id) {
		conn = null;
		ps = null;
		try {
			conn = ds.getConnection();
			String query = "DELETE FROM MEMBER WHERE id=?";
			ps=conn.prepareStatement(query);
			ps.setString(1, id);
			ps.executeUpdate();
		} catch (Exception e) {
			System.out.println("회원삭제오류");
			e.printStackTrace();
		} finally {
			try {
				conn.close();
				ps.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
	}
	public boolean memberLogin(String id, String pw) {
		conn = null;
		ps = null;
		rs = null;
		
		try {
			conn = ds.getConnection();
			
			String query = "SELECT * FROM member WHERE id = ? AND passwd = ?";
			ps=conn.prepareStatement(query);
			ps.setString(1, id);
			ps.setString(2, pw);
			rs = ps.executeQuery();
			
			if(rs.next()) {
				return true;
			}else {
				return false;
			}
		} catch (Exception e) {
			System.out.println("Login 테스트 실패");
			e.printStackTrace();
			return false;
		} finally {
			try {
				conn.close();
				ps.close();
				rs.close();
			} catch (Exception e2) {
				System.out.println("객체 닫기 실패");
				e2.printStackTrace();
			}
		}
	}
	
	// 전체 조회
	public ArrayList<memberDTO> memberSelect(){
		ArrayList<memberDTO> result = new ArrayList<memberDTO>();	//result라는 배열 생성
		conn=null;
		st=null;
		rs=null;
		try {
			conn = ds.getConnection();
			String query = "SELECT * FROM member";
			st = conn.createStatement();
			rs = st.executeQuery(query);
			
			while(rs.next()) {
				memberDTO element = new memberDTO();
				element.setId(rs.getString("id"));
				element.setPw(rs.getString("passwd"));	//DB의 컬럼 명
				element.setName(rs.getString("name"));
				//element 객체에 데이터 한 묶음씩 저장하기
				result.add(element);
			}
		}catch(Exception e){
			System.out.println("SELECT 쿼리 수행 실패");
			e.printStackTrace();
		}finally {
			try {
				conn.close();
				st.close();
				rs.close();
			}
			catch(Exception e2){
				System.out.println("객체 닫기 실패");
				e2.printStackTrace();
			}
		}
		return result;
	}
}
