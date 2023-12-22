using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BookManager
{
    public class Book
    {
        public string isbn { get; set; }        //바코드
        public string name { get; set; }        //책이름
        public string publisher { get; set; }   //출판사
        public int page { get; set; }           //페이지
        public string userId { get; set; }      //일종의 FK
        public string userName { get; set; }
        public bool isBorrowed { get; set; }
        public DateTime BorrowedAt{get;set;}

    }
}
