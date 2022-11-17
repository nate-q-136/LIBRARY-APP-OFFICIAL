#include "StudentSignIn_Register.h"
StudentSignIn_Register::StudentSignIn_Register()
{
    this->Student_Id = "\0";
    this->Student_Name = "\0";
    this->Student_Pass = "\0";
}
void StudentSignIn_Register::set_Student_Id(string &Student_Id)
{
    this->Student_Id = Student_Id;
}
void StudentSignIn_Register::set_Student_Name(string &Student_Name)
{
    this->Student_Name = Student_Name;
}
void StudentSignIn_Register::set_Student_Pass(string& Student_Pass)
{
    this->Student_Pass = Student_Pass;
}





string StudentSignIn_Register::get_Student_Id()
{
    return this->Student_Id;
}
string StudentSignIn_Register::get_Student_Name()
{
    return this->Student_Name;
}
string StudentSignIn_Register::get_Student_Pass()
{
    return this->Student_Pass;
}

