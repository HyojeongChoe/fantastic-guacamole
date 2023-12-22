import com.kb.*;

//친구 추가될 때마다 클래스만 추가하면 됨
public class MyFriends {
    public static void main(String[] args) {
        //친구 배열 객체 생성
        Friend[] friends = new Friend[10];
        //int cnt 선언하고 0 저장
        int cnt = 0;

        //ufrns[ucnt]애 대학친구 객체 생성 후 데이터 저장
        friends[cnt] = new UnivFriend("lee", "computer", "01012345678");
        //ucnt 1 증가
        cnt++;
        friends[cnt] = new UnivFriend("Seo", "electronics", "01056781234");
        cnt++;
        friends[cnt] = new CompFriend("yoon", "r&d 1", "01045678910");
        cnt++;
        friends[cnt] = new CompFriend("ha", "r&d 2", "01091014567");
        cnt++;
        for (int i = 0; i < cnt; i++) {
            friends[i].showInfo();
        }
    }
}