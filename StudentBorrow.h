#pragma once
#include<string.h>
#include"StudentSignIn_Register.h"
using namespace std;
struct date {
    int day;
    int month;
    int year;
};
class StudentBorrow:public StudentSignIn_Register {
private:
    string Borrow_Student_Id;
    string Borrowed_Book_Id;
    int Number_Borrowed_Book;
    date Borrow_Date;
    date Return_Date;
public:
    StudentBorrow();
    void set_Borrow_Student_Id(string&);
    void set_Borrowed_Book_Id(string&);
    void set_Number_Borrowed_Book(int&);
    void set_Borrow_Date(date BD);
    void set_Return_Date(date RT);

    string get_Borrow_Student_Id();
    string get_Borrowed_Book_Id();
    int get_Number_Borrowed_Book();
    date get_Borrow_Date();
    date get_Return_Date();

};
