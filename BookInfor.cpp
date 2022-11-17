#include"BookInfor.h"
BookInfor::BookInfor()
{
    this->Book_Id="\0";
    this->Book_Name="\0";
    this->Total_Copies=0;
    this->Borrowed_Book_Library =0;
}
void BookInfor::set_Book_Id(string& Book_Id)
{
    this->Book_Id=Book_Id;
}
void BookInfor::set_Book_Name(string& Book_Name)
{
    this->Book_Name=Book_Name;
}
void BookInfor::set_Total_Copies(int& Total_Copies)
{
    this->Total_Copies=Total_Copies;
}
void BookInfor::set_Borrowed_Book_Library(int& Borrowed_Book_Library)
{
    this->Borrowed_Book_Library = Borrowed_Book_Library;
}

string BookInfor::get_Book_Id()
{
    return Book_Id;
}
string BookInfor::get_Book_Name()
{
    return Book_Name;
}
int BookInfor::get_Total_Copies()
{
    return Total_Copies;
}
int BookInfor::get_Borrowed_Book_Library()
{
    return Borrowed_Book_Library;
}


