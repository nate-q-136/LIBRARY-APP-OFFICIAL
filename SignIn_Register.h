#pragma once
#include<msclr\marshal_cppstd.h>
#include<stdlib.h>
#include"UserOption.h"
#include"objDeclerationFile.h"
#include<fstream>
//#include"objDeclerationFile.h"

namespace PBL2APP {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignIn_Register
	/// </summary>
	public ref class SignIn_Register : public System::Windows::Forms::Form
	{
		bool flag = true;

		
		/*void Load_Data_Of_User()
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
		}*/
		/*void Save_Data_Of_Library()
		{
			ofstream lib;
			lib.open("Stored_Data/LibInfor.txt");
			for (int i = 0; i < 100; i++)
			{
				if (Data_Of_Gui[i].get_Book_Id() != "\0")
				{
					lib << Data_Of_Gui[i].get_Book_Id() << ",";
					lib << Data_Of_Gui[i].get_Book_Name() << ",";
					lib << Data_Of_Gui[i].get_Total_Copies() << ",";
					lib << Data_Of_Gui[i].get_Borrowed_Book_Library() << "\n";
				}
			}
			lib.close();
		}*/
		/*void Save_Data_Of_User()
		{
			ofstream user;
			user.open("Stored_Data/User.txt",ios::app);
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
		}*/
	public:
		Form^ obj4;// used for showing mainpage
		SignIn_Register(Form^obj)
		{
			obj4 = obj;
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}
		SignIn_Register(void)
		{
			InitializeComponent();
			//if (flag)
			//{
				//Load_Data_Of_Library();
				//Load_Data_Of_User();
				//flag = false;
			//}
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignIn_Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox_User;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button_UserSignIn;
	private: System::Windows::Forms::Button^ button_Register;
	private: System::Windows::Forms::Button^ button_BackUser;
	public: System::Windows::Forms::Panel^ panel_UserSignIn;
	private:

	private: System::Windows::Forms::Label^ label_UserSignIn;




	private: System::Windows::Forms::Label^ label_IDUserSignIn;


	private: System::Windows::Forms::Button^ button_EnterUserSignIn;

	private: System::Windows::Forms::Button^ button_BackOfUserSignIn;




	private: System::Windows::Forms::TextBox^ textBox_SignInID;


	private: System::Windows::Forms::Panel^ panel_UserRegister;
	private: System::Windows::Forms::Button^ button_RegisterRegister;


	private: System::Windows::Forms::Button^ button_BackRegister;
	private: System::Windows::Forms::TextBox^ textBox_Name;


	private: System::Windows::Forms::TextBox^ textBox_ID;

	private: System::Windows::Forms::Label^ label_NameRegister;

	private: System::Windows::Forms::Label^ label_IDRegister;
	private: System::Windows::Forms::Label^ label_RegistrationRegister;
	private: System::Windows::Forms::TextBox^ textBox_Pass;
	private: System::Windows::Forms::Label^ label_Pass;
	private: System::Windows::Forms::TextBox^ textBox_SignInPass;
	private: System::Windows::Forms::Label^ label_SignInPass;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignIn_Register::typeid));
			this->pictureBox_User = (gcnew System::Windows::Forms::PictureBox());
			this->button_UserSignIn = (gcnew System::Windows::Forms::Button());
			this->button_Register = (gcnew System::Windows::Forms::Button());
			this->button_BackUser = (gcnew System::Windows::Forms::Button());
			this->panel_UserSignIn = (gcnew System::Windows::Forms::Panel());
			this->textBox_SignInPass = (gcnew System::Windows::Forms::TextBox());
			this->label_SignInPass = (gcnew System::Windows::Forms::Label());
			this->button_EnterUserSignIn = (gcnew System::Windows::Forms::Button());
			this->button_BackOfUserSignIn = (gcnew System::Windows::Forms::Button());
			this->textBox_SignInID = (gcnew System::Windows::Forms::TextBox());
			this->label_IDUserSignIn = (gcnew System::Windows::Forms::Label());
			this->label_UserSignIn = (gcnew System::Windows::Forms::Label());
			this->panel_UserRegister = (gcnew System::Windows::Forms::Panel());
			this->textBox_Pass = (gcnew System::Windows::Forms::TextBox());
			this->label_Pass = (gcnew System::Windows::Forms::Label());
			this->button_RegisterRegister = (gcnew System::Windows::Forms::Button());
			this->button_BackRegister = (gcnew System::Windows::Forms::Button());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->label_NameRegister = (gcnew System::Windows::Forms::Label());
			this->label_IDRegister = (gcnew System::Windows::Forms::Label());
			this->label_RegistrationRegister = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_User))->BeginInit();
			this->panel_UserSignIn->SuspendLayout();
			this->panel_UserRegister->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox_User
			// 
			this->pictureBox_User->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_User.Image")));
			this->pictureBox_User->Location = System::Drawing::Point(-2, 4);
			this->pictureBox_User->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox_User->Name = L"pictureBox_User";
			this->pictureBox_User->Size = System::Drawing::Size(1450, 856);
			this->pictureBox_User->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_User->TabIndex = 0;
			this->pictureBox_User->TabStop = false;
			// 
			// button_UserSignIn
			// 
			this->button_UserSignIn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_UserSignIn->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_UserSignIn->Location = System::Drawing::Point(88, 156);
			this->button_UserSignIn->Margin = System::Windows::Forms::Padding(4);
			this->button_UserSignIn->Name = L"button_UserSignIn";
			this->button_UserSignIn->Size = System::Drawing::Size(314, 104);
			this->button_UserSignIn->TabIndex = 1;
			this->button_UserSignIn->Text = L"Sign In";
			this->button_UserSignIn->UseVisualStyleBackColor = false;
			this->button_UserSignIn->Click += gcnew System::EventHandler(this, &SignIn_Register::button_UserSignIn_Click);
			// 
			// button_Register
			// 
			this->button_Register->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_Register->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Register->Location = System::Drawing::Point(88, 302);
			this->button_Register->Margin = System::Windows::Forms::Padding(4);
			this->button_Register->Name = L"button_Register";
			this->button_Register->Size = System::Drawing::Size(314, 104);
			this->button_Register->TabIndex = 2;
			this->button_Register->Text = L"Register";
			this->button_Register->UseVisualStyleBackColor = false;
			this->button_Register->Click += gcnew System::EventHandler(this, &SignIn_Register::button_Register_Click);
			// 
			// button_BackUser
			// 
			this->button_BackUser->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button_BackUser->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackUser->Location = System::Drawing::Point(68, 667);
			this->button_BackUser->Margin = System::Windows::Forms::Padding(4);
			this->button_BackUser->Name = L"button_BackUser";
			this->button_BackUser->Size = System::Drawing::Size(312, 106);
			this->button_BackUser->TabIndex = 3;
			this->button_BackUser->Text = L"Back";
			this->button_BackUser->UseVisualStyleBackColor = false;
			this->button_BackUser->Click += gcnew System::EventHandler(this, &SignIn_Register::button_BackUser_Click);
			// 
			// panel_UserSignIn
			// 
			this->panel_UserSignIn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel_UserSignIn->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_UserSignIn->Controls->Add(this->textBox_SignInPass);
			this->panel_UserSignIn->Controls->Add(this->label_SignInPass);
			this->panel_UserSignIn->Controls->Add(this->button_EnterUserSignIn);
			this->panel_UserSignIn->Controls->Add(this->button_BackOfUserSignIn);
			this->panel_UserSignIn->Controls->Add(this->textBox_SignInID);
			this->panel_UserSignIn->Controls->Add(this->label_IDUserSignIn);
			this->panel_UserSignIn->Controls->Add(this->label_UserSignIn);
			this->panel_UserSignIn->Location = System::Drawing::Point(628, 96);
			this->panel_UserSignIn->Margin = System::Windows::Forms::Padding(4);
			this->panel_UserSignIn->Name = L"panel_UserSignIn";
			this->panel_UserSignIn->Size = System::Drawing::Size(714, 523);
			this->panel_UserSignIn->TabIndex = 4;
			// 
			// textBox_SignInPass
			// 
			this->textBox_SignInPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_SignInPass->Location = System::Drawing::Point(264, 294);
			this->textBox_SignInPass->Margin = System::Windows::Forms::Padding(4);
			this->textBox_SignInPass->Name = L"textBox_SignInPass";
			this->textBox_SignInPass->Size = System::Drawing::Size(396, 38);
			this->textBox_SignInPass->TabIndex = 10;
			this->textBox_SignInPass->UseSystemPasswordChar = true;
			// 
			// label_SignInPass
			// 
			this->label_SignInPass->AutoSize = true;
			this->label_SignInPass->BackColor = System::Drawing::Color::Yellow;
			this->label_SignInPass->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_SignInPass->Location = System::Drawing::Point(118, 294);
			this->label_SignInPass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_SignInPass->Name = L"label_SignInPass";
			this->label_SignInPass->Size = System::Drawing::Size(106, 43);
			this->label_SignInPass->TabIndex = 9;
			this->label_SignInPass->Text = L"Pass";
			this->label_SignInPass->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_SignInPass->Click += gcnew System::EventHandler(this, &SignIn_Register::label_SignInPass_Click);
			// 
			// button_EnterUserSignIn
			// 
			this->button_EnterUserSignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_EnterUserSignIn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_EnterUserSignIn->Location = System::Drawing::Point(444, 446);
			this->button_EnterUserSignIn->Margin = System::Windows::Forms::Padding(4);
			this->button_EnterUserSignIn->Name = L"button_EnterUserSignIn";
			this->button_EnterUserSignIn->Size = System::Drawing::Size(216, 50);
			this->button_EnterUserSignIn->TabIndex = 8;
			this->button_EnterUserSignIn->Text = L"Enter";
			this->button_EnterUserSignIn->UseVisualStyleBackColor = false;
			this->button_EnterUserSignIn->Click += gcnew System::EventHandler(this, &SignIn_Register::button_EnterUserSignIn_Click);
			// 
			// button_BackOfUserSignIn
			// 
			this->button_BackOfUserSignIn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackOfUserSignIn->Location = System::Drawing::Point(48, 446);
			this->button_BackOfUserSignIn->Margin = System::Windows::Forms::Padding(4);
			this->button_BackOfUserSignIn->Name = L"button_BackOfUserSignIn";
			this->button_BackOfUserSignIn->Size = System::Drawing::Size(216, 50);
			this->button_BackOfUserSignIn->TabIndex = 7;
			this->button_BackOfUserSignIn->Text = L"Back";
			this->button_BackOfUserSignIn->UseVisualStyleBackColor = true;
			this->button_BackOfUserSignIn->Click += gcnew System::EventHandler(this, &SignIn_Register::button_BackOfUserSignIn_Click);
			// 
			// textBox_SignInID
			// 
			this->textBox_SignInID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_SignInID->Location = System::Drawing::Point(264, 188);
			this->textBox_SignInID->Margin = System::Windows::Forms::Padding(4);
			this->textBox_SignInID->Name = L"textBox_SignInID";
			this->textBox_SignInID->Size = System::Drawing::Size(396, 38);
			this->textBox_SignInID->TabIndex = 4;
			// 
			// label_IDUserSignIn
			// 
			this->label_IDUserSignIn->AutoSize = true;
			this->label_IDUserSignIn->BackColor = System::Drawing::Color::Yellow;
			this->label_IDUserSignIn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_IDUserSignIn->Location = System::Drawing::Point(146, 183);
			this->label_IDUserSignIn->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_IDUserSignIn->Name = L"label_IDUserSignIn";
			this->label_IDUserSignIn->Size = System::Drawing::Size(58, 43);
			this->label_IDUserSignIn->TabIndex = 1;
			this->label_IDUserSignIn->Text = L"ID";
			this->label_IDUserSignIn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_UserSignIn
			// 
			this->label_UserSignIn->AutoSize = true;
			this->label_UserSignIn->BackColor = System::Drawing::Color::Red;
			this->label_UserSignIn->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_UserSignIn->Location = System::Drawing::Point(294, 81);
			this->label_UserSignIn->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_UserSignIn->Name = L"label_UserSignIn";
			this->label_UserSignIn->Size = System::Drawing::Size(149, 42);
			this->label_UserSignIn->TabIndex = 0;
			this->label_UserSignIn->Text = L"Sign In";
			this->label_UserSignIn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_UserRegister
			// 
			this->panel_UserRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel_UserRegister->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_UserRegister->Controls->Add(this->textBox_Pass);
			this->panel_UserRegister->Controls->Add(this->label_Pass);
			this->panel_UserRegister->Controls->Add(this->button_RegisterRegister);
			this->panel_UserRegister->Controls->Add(this->button_BackRegister);
			this->panel_UserRegister->Controls->Add(this->textBox_Name);
			this->panel_UserRegister->Controls->Add(this->textBox_ID);
			this->panel_UserRegister->Controls->Add(this->label_NameRegister);
			this->panel_UserRegister->Controls->Add(this->label_IDRegister);
			this->panel_UserRegister->Controls->Add(this->label_RegistrationRegister);
			this->panel_UserRegister->Location = System::Drawing::Point(616, 281);
			this->panel_UserRegister->Margin = System::Windows::Forms::Padding(4);
			this->panel_UserRegister->Name = L"panel_UserRegister";
			this->panel_UserRegister->Size = System::Drawing::Size(764, 512);
			this->panel_UserRegister->TabIndex = 5;
			// 
			// textBox_Pass
			// 
			this->textBox_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Pass->Location = System::Drawing::Point(264, 317);
			this->textBox_Pass->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Pass->Name = L"textBox_Pass";
			this->textBox_Pass->Size = System::Drawing::Size(408, 38);
			this->textBox_Pass->TabIndex = 8;
			// 
			// label_Pass
			// 
			this->label_Pass->AutoSize = true;
			this->label_Pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_Pass->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Pass->Location = System::Drawing::Point(92, 317);
			this->label_Pass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_Pass->Name = L"label_Pass";
			this->label_Pass->Size = System::Drawing::Size(106, 43);
			this->label_Pass->TabIndex = 7;
			this->label_Pass->Text = L"Pass";
			this->label_Pass->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_RegisterRegister
			// 
			this->button_RegisterRegister->BackColor = System::Drawing::Color::YellowGreen;
			this->button_RegisterRegister->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_RegisterRegister->Location = System::Drawing::Point(418, 388);
			this->button_RegisterRegister->Margin = System::Windows::Forms::Padding(4);
			this->button_RegisterRegister->Name = L"button_RegisterRegister";
			this->button_RegisterRegister->Size = System::Drawing::Size(240, 67);
			this->button_RegisterRegister->TabIndex = 6;
			this->button_RegisterRegister->Text = L"Register";
			this->button_RegisterRegister->UseVisualStyleBackColor = false;
			this->button_RegisterRegister->Click += gcnew System::EventHandler(this, &SignIn_Register::button_RegisterRegister_Click);
			// 
			// button_BackRegister
			// 
			this->button_BackRegister->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackRegister->Location = System::Drawing::Point(74, 396);
			this->button_BackRegister->Margin = System::Windows::Forms::Padding(4);
			this->button_BackRegister->Name = L"button_BackRegister";
			this->button_BackRegister->Size = System::Drawing::Size(240, 67);
			this->button_BackRegister->TabIndex = 5;
			this->button_BackRegister->Text = L"Back";
			this->button_BackRegister->UseVisualStyleBackColor = true;
			this->button_BackRegister->Click += gcnew System::EventHandler(this, &SignIn_Register::button_BackRegister_Click);
			// 
			// textBox_Name
			// 
			this->textBox_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Name->Location = System::Drawing::Point(264, 235);
			this->textBox_Name->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(408, 38);
			this->textBox_Name->TabIndex = 4;
			// 
			// textBox_ID
			// 
			this->textBox_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_ID->Location = System::Drawing::Point(264, 156);
			this->textBox_ID->Margin = System::Windows::Forms::Padding(4);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(408, 38);
			this->textBox_ID->TabIndex = 3;
			// 
			// label_NameRegister
			// 
			this->label_NameRegister->AutoSize = true;
			this->label_NameRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_NameRegister->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NameRegister->Location = System::Drawing::Point(92, 235);
			this->label_NameRegister->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_NameRegister->Name = L"label_NameRegister";
			this->label_NameRegister->Size = System::Drawing::Size(124, 43);
			this->label_NameRegister->TabIndex = 2;
			this->label_NameRegister->Text = L"Name";
			this->label_NameRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_IDRegister
			// 
			this->label_IDRegister->AutoSize = true;
			this->label_IDRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_IDRegister->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_IDRegister->Location = System::Drawing::Point(144, 156);
			this->label_IDRegister->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_IDRegister->Name = L"label_IDRegister";
			this->label_IDRegister->Size = System::Drawing::Size(58, 43);
			this->label_IDRegister->TabIndex = 1;
			this->label_IDRegister->Text = L"ID";
			this->label_IDRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_RegistrationRegister
			// 
			this->label_RegistrationRegister->AutoSize = true;
			this->label_RegistrationRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_RegistrationRegister->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_RegistrationRegister->Location = System::Drawing::Point(252, 44);
			this->label_RegistrationRegister->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_RegistrationRegister->Name = L"label_RegistrationRegister";
			this->label_RegistrationRegister->Size = System::Drawing::Size(252, 42);
			this->label_RegistrationRegister->TabIndex = 0;
			this->label_RegistrationRegister->Text = L"Registration";
			this->label_RegistrationRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SignIn_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1436, 850);
			this->Controls->Add(this->button_BackUser);
			this->Controls->Add(this->button_Register);
			this->Controls->Add(this->button_UserSignIn);
			this->Controls->Add(this->pictureBox_User);
			this->Controls->Add(this->panel_UserRegister);
			this->Controls->Add(this->panel_UserSignIn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SignIn_Register";
			this->Text = L"SignIn_Register";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_User))->EndInit();
			this->panel_UserSignIn->ResumeLayout(false);
			this->panel_UserSignIn->PerformLayout();
			this->panel_UserRegister->ResumeLayout(false);
			this->panel_UserRegister->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button_BackOfUserSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_UserSignIn->Hide();
	pictureBox_User->Show();

}
private: System::Void button_UserSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	//pictureBox_User->Hide();
	Load_Data_Of_User();
	panel_UserRegister->Hide();
	panel_UserSignIn->Show();
	textBox_SignInID->Text = "";
	textBox_SignInPass->Text = "";
	panel_UserSignIn->BringToFront();
}
private: System::Void button_BackUser_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj4->Show();
}
private: System::Void button_Register_Click(System::Object^ sender, System::EventArgs^ e) {
	Load_Data_Of_User();
	panel_UserSignIn->Hide();
	panel_UserRegister->Show();
	textBox_ID->Text = "";
	textBox_Name->Text = "";
	textBox_Pass->Text = "";
	panel_UserRegister->BringToFront();
}
private: System::Void button_BackRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_UserRegister->Hide();
	pictureBox_User->Show();
}
private: System::Void button_RegisterRegister_Click(System::Object^ sender, System::EventArgs^ e) {
Register:
	
	std::string tempStr_ID;
	tempStr_ID = marshal_as<std::string>(textBox_ID->Text);
	
	int found = 0;
	//to type the System::String^ for tempStr, bcz it's now string not String^
	for (int i = 0; i < 100; i++)
	{
		
		if (textBox_ID ->Text== "" || textBox_Name->Text == ""||textBox_Pass->Text=="")
		{
			MessageBox::Show("You might left something empty make sure to fill all fields with respective data"
			,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			break;
				
		}
		else if (Data_Of_Gui[i].get_Student_Id() == tempStr_ID)
		{
			MessageBox::Show("This Id already Exist! Try a new Id", "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
			found++;
			break;
			
		}
		else if (Data_Of_Gui[i].get_Student_Id() == "\0")
		{
			
				Data_Of_Gui[i].set_Student_Id(marshal_as<std::string>(textBox_ID->Text));
				Data_Of_Gui[i].set_Student_Name(marshal_as<std::string>(textBox_Name->Text));
				Data_Of_Gui[i].set_Student_Pass(marshal_as<std::string>(textBox_Pass->Text));
				MessageBox::Show("Register Successfully", "Success", MessageBoxButtons::OK,
					MessageBoxIcon::Information);
				fstream Save_Recent_User;
				Save_Recent_User.open("Stored_Data/User.txt", ios::app | ios::out);
				Save_Recent_User << marshal_as<std::string>(textBox_ID->Text) << ","
					<< marshal_as<std::string>(textBox_Name->Text) << "," << marshal_as<std::string>(textBox_Pass->Text) 
					<< "\n";
				Save_Recent_User.close();
				panel_UserRegister->Hide();
				this->Show();
				
				break;
		}
	}
	
}
private: System::Void button_EnterUserSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	SignIn:
	std::string tempStr = marshal_as<std::string>(textBox_SignInID->Text);
	std::string tempStr2 = marshal_as<std::string>(textBox_SignInPass->Text);
	int counter = 0;
	int found = 0;
	for (int i = 0; i < 100; i++)
	{
		if (textBox_SignInID->Text == "" || textBox_SignInPass->Text == "")
		{
			
			MessageBox::Show("You may left to fill some fields!", "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		else if (Data_Of_Gui[i].get_Student_Id() == tempStr && Data_Of_Gui[i].get_Student_Pass() == tempStr2)
		{
			found++;
			MessageBox::Show("Welcome "+ gcnew String(Data_Of_Gui[i].get_Student_Name().c_str())
				, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();
			panel_UserSignIn->Hide();
			UserOption^ User_Option_Form = gcnew UserOption(this);
			User_Option_Form->Show();
			IdStudentBorrow = Data_Of_Gui[i].get_Student_Id();

			break;
		}
		
	}
	if (found == 0&&(textBox_SignInID->Text != "" && textBox_SignInPass->Text != ""))
	{
		MessageBox::Show("Invalid User! Please try again", "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void label_SignInPass_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
