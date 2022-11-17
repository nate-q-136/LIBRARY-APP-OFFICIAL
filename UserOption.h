#pragma once

#include"ViewUserOption.h"
#include"StudentSignIn_Register.h"

#include<string.h>
#include<msclr\marshal_cppstd.h>
#include<ctime>

namespace PBL2APP {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserOption
	/// </summary>
	public ref class UserOption : public System::Windows::Forms::Form
	{
	public:
		Form^ UserOptionForm;
		UserOption(Form^ tempForm)
		{
			UserOptionForm = tempForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UserOption(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserOption()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button_ViewLibraryUserOption;
	private: System::Windows::Forms::Button^ button_BorrowAnItemUserOption;

	private: System::Windows::Forms::Button^ button_BackToUserOption;
	private: System::Windows::Forms::Panel^ panel_BorrowAnItem;

	private: System::Windows::Forms::Label^ label_EnterIdToBorrow;
	private: System::Windows::Forms::TextBox^ textBox_NumberOfBooksToBorrow;

	private: System::Windows::Forms::Button^ button_BackBorrowBorrowAnItem;


	private: System::Windows::Forms::Button^ button_ConfirmBorrowAnItem;
	private: System::Windows::Forms::TextBox^ textBox_EnterIdBook;

	private: System::Windows::Forms::Label^ label_NumberOfBooksToBorrow;
	private: System::Windows::Forms::Button^ button_ReturnAnItem;
	private: System::Windows::Forms::Panel^ panel_ReturnAnItem;

	private: System::Windows::Forms::Label^ label_EnterItemToReturn;
	private: System::Windows::Forms::TextBox^ textBox_EnterItemToReturn;
	private: System::Windows::Forms::Button^ button_BackReturnAnItem;
	private: System::Windows::Forms::Button^ button_ReturnReturnAnItem;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserOption::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_ViewLibraryUserOption = (gcnew System::Windows::Forms::Button());
			this->button_BorrowAnItemUserOption = (gcnew System::Windows::Forms::Button());
			this->button_BackToUserOption = (gcnew System::Windows::Forms::Button());
			this->panel_BorrowAnItem = (gcnew System::Windows::Forms::Panel());
			this->textBox_EnterIdBook = (gcnew System::Windows::Forms::TextBox());
			this->label_NumberOfBooksToBorrow = (gcnew System::Windows::Forms::Label());
			this->label_EnterIdToBorrow = (gcnew System::Windows::Forms::Label());
			this->textBox_NumberOfBooksToBorrow = (gcnew System::Windows::Forms::TextBox());
			this->button_BackBorrowBorrowAnItem = (gcnew System::Windows::Forms::Button());
			this->button_ConfirmBorrowAnItem = (gcnew System::Windows::Forms::Button());
			this->button_ReturnAnItem = (gcnew System::Windows::Forms::Button());
			this->panel_ReturnAnItem = (gcnew System::Windows::Forms::Panel());
			this->label_EnterItemToReturn = (gcnew System::Windows::Forms::Label());
			this->textBox_EnterItemToReturn = (gcnew System::Windows::Forms::TextBox());
			this->button_BackReturnAnItem = (gcnew System::Windows::Forms::Button());
			this->button_ReturnReturnAnItem = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel_BorrowAnItem->SuspendLayout();
			this->panel_ReturnAnItem->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1678, 930);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button_ViewLibraryUserOption
			// 
			this->button_ViewLibraryUserOption->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 16.125F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_ViewLibraryUserOption->Location = System::Drawing::Point(165, 133);
			this->button_ViewLibraryUserOption->Name = L"button_ViewLibraryUserOption";
			this->button_ViewLibraryUserOption->Size = System::Drawing::Size(442, 96);
			this->button_ViewLibraryUserOption->TabIndex = 1;
			this->button_ViewLibraryUserOption->Text = L"View Library";
			this->button_ViewLibraryUserOption->UseVisualStyleBackColor = true;
			this->button_ViewLibraryUserOption->Click += gcnew System::EventHandler(this, &UserOption::button_ViewLibraryUserOption_Click);
			// 
			// button_BorrowAnItemUserOption
			// 
			this->button_BorrowAnItemUserOption->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 13.875F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BorrowAnItemUserOption->Location = System::Drawing::Point(165, 291);
			this->button_BorrowAnItemUserOption->Name = L"button_BorrowAnItemUserOption";
			this->button_BorrowAnItemUserOption->Size = System::Drawing::Size(442, 109);
			this->button_BorrowAnItemUserOption->TabIndex = 2;
			this->button_BorrowAnItemUserOption->Text = L"Borrow An Item";
			this->button_BorrowAnItemUserOption->UseVisualStyleBackColor = true;
			this->button_BorrowAnItemUserOption->Click += gcnew System::EventHandler(this, &UserOption::button_BorrowAnItemUserOption_Click);
			// 
			// button_BackToUserOption
			// 
			this->button_BackToUserOption->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_BackToUserOption->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackToUserOption->Location = System::Drawing::Point(53, 721);
			this->button_BackToUserOption->Name = L"button_BackToUserOption";
			this->button_BackToUserOption->Size = System::Drawing::Size(309, 96);
			this->button_BackToUserOption->TabIndex = 3;
			this->button_BackToUserOption->Text = L"Back";
			this->button_BackToUserOption->UseVisualStyleBackColor = false;
			this->button_BackToUserOption->Click += gcnew System::EventHandler(this, &UserOption::button_BackToUserOption_Click);
			// 
			// panel_BorrowAnItem
			// 
			this->panel_BorrowAnItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel_BorrowAnItem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_BorrowAnItem->Controls->Add(this->textBox_EnterIdBook);
			this->panel_BorrowAnItem->Controls->Add(this->label_NumberOfBooksToBorrow);
			this->panel_BorrowAnItem->Controls->Add(this->label_EnterIdToBorrow);
			this->panel_BorrowAnItem->Controls->Add(this->textBox_NumberOfBooksToBorrow);
			this->panel_BorrowAnItem->Controls->Add(this->button_BackBorrowBorrowAnItem);
			this->panel_BorrowAnItem->Controls->Add(this->button_ConfirmBorrowAnItem);
			this->panel_BorrowAnItem->Location = System::Drawing::Point(841, 211);
			this->panel_BorrowAnItem->Name = L"panel_BorrowAnItem";
			this->panel_BorrowAnItem->Size = System::Drawing::Size(690, 510);
			this->panel_BorrowAnItem->TabIndex = 4;
			// 
			// textBox_EnterIdBook
			// 
			this->textBox_EnterIdBook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_EnterIdBook->Location = System::Drawing::Point(163, 94);
			this->textBox_EnterIdBook->Name = L"textBox_EnterIdBook";
			this->textBox_EnterIdBook->Size = System::Drawing::Size(383, 44);
			this->textBox_EnterIdBook->TabIndex = 6;
			this->textBox_EnterIdBook->TextChanged += gcnew System::EventHandler(this, &UserOption::textBox_TextChanged);
			// 
			// label_NumberOfBooksToBorrow
			// 
			this->label_NumberOfBooksToBorrow->AutoSize = true;
			this->label_NumberOfBooksToBorrow->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_NumberOfBooksToBorrow->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NumberOfBooksToBorrow->Location = System::Drawing::Point(122, 194);
			this->label_NumberOfBooksToBorrow->Name = L"label_NumberOfBooksToBorrow";
			this->label_NumberOfBooksToBorrow->Size = System::Drawing::Size(472, 41);
			this->label_NumberOfBooksToBorrow->TabIndex = 5;
			this->label_NumberOfBooksToBorrow->Text = L"Number of Books to Borrow";
			this->label_NumberOfBooksToBorrow->Click += gcnew System::EventHandler(this, &UserOption::label1_Click);
			// 
			// label_EnterIdToBorrow
			// 
			this->label_EnterIdToBorrow->AutoSize = true;
			this->label_EnterIdToBorrow->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label_EnterIdToBorrow->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_EnterIdToBorrow->Location = System::Drawing::Point(191, 24);
			this->label_EnterIdToBorrow->Name = L"label_EnterIdToBorrow";
			this->label_EnterIdToBorrow->Size = System::Drawing::Size(327, 41);
			this->label_EnterIdToBorrow->TabIndex = 3;
			this->label_EnterIdToBorrow->Text = L"Enter Id To Borrow";
			// 
			// textBox_NumberOfBooksToBorrow
			// 
			this->textBox_NumberOfBooksToBorrow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NumberOfBooksToBorrow->Location = System::Drawing::Point(163, 270);
			this->textBox_NumberOfBooksToBorrow->Name = L"textBox_NumberOfBooksToBorrow";
			this->textBox_NumberOfBooksToBorrow->Size = System::Drawing::Size(383, 44);
			this->textBox_NumberOfBooksToBorrow->TabIndex = 2;
			this->textBox_NumberOfBooksToBorrow->TextChanged += gcnew System::EventHandler(this, &UserOption::textBox_BorrowAnItem_TextChanged);
			// 
			// button_BackBorrowBorrowAnItem
			// 
			this->button_BackBorrowBorrowAnItem->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackBorrowBorrowAnItem->Location = System::Drawing::Point(48, 381);
			this->button_BackBorrowBorrowAnItem->Name = L"button_BackBorrowBorrowAnItem";
			this->button_BackBorrowBorrowAnItem->Size = System::Drawing::Size(250, 85);
			this->button_BackBorrowBorrowAnItem->TabIndex = 1;
			this->button_BackBorrowBorrowAnItem->Text = L"Back";
			this->button_BackBorrowBorrowAnItem->UseVisualStyleBackColor = true;
			this->button_BackBorrowBorrowAnItem->Click += gcnew System::EventHandler(this, &UserOption::button_BackBorrowBorrowAnItem_Click);
			// 
			// button_ConfirmBorrowAnItem
			// 
			this->button_ConfirmBorrowAnItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_ConfirmBorrowAnItem->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_ConfirmBorrowAnItem->Location = System::Drawing::Point(397, 381);
			this->button_ConfirmBorrowAnItem->Name = L"button_ConfirmBorrowAnItem";
			this->button_ConfirmBorrowAnItem->Size = System::Drawing::Size(250, 85);
			this->button_ConfirmBorrowAnItem->TabIndex = 0;
			this->button_ConfirmBorrowAnItem->Text = L"Confirm";
			this->button_ConfirmBorrowAnItem->UseVisualStyleBackColor = false;
			this->button_ConfirmBorrowAnItem->Click += gcnew System::EventHandler(this, &UserOption::button_ConfirmBorrowAnItem_Click);
			// 
			// button_ReturnAnItem
			// 
			this->button_ReturnAnItem->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ReturnAnItem->Location = System::Drawing::Point(165, 477);
			this->button_ReturnAnItem->Name = L"button_ReturnAnItem";
			this->button_ReturnAnItem->Size = System::Drawing::Size(442, 109);
			this->button_ReturnAnItem->TabIndex = 5;
			this->button_ReturnAnItem->Text = L"Return An Item";
			this->button_ReturnAnItem->UseVisualStyleBackColor = true;
			this->button_ReturnAnItem->Click += gcnew System::EventHandler(this, &UserOption::button_ReturnAnItem_Click);
			// 
			// panel_ReturnAnItem
			// 
			this->panel_ReturnAnItem->BackColor = System::Drawing::Color::RosyBrown;
			this->panel_ReturnAnItem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_ReturnAnItem->Controls->Add(this->label_EnterItemToReturn);
			this->panel_ReturnAnItem->Controls->Add(this->textBox_EnterItemToReturn);
			this->panel_ReturnAnItem->Controls->Add(this->button_BackReturnAnItem);
			this->panel_ReturnAnItem->Controls->Add(this->button_ReturnReturnAnItem);
			this->panel_ReturnAnItem->Location = System::Drawing::Point(922, 161);
			this->panel_ReturnAnItem->Name = L"panel_ReturnAnItem";
			this->panel_ReturnAnItem->Size = System::Drawing::Size(598, 367);
			this->panel_ReturnAnItem->TabIndex = 6;
			// 
			// label_EnterItemToReturn
			// 
			this->label_EnterItemToReturn->AutoSize = true;
			this->label_EnterItemToReturn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label_EnterItemToReturn->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_EnterItemToReturn->Location = System::Drawing::Point(97, 60);
			this->label_EnterItemToReturn->Name = L"label_EnterItemToReturn";
			this->label_EnterItemToReturn->Size = System::Drawing::Size(401, 41);
			this->label_EnterItemToReturn->TabIndex = 3;
			this->label_EnterItemToReturn->Text = L"Enter Id Item To Return";
			this->label_EnterItemToReturn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_EnterItemToReturn->Click += gcnew System::EventHandler(this, &UserOption::label_EnterItemToReturn_Click);
			// 
			// textBox_EnterItemToReturn
			// 
			this->textBox_EnterItemToReturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_EnterItemToReturn->Location = System::Drawing::Point(91, 144);
			this->textBox_EnterItemToReturn->Name = L"textBox_EnterItemToReturn";
			this->textBox_EnterItemToReturn->Size = System::Drawing::Size(418, 44);
			this->textBox_EnterItemToReturn->TabIndex = 2;
			// 
			// button_BackReturnAnItem
			// 
			this->button_BackReturnAnItem->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackReturnAnItem->Location = System::Drawing::Point(34, 276);
			this->button_BackReturnAnItem->Name = L"button_BackReturnAnItem";
			this->button_BackReturnAnItem->Size = System::Drawing::Size(215, 66);
			this->button_BackReturnAnItem->TabIndex = 1;
			this->button_BackReturnAnItem->Text = L"Back";
			this->button_BackReturnAnItem->UseVisualStyleBackColor = true;
			this->button_BackReturnAnItem->Click += gcnew System::EventHandler(this, &UserOption::button_BackReturnAnItem_Click);
			// 
			// button_ReturnReturnAnItem
			// 
			this->button_ReturnReturnAnItem->BackColor = System::Drawing::Color::IndianRed;
			this->button_ReturnReturnAnItem->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_ReturnReturnAnItem->Location = System::Drawing::Point(351, 276);
			this->button_ReturnReturnAnItem->Name = L"button_ReturnReturnAnItem";
			this->button_ReturnReturnAnItem->Size = System::Drawing::Size(215, 66);
			this->button_ReturnReturnAnItem->TabIndex = 0;
			this->button_ReturnReturnAnItem->Text = L"Return";
			this->button_ReturnReturnAnItem->UseVisualStyleBackColor = false;
			this->button_ReturnReturnAnItem->Click += gcnew System::EventHandler(this, &UserOption::button_ReturnReturnAnItem_Click);
			// 
			// UserOption
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1665, 858);
			this->Controls->Add(this->button_ReturnAnItem);
			this->Controls->Add(this->button_BackToUserOption);
			this->Controls->Add(this->button_BorrowAnItemUserOption);
			this->Controls->Add(this->button_ViewLibraryUserOption);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel_BorrowAnItem);
			this->Controls->Add(this->panel_ReturnAnItem);
			this->Name = L"UserOption";
			this->Text = L"UserOption";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel_BorrowAnItem->ResumeLayout(false);
			this->panel_BorrowAnItem->PerformLayout();
			this->panel_ReturnAnItem->ResumeLayout(false);
			this->panel_ReturnAnItem->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_BackToUserOption_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		UserOptionForm->Show();
		
	}
private: System::Void button_ViewLibraryUserOption_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ViewUserOption^ OpenView = gcnew ViewUserOption(this);
	OpenView->Show();
}
private: System::Void button_BorrowAnItemUserOption_Click(System::Object^ sender, System::EventArgs^ e) {
	Load_Data_Of_Borrowed_Book();
	panel_ReturnAnItem->Hide();
	panel_BorrowAnItem->Show();
	panel_BorrowAnItem->BringToFront();
	textBox_EnterIdBook->Text = "";
	textBox_NumberOfBooksToBorrow->Text = "";
	Load_Data_Of_Library();
}
	   public:int j;
private: System::Void button_ConfirmBorrowAnItem_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStrNumber_Borrowed_Book = get_Correct_String(marshal_as<std::string>(textBox_NumberOfBooksToBorrow->Text));
	std::string tempStrId_Book = get_Correct_String(marshal_as<std::string>(textBox_EnterIdBook->Text));
	int counter = 0;
	int check = 1;
	for (int i = 0; i < tempStrNumber_Borrowed_Book.length(); i++)
	{
		if (tempStrNumber_Borrowed_Book[i] != '0' && tempStrNumber_Borrowed_Book[i] != '1'
			&& tempStrNumber_Borrowed_Book[i] != '2'
			&& tempStrNumber_Borrowed_Book[i] != '3' && tempStrNumber_Borrowed_Book[i] != '4' 
			&& tempStrNumber_Borrowed_Book[i] != '5'
			&& tempStrNumber_Borrowed_Book[i] != '6' && tempStrNumber_Borrowed_Book[i] != '7'
			&& tempStrNumber_Borrowed_Book[i] != '8' && tempStrNumber_Borrowed_Book[i] != '9')
		{/*
			MessageBox::Show("Number of Books to Borrow Should Be A Number", "Error", MessageBoxButtons::OK
				, MessageBoxIcon::Error);*/
			check = 0;
			break;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (tempStrNumber_Borrowed_Book == ""||tempStrId_Book=="")
		{
			MessageBox::Show("Please fill in All the Blank", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			
			break;
		}
		else if (check==0)
		{

			MessageBox::Show("Number of Books to Borrow Should Be A Number", "Error", MessageBoxButtons::OK
				, MessageBoxIcon::Error);
			break;
		}
		
		else if (Data_Of_Gui[i].get_Book_Id() == tempStrId_Book)
		{
			for (int j = 0; j < 100; j++)
			{
				if (IdStudentBorrow == Data_Of_Gui[j].get_Borrow_Student_Id() && tempStrId_Book == Data_Of_Gui[j].get_Borrowed_Book_Id())
				{
					MessageBox::Show("You Can Not Borrow This Item Twice! Please Return The Previous One And Then Borrow"
						, "Error", MessageBoxButtons::OK
						, MessageBoxIcon::Error);
					check = 0;
					break;
				}
				
			}
			if (check == 0)
			{
				break;
			}
			int Borrowed_Book = stoi(tempStrNumber_Borrowed_Book);
			if (Borrowed_Book > Data_Of_Gui[i].get_Total_Copies())
			{
				MessageBox::Show("Number of Books to Borrow Should Be Smaller Than Total Books Available"
					, "Error", MessageBoxButtons::OK
					, MessageBoxIcon::Error);
				break;
			}
			if (Borrowed_Book <= 0)
			{
				MessageBox::Show("Number of Books to Borrow Should Be Greater Than 0", "Error", MessageBoxButtons::OK
					, MessageBoxIcon::Error);
				break;
			}
			date tempdate,tempdateReturn;
			time_t t = time(NULL);
			tm currentTime;
			localtime_s(&currentTime, &t);
			tempdate.day = currentTime.tm_mday;
			tempdateReturn.day = currentTime.tm_mday;
			tempdate.month = currentTime.tm_mon + 1;
			tempdateReturn.month = currentTime.tm_mon + 2;
			tempdate.year = currentTime.tm_year + 1900;
			if ((tempdateReturn.month - 12) >=1)
			{
				tempdateReturn.month = 1;
				tempdateReturn.year = currentTime.tm_year + 1901;
			}
			else {
				tempdateReturn.month = currentTime.tm_mon + 2;
				tempdateReturn.year = currentTime.tm_year + 1900;
			}
			
			/*label_Test->Text =marshal_as<String^>("return on " + to_string(tempdate.day) + "/"
				+ to_string(tempdate.month) + "/" + to_string(tempdate.year));*/
			MessageBox::Show(marshal_as<String^>("Borrow Item Successfully On "+to_string(tempdate.day)+"/"
				+to_string(tempdate.month)+"/"+to_string(tempdate.year)+"! Please return item on " + to_string(tempdateReturn.day) + "/"
				+ to_string(tempdateReturn.month) + "/" + to_string(tempdateReturn.year)), "Success",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
			Data_Of_Gui[i].set_Borrow_Student_Id(IdStudentBorrow);
			
			Data_Of_Gui[i].set_Borrowed_Book_Id(tempStrId_Book);
			Data_Of_Gui[i].set_Number_Borrowed_Book(Borrowed_Book);
			Data_Of_Gui[i].set_Borrow_Date(tempdate);
			Data_Of_Gui[i].set_Return_Date(tempdateReturn);

			int Update_Total_Copies = Data_Of_Gui[i].get_Total_Copies() - Borrowed_Book;
			Data_Of_Gui[i].set_Total_Copies(Update_Total_Copies);
			int Update_Borrowed_Book = Data_Of_Gui[i].get_Borrowed_Book_Library() + Borrowed_Book;
			Data_Of_Gui[i].set_Borrowed_Book_Library(Update_Borrowed_Book);
			Save_Data_Of_Borrowed_Book();
			Save_Data_Of_Library();
			panel_BorrowAnItem->Hide();
			break;
		}
		else {
			counter++;
		}
		
	}
	if (counter == 100)
	{
		MessageBox::Show("Item Not Found", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void button_BackBorrowBorrowAnItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_BorrowAnItem->Hide();
}
private: System::Void textBox_BorrowAnItem_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_BackReturnAnItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_ReturnAnItem->Hide();
}
private: System::Void button_ReturnAnItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Load_Data_Of_Borrowed_Book();
	Load_Data_Of_Library();
	panel_BorrowAnItem->Hide();
	panel_ReturnAnItem->Show();
	textBox_EnterItemToReturn->Text = "";
	panel_ReturnAnItem->BringToFront();
}
private: System::Void button_ReturnReturnAnItem_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStr = get_Correct_String(marshal_as<std::string>(textBox_EnterItemToReturn->Text));
	int counter = 0;
	for (int i = 0; i < 100; i++)
	{
		if (tempStr == "")
		{
			MessageBox::Show("Please Fill In The Blank", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		else if (Data_Of_Gui[i].get_Borrowed_Book_Id() == tempStr&& IdStudentBorrow==Data_Of_Gui[i].get_Borrow_Student_Id())
		{
			for (int j = 0; j < 100; j++)
			{
				if (tempStr == Data_Of_Gui[j].get_Book_Id())
				{
					int Update_Total_Copies = Data_Of_Gui[i].get_Number_Borrowed_Book() + Data_Of_Gui[j].get_Total_Copies();
					Data_Of_Gui[j].set_Total_Copies(Update_Total_Copies);
					int Update_Borrowed_Book = Data_Of_Gui[j].get_Borrowed_Book_Library() - Data_Of_Gui[i].get_Number_Borrowed_Book();
					Data_Of_Gui[j].set_Borrowed_Book_Library(Update_Borrowed_Book);
					string temp = "\0";
					Data_Of_Gui[i].set_Borrowed_Book_Id(temp);
					Data_Of_Gui[i].set_Borrow_Student_Id(temp);
					int x = 0;
					Data_Of_Gui[i].set_Number_Borrowed_Book(x);
					date D; D.day = 0; D.month = 0; D.year = 0;
					Data_Of_Gui[i].set_Borrow_Date(D);
					Data_Of_Gui[i].set_Return_Date(D);
					MessageBox::Show("Return Item Successfully", "Success",
						MessageBoxButtons::OK, MessageBoxIcon::Information);
					Save_Data_Of_Borrowed_Book();
					Save_Data_Of_Library();
					panel_ReturnAnItem->Hide();
					break;
				}
			}
			break;

		}
		else {
			counter++;
		}
	}
	if (counter == 100)
	{
		MessageBox::Show("Item Are Not Being Borrowed By You", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void label_EnterItemToReturn_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
