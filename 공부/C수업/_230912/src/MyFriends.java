import com.kb.CompFriend;
import com.kb.UnivFriend;

public class MyFriends {
    public static void main(String[] args) {
        //대학친구 배열 객체 생성
        UnivFriend[] ufrns = new UnivFriend[5];
        int ucnt = 0;

        //회사친구 배열 객체 생성
        CompFriend[] cfrns = new CompFriend[5];
        int ccnt = 0;

        ufrns[ucnt++] = new UnivFriend("lee", "computer", "01012345678");
        ufrns[ucnt++] = new UnivFriend("Seo", "electronics", "01056781234");

        cfrns[ccnt++] = new CompFriend("yoon", "r&d 1", "01045678910");
        cfrns[ccnt++] = new CompFriend("ha", "r&d 2", "01091014567");

        for (int i = 0; i < ucnt; i++) {
            ufrns[i].showInfo();
        }

        for (int i = 0; i < ccnt; i++) {
            cfrns[i].showInfo();
        }
    }
}