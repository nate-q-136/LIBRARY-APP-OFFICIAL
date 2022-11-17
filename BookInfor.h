#pragma once
#include<string>
using namespace std;
class BookInfor{
private:
    string Book_Id;
    string Book_Name;
    int Total_Copies;
    int Borrowed_Book_Library;
    public:
    BookInfor();
    void set_Book_Id(string&);
    void set_Book_Name(string&);
    void set_Total_Copies(int&);
    void set_Borrowed_Book_Library(int&);
    
    string get_Book_Id();
    string get_Book_Name();
    int get_Total_Copies();
    int get_Borrowed_Book_Library();

};
// to-do 28/10
// tạo file text mà đưa 1 số giá trị vào
// làm các hàm savedata,loaddata tại MainForm
// Làm các hàm update,add,search,delete sau khi nhấn enter tại mỗi option
// Làm Grid view cho Sách gồm: ID    Name Book   Total    Borrowing
// Làm một số hàm cần thiết cho xử chuỗi, và số
//