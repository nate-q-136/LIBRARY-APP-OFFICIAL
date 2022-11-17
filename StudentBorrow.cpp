#include"StudentBorrow.h"
StudentBorrow::StudentBorrow()
{
	this->Borrow_Student_Id = "\0";
	this->Borrowed_Book_Id = "\0";
	this->Number_Borrowed_Book = 0;
	this->Borrow_Date.day = 0;
	this->Borrow_Date.month = 0;
	this->Borrow_Date.year = 0;
	this->Return_Date.day = 0;
	this->Return_Date.month = 0;
	this->Return_Date.year = 0;
}
void StudentBorrow::set_Borrow_Student_Id(string& Borrow_Student_Id)
{
	this->Borrow_Student_Id = Borrow_Student_Id;
}
void StudentBorrow::set_Borrowed_Book_Id(string& Borrowed_Book_Id)
{
	this->Borrowed_Book_Id = Borrowed_Book_Id;
}
void StudentBorrow::set_Number_Borrowed_Book(int& Number_Borrowed_Book)
{
	this->Number_Borrowed_Book = Number_Borrowed_Book;
}
void StudentBorrow::set_Borrow_Date(date BD)
{
	this->Borrow_Date.day = BD.day;
	this->Borrow_Date.month = BD.month;
	this->Borrow_Date.year = BD.year;
}
void StudentBorrow::set_Return_Date(date RT)
{
	this->Return_Date.day = RT.day;
	this->Return_Date.month = RT.month;
	this->Return_Date.year = RT.year;
}

string StudentBorrow::get_Borrow_Student_Id()
{
	return this->Borrow_Student_Id;
}
string StudentBorrow::get_Borrowed_Book_Id()
{
	return this->Borrowed_Book_Id;
}
int StudentBorrow::get_Number_Borrowed_Book()
{
	return this->Number_Borrowed_Book;
}
date StudentBorrow::get_Borrow_Date()
{
	return this->Borrow_Date;
}
date StudentBorrow::get_Return_Date()
{
	return this->Return_Date;
}