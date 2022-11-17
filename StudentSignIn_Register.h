#pragma once
#include"BookInfor.h"

class StudentSignIn_Register:public BookInfor{
private:
    string Student_Id;
    string Student_Name;
    string Student_Pass;
    
    
 public:
    StudentSignIn_Register();

    void set_Student_Id(string&);
    void set_Student_Name(string&);
    void set_Student_Pass(string&);
  
   

    string get_Student_Id();
    string get_Student_Name();
    string get_Student_Pass();
    
    






};
