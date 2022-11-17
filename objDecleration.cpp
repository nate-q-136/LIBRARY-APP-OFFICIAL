#include "objDeclerationFile.h"

StudentBorrow Data_Of_Gui[100];
string IdStudentBorrow;


void Load_Data_Of_User()
{
	string temp;
	ifstream data_user;
	data_user.open("Stored_Data/User.txt");
	for (int i = 0; i < 100; i++)
	{
		if (data_user.eof())
		{
			break;
		}

		getline(data_user, temp, ',');
		Data_Of_Gui[i].set_Student_Id(temp);
		getline(data_user, temp, ',');
		Data_Of_Gui[i].set_Student_Name(temp);
		getline(data_user, temp, '\n');
		Data_Of_Gui[i].set_Student_Pass(temp);

	}
	data_user.close();
}
void Save_Data_Of_User()
{
	ofstream user;
	user.open("Stored_Data/User.txt", ios::app);
	for (int i = 0; i < 100; i++)
	{
		if (Data_Of_Gui[i].get_Student_Id() != "\0")
		{
			user << Data_Of_Gui[i].get_Student_Id() << ",";
			user << Data_Of_Gui[i].get_Student_Name() << ",";
			user << Data_Of_Gui[i].get_Student_Pass() << "\n";
		}
	}
	user.close();
}
void Load_Data_Of_Library()
{
	string temp;
	int tempConvert;
	ifstream data_lib;
	data_lib.open("Stored_Data/LibInfor.txt");
	for (int i = 0; i < 100; i++)
	{
		if (data_lib.eof())
		{
			break;
		}
		getline(data_lib, temp, ',');
		Data_Of_Gui[i].set_Book_Id(temp);
		getline(data_lib, temp, ',');
		Data_Of_Gui[i].set_Book_Name(temp);
		data_lib >> tempConvert;
		data_lib.ignore(1, ',');
		Data_Of_Gui[i].set_Total_Copies(tempConvert);
		data_lib >> tempConvert;
		data_lib.ignore(1, '\n');
		Data_Of_Gui[i].set_Borrowed_Book_Library(tempConvert);

	}
	data_lib.close();

}
void Save_Data_Of_Library()
{
	ofstream lib;
	lib.open("Stored_Data/LibInfor.txt");
	for (int i = 0; i < 100; i++)
	{
		if (lib.eof())
		{
			break;
		}
		if (Data_Of_Gui[i].get_Book_Id() != "\0")
		{
			lib << Data_Of_Gui[i].get_Book_Id() << ",";
			lib << Data_Of_Gui[i].get_Book_Name() << ",";
			lib << Data_Of_Gui[i].get_Total_Copies() << ",";
			lib << Data_Of_Gui[i].get_Borrowed_Book_Library() << "\n";
		}
	}
	lib.close();
}
string get_Correct_String(string& temp)
{
		int n = temp.size();
		int left = 0, right = n - 1;
		while (left < n && temp[left] == ' ')left++;
		while (right >= 0 && temp[right] == ' ')right--;
		string res = "";
		for (int i = left; i <= right; i++)
		{
			if (temp[i] == ' ') {
				if (res[res.size() - 1] == ' ')continue;
				else res += ' ';
			}
			else {
				res += (char)(temp[i]);
			}
		}
		return res;
}
void Save_Data_Of_Borrowed_Book()
{
	ofstream BorrowedBook1;
	BorrowedBook1.open("Stored_Data/StuBorrow.txt");
	for (int i = 0; i < 100; i++)
	{
		if (BorrowedBook1.eof())
		{
			break;
		}
		if (Data_Of_Gui[i].get_Borrow_Student_Id() != "\0")
		{
			BorrowedBook1 << Data_Of_Gui[i].get_Borrow_Student_Id() << ",";
			BorrowedBook1 << Data_Of_Gui[i].get_Borrowed_Book_Id() << ",";
			BorrowedBook1 << Data_Of_Gui[i].get_Number_Borrowed_Book() << ",";
			BorrowedBook1 << Data_Of_Gui[i].get_Borrow_Date().day << "/";
			BorrowedBook1 << Data_Of_Gui[i].get_Borrow_Date().month<< "/";
			BorrowedBook1 << Data_Of_Gui[i].get_Borrow_Date().year << ",";
			BorrowedBook1 << Data_Of_Gui[i].get_Return_Date().day << "/";
			BorrowedBook1 << Data_Of_Gui[i].get_Return_Date().month << "/";
			BorrowedBook1 << Data_Of_Gui[i].get_Return_Date().year << "\n";
		}
	}
	BorrowedBook1.close();
}
void Load_Data_Of_Borrowed_Book()
{
	ifstream BorrowedBook;
	string temp;
	date tempDate;
	int tempNumber;
	BorrowedBook.open("Stored_Data/StuBorrow.txt");
	for (int i = 0; i < 100; i++)
	{
		if (BorrowedBook.eof())
			break;
		getline(BorrowedBook, temp, ',');
		Data_Of_Gui[i].set_Borrow_Student_Id(temp);
		getline(BorrowedBook, temp, ',');
		Data_Of_Gui[i].set_Borrowed_Book_Id(temp);
		BorrowedBook >> tempNumber;
		Data_Of_Gui[i].set_Number_Borrowed_Book(tempNumber);
		BorrowedBook.ignore(1, ',');
		BorrowedBook >> tempDate.day;
		BorrowedBook.ignore(1, '/');
		BorrowedBook >> tempDate.month;
		BorrowedBook.ignore(1, '/');
		BorrowedBook >> tempDate.year;
		Data_Of_Gui[i].set_Borrow_Date(tempDate);
		BorrowedBook.ignore(1, ',');
		BorrowedBook >> tempDate.day;
		BorrowedBook.ignore(1, '/');
		BorrowedBook >> tempDate.month;
		BorrowedBook.ignore(1, '/');
		BorrowedBook >> tempDate.year;
		Data_Of_Gui[i].set_Return_Date(tempDate);
		BorrowedBook.ignore(1, '\n');
	}
	BorrowedBook.close();
}