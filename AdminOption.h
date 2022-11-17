#pragma once
#include"ViewAdminOption.h"
#include"ViewStudentsBorrowing.h"
#include"ViewAllStudentAccounts.h"
#include<msclr\marshal_cppstd.h>>
namespace PBL2APP {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminOption
	/// </summary>
	public ref class AdminOption : public System::Windows::Forms::Form
	{
	public:
		bool turn = 1;
		/*void Load_Data_Of_Library()
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
	private: System::Windows::Forms::Button^ button_BackDeleteRecord;
	private: System::Windows::Forms::Panel^ panel_AddRecord;
	private: System::Windows::Forms::TextBox^ textBox_BorrowedAddRecord;

	private: System::Windows::Forms::TextBox^ textBox_TotalAddRecord;

	private: System::Windows::Forms::TextBox^ textBox_NameAddRecord;
	private: System::Windows::Forms::TextBox^ textBox_IdAddRecord;
	private: System::Windows::Forms::Label^ label_BorrowedAddRecord;
	private: System::Windows::Forms::Label^ label_TotalAddRecord;
	private: System::Windows::Forms::Label^ label_NameAddRecord;
	private: System::Windows::Forms::Label^ label_IdAddRecord;
	private: System::Windows::Forms::Button^ button_BackAddRecord;
	private: System::Windows::Forms::Button^ button_AddAddRecord;
	private: System::Windows::Forms::Panel^ panel_UpdateRecord;

	private: System::Windows::Forms::Button^ button_BackUpdateRecord;
	private: System::Windows::Forms::Button^ button_NextUpdateRecord;
	private: System::Windows::Forms::TextBox^ textBox_IdUpdateRecord;
	private: System::Windows::Forms::Label^ label_EnterIdBookUpdateRecord;
	private: System::Windows::Forms::Panel^ panel_UpdateRecord2;
	private: System::Windows::Forms::Button^ button_BackUpdateRecord2;
	private: System::Windows::Forms::Button^ button_UpdateRecord;
	private: System::Windows::Forms::TextBox^ textBox_BorrowedUpdateRecord;

	private: System::Windows::Forms::TextBox^ textBox_TotalUpdateRecord;

	private: System::Windows::Forms::TextBox^ textBox_NameUpdateRecord;

	private: System::Windows::Forms::Label^ label_BorrowedUpdateRecord;
	private: System::Windows::Forms::Label^ label_TotalUpdateRecord;
	private: System::Windows::Forms::Label^ label_NameUpdateRecord;
	private: System::Windows::Forms::Button^ button_ViewStudentBorrowing;
	private: System::Windows::Forms::Button^ button_ViewAllStudentAccounts;



	public:
		Form^ obj2;
		AdminOption(Form^obj1)
		{
			obj2 = obj1;
			InitializeComponent();
			if(turn)
			Load_Data_Of_Library();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminOption(void)
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
		~AdminOption()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button_Add;
	private: System::Windows::Forms::Button^ button_DeleteAdminOption;
	private: System::Windows::Forms::Button^ button_UpdateAdminOption;


	private: System::Windows::Forms::Button^ button_ViewAdminOption;

	private: System::Windows::Forms::Button^ button_Back_AdminOption;
	private: System::Windows::Forms::Panel^ panel_DeleteRecord;
	private: System::Windows::Forms::TextBox^ textBox_Delete;

	private:

	private: System::Windows::Forms::Label^ label_IdDelete;
	private: System::Windows::Forms::Button^ button_DeleteRecord;
	protected:






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminOption::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_Add = (gcnew System::Windows::Forms::Button());
			this->button_DeleteAdminOption = (gcnew System::Windows::Forms::Button());
			this->button_UpdateAdminOption = (gcnew System::Windows::Forms::Button());
			this->button_ViewAdminOption = (gcnew System::Windows::Forms::Button());
			this->button_Back_AdminOption = (gcnew System::Windows::Forms::Button());
			this->panel_DeleteRecord = (gcnew System::Windows::Forms::Panel());
			this->button_BackDeleteRecord = (gcnew System::Windows::Forms::Button());
			this->button_DeleteRecord = (gcnew System::Windows::Forms::Button());
			this->textBox_Delete = (gcnew System::Windows::Forms::TextBox());
			this->label_IdDelete = (gcnew System::Windows::Forms::Label());
			this->panel_AddRecord = (gcnew System::Windows::Forms::Panel());
			this->button_BackAddRecord = (gcnew System::Windows::Forms::Button());
			this->button_AddAddRecord = (gcnew System::Windows::Forms::Button());
			this->textBox_BorrowedAddRecord = (gcnew System::Windows::Forms::TextBox());
			this->textBox_TotalAddRecord = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NameAddRecord = (gcnew System::Windows::Forms::TextBox());
			this->textBox_IdAddRecord = (gcnew System::Windows::Forms::TextBox());
			this->label_BorrowedAddRecord = (gcnew System::Windows::Forms::Label());
			this->label_TotalAddRecord = (gcnew System::Windows::Forms::Label());
			this->label_NameAddRecord = (gcnew System::Windows::Forms::Label());
			this->label_IdAddRecord = (gcnew System::Windows::Forms::Label());
			this->panel_UpdateRecord = (gcnew System::Windows::Forms::Panel());
			this->button_BackUpdateRecord = (gcnew System::Windows::Forms::Button());
			this->button_NextUpdateRecord = (gcnew System::Windows::Forms::Button());
			this->textBox_IdUpdateRecord = (gcnew System::Windows::Forms::TextBox());
			this->label_EnterIdBookUpdateRecord = (gcnew System::Windows::Forms::Label());
			this->panel_UpdateRecord2 = (gcnew System::Windows::Forms::Panel());
			this->button_BackUpdateRecord2 = (gcnew System::Windows::Forms::Button());
			this->button_UpdateRecord = (gcnew System::Windows::Forms::Button());
			this->textBox_BorrowedUpdateRecord = (gcnew System::Windows::Forms::TextBox());
			this->textBox_TotalUpdateRecord = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NameUpdateRecord = (gcnew System::Windows::Forms::TextBox());
			this->label_BorrowedUpdateRecord = (gcnew System::Windows::Forms::Label());
			this->label_TotalUpdateRecord = (gcnew System::Windows::Forms::Label());
			this->label_NameUpdateRecord = (gcnew System::Windows::Forms::Label());
			this->button_ViewStudentBorrowing = (gcnew System::Windows::Forms::Button());
			this->button_ViewAllStudentAccounts = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel_DeleteRecord->SuspendLayout();
			this->panel_AddRecord->SuspendLayout();
			this->panel_UpdateRecord->SuspendLayout();
			this->panel_UpdateRecord2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1905, 933);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button_Add
			// 
			this->button_Add->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Add->Location = System::Drawing::Point(138, 38);
			this->button_Add->Name = L"button_Add";
			this->button_Add->Size = System::Drawing::Size(477, 99);
			this->button_Add->TabIndex = 1;
			this->button_Add->Text = L"Add A New Record";
			this->button_Add->UseVisualStyleBackColor = true;
			this->button_Add->Click += gcnew System::EventHandler(this, &AdminOption::button_Add_Click);
			// 
			// button_DeleteAdminOption
			// 
			this->button_DeleteAdminOption->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_DeleteAdminOption->Location = System::Drawing::Point(138, 157);
			this->button_DeleteAdminOption->Name = L"button_DeleteAdminOption";
			this->button_DeleteAdminOption->Size = System::Drawing::Size(477, 99);
			this->button_DeleteAdminOption->TabIndex = 2;
			this->button_DeleteAdminOption->Text = L"Delete A Record";
			this->button_DeleteAdminOption->UseVisualStyleBackColor = true;
			this->button_DeleteAdminOption->Click += gcnew System::EventHandler(this, &AdminOption::button_DeleteAdminOption_Click);
			// 
			// button_UpdateAdminOption
			// 
			this->button_UpdateAdminOption->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UpdateAdminOption->Location = System::Drawing::Point(138, 288);
			this->button_UpdateAdminOption->Name = L"button_UpdateAdminOption";
			this->button_UpdateAdminOption->Size = System::Drawing::Size(477, 80);
			this->button_UpdateAdminOption->TabIndex = 3;
			this->button_UpdateAdminOption->Text = L"Update A Record";
			this->button_UpdateAdminOption->UseVisualStyleBackColor = true;
			this->button_UpdateAdminOption->Click += gcnew System::EventHandler(this, &AdminOption::button_UpdateAdminOption_Click);
			// 
			// button_ViewAdminOption
			// 
			this->button_ViewAdminOption->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_ViewAdminOption->FlatAppearance->BorderSize = 5;
			this->button_ViewAdminOption->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_ViewAdminOption->Location = System::Drawing::Point(138, 642);
			this->button_ViewAdminOption->Name = L"button_ViewAdminOption";
			this->button_ViewAdminOption->Size = System::Drawing::Size(477, 90);
			this->button_ViewAdminOption->TabIndex = 4;
			this->button_ViewAdminOption->Text = L"View Available Books";
			this->button_ViewAdminOption->UseVisualStyleBackColor = true;
			this->button_ViewAdminOption->Click += gcnew System::EventHandler(this, &AdminOption::button_View_Click);
			// 
			// button_Back_AdminOption
			// 
			this->button_Back_AdminOption->BackColor = System::Drawing::Color::IndianRed;
			this->button_Back_AdminOption->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_Back_AdminOption->Location = System::Drawing::Point(33, 803);
			this->button_Back_AdminOption->Name = L"button_Back_AdminOption";
			this->button_Back_AdminOption->Size = System::Drawing::Size(198, 99);
			this->button_Back_AdminOption->TabIndex = 5;
			this->button_Back_AdminOption->Text = L"Back";
			this->button_Back_AdminOption->UseVisualStyleBackColor = false;
			this->button_Back_AdminOption->Click += gcnew System::EventHandler(this, &AdminOption::button_Back_AdminOption_Click);
			// 
			// panel_DeleteRecord
			// 
			this->panel_DeleteRecord->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_DeleteRecord->Controls->Add(this->button_BackDeleteRecord);
			this->panel_DeleteRecord->Controls->Add(this->button_DeleteRecord);
			this->panel_DeleteRecord->Controls->Add(this->textBox_Delete);
			this->panel_DeleteRecord->Controls->Add(this->label_IdDelete);
			this->panel_DeleteRecord->Location = System::Drawing::Point(976, 201);
			this->panel_DeleteRecord->Name = L"panel_DeleteRecord";
			this->panel_DeleteRecord->Size = System::Drawing::Size(539, 417);
			this->panel_DeleteRecord->TabIndex = 6;
			// 
			// button_BackDeleteRecord
			// 
			this->button_BackDeleteRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackDeleteRecord->Location = System::Drawing::Point(40, 275);
			this->button_BackDeleteRecord->Name = L"button_BackDeleteRecord";
			this->button_BackDeleteRecord->Size = System::Drawing::Size(219, 67);
			this->button_BackDeleteRecord->TabIndex = 3;
			this->button_BackDeleteRecord->Text = L"Back";
			this->button_BackDeleteRecord->UseVisualStyleBackColor = true;
			this->button_BackDeleteRecord->Click += gcnew System::EventHandler(this, &AdminOption::button_BackDeleteRecord_Click);
			// 
			// button_DeleteRecord
			// 
			this->button_DeleteRecord->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button_DeleteRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_DeleteRecord->Location = System::Drawing::Point(266, 275);
			this->button_DeleteRecord->Name = L"button_DeleteRecord";
			this->button_DeleteRecord->Size = System::Drawing::Size(219, 67);
			this->button_DeleteRecord->TabIndex = 2;
			this->button_DeleteRecord->Text = L"Delete";
			this->button_DeleteRecord->UseVisualStyleBackColor = false;
			this->button_DeleteRecord->Click += gcnew System::EventHandler(this, &AdminOption::button_DeleteRecord_Click);
			// 
			// textBox_Delete
			// 
			this->textBox_Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Delete->Location = System::Drawing::Point(54, 179);
			this->textBox_Delete->Name = L"textBox_Delete";
			this->textBox_Delete->Size = System::Drawing::Size(431, 44);
			this->textBox_Delete->TabIndex = 1;
			this->textBox_Delete->TextChanged += gcnew System::EventHandler(this, &AdminOption::textBox_Delete_TextChanged);
			// 
			// label_IdDelete
			// 
			this->label_IdDelete->AutoSize = true;
			this->label_IdDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_IdDelete->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_IdDelete->Location = System::Drawing::Point(33, 64);
			this->label_IdDelete->Name = L"label_IdDelete";
			this->label_IdDelete->Size = System::Drawing::Size(478, 43);
			this->label_IdDelete->TabIndex = 0;
			this->label_IdDelete->Text = L"Type an ID Book to Delete";
			// 
			// panel_AddRecord
			// 
			this->panel_AddRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel_AddRecord->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_AddRecord->Controls->Add(this->button_BackAddRecord);
			this->panel_AddRecord->Controls->Add(this->button_AddAddRecord);
			this->panel_AddRecord->Controls->Add(this->textBox_BorrowedAddRecord);
			this->panel_AddRecord->Controls->Add(this->textBox_TotalAddRecord);
			this->panel_AddRecord->Controls->Add(this->textBox_NameAddRecord);
			this->panel_AddRecord->Controls->Add(this->textBox_IdAddRecord);
			this->panel_AddRecord->Controls->Add(this->label_BorrowedAddRecord);
			this->panel_AddRecord->Controls->Add(this->label_TotalAddRecord);
			this->panel_AddRecord->Controls->Add(this->label_NameAddRecord);
			this->panel_AddRecord->Controls->Add(this->label_IdAddRecord);
			this->panel_AddRecord->Location = System::Drawing::Point(822, 52);
			this->panel_AddRecord->Name = L"panel_AddRecord";
			this->panel_AddRecord->Size = System::Drawing::Size(767, 510);
			this->panel_AddRecord->TabIndex = 7;
			// 
			// button_BackAddRecord
			// 
			this->button_BackAddRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackAddRecord->Location = System::Drawing::Point(71, 435);
			this->button_BackAddRecord->Name = L"button_BackAddRecord";
			this->button_BackAddRecord->Size = System::Drawing::Size(213, 56);
			this->button_BackAddRecord->TabIndex = 9;
			this->button_BackAddRecord->Text = L"BACK";
			this->button_BackAddRecord->UseVisualStyleBackColor = true;
			this->button_BackAddRecord->Click += gcnew System::EventHandler(this, &AdminOption::button_BackAddRecord_Click);
			// 
			// button_AddAddRecord
			// 
			this->button_AddAddRecord->BackColor = System::Drawing::Color::LightCoral;
			this->button_AddAddRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_AddAddRecord->Location = System::Drawing::Point(497, 436);
			this->button_AddAddRecord->Name = L"button_AddAddRecord";
			this->button_AddAddRecord->Size = System::Drawing::Size(213, 56);
			this->button_AddAddRecord->TabIndex = 8;
			this->button_AddAddRecord->Text = L"ADD";
			this->button_AddAddRecord->UseVisualStyleBackColor = false;
			this->button_AddAddRecord->Click += gcnew System::EventHandler(this, &AdminOption::button_AddAddRecord_Click);
			// 
			// textBox_BorrowedAddRecord
			// 
			this->textBox_BorrowedAddRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_BorrowedAddRecord->Location = System::Drawing::Point(334, 359);
			this->textBox_BorrowedAddRecord->Name = L"textBox_BorrowedAddRecord";
			this->textBox_BorrowedAddRecord->Size = System::Drawing::Size(352, 38);
			this->textBox_BorrowedAddRecord->TabIndex = 7;
			// 
			// textBox_TotalAddRecord
			// 
			this->textBox_TotalAddRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_TotalAddRecord->Location = System::Drawing::Point(334, 256);
			this->textBox_TotalAddRecord->Name = L"textBox_TotalAddRecord";
			this->textBox_TotalAddRecord->Size = System::Drawing::Size(352, 38);
			this->textBox_TotalAddRecord->TabIndex = 6;
			this->textBox_TotalAddRecord->TextChanged += gcnew System::EventHandler(this, &AdminOption::textBox3_TextChanged);
			// 
			// textBox_NameAddRecord
			// 
			this->textBox_NameAddRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NameAddRecord->Location = System::Drawing::Point(334, 149);
			this->textBox_NameAddRecord->Name = L"textBox_NameAddRecord";
			this->textBox_NameAddRecord->Size = System::Drawing::Size(352, 38);
			this->textBox_NameAddRecord->TabIndex = 5;
			// 
			// textBox_IdAddRecord
			// 
			this->textBox_IdAddRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_IdAddRecord->Location = System::Drawing::Point(334, 61);
			this->textBox_IdAddRecord->Name = L"textBox_IdAddRecord";
			this->textBox_IdAddRecord->Size = System::Drawing::Size(352, 38);
			this->textBox_IdAddRecord->TabIndex = 4;
			// 
			// label_BorrowedAddRecord
			// 
			this->label_BorrowedAddRecord->AutoSize = true;
			this->label_BorrowedAddRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label_BorrowedAddRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_BorrowedAddRecord->Location = System::Drawing::Point(113, 358);
			this->label_BorrowedAddRecord->Name = L"label_BorrowedAddRecord";
			this->label_BorrowedAddRecord->Size = System::Drawing::Size(211, 37);
			this->label_BorrowedAddRecord->TabIndex = 3;
			this->label_BorrowedAddRecord->Text = L"BORROWED";
			// 
			// label_TotalAddRecord
			// 
			this->label_TotalAddRecord->AutoSize = true;
			this->label_TotalAddRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label_TotalAddRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_TotalAddRecord->Location = System::Drawing::Point(9, 257);
			this->label_TotalAddRecord->Name = L"label_TotalAddRecord";
			this->label_TotalAddRecord->Size = System::Drawing::Size(315, 37);
			this->label_TotalAddRecord->TabIndex = 2;
			this->label_TotalAddRecord->Text = L"TOTAL AVAILABLE";
			// 
			// label_NameAddRecord
			// 
			this->label_NameAddRecord->AutoSize = true;
			this->label_NameAddRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label_NameAddRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NameAddRecord->Location = System::Drawing::Point(212, 147);
			this->label_NameAddRecord->Name = L"label_NameAddRecord";
			this->label_NameAddRecord->Size = System::Drawing::Size(112, 37);
			this->label_NameAddRecord->TabIndex = 1;
			this->label_NameAddRecord->Text = L"NAME";
			// 
			// label_IdAddRecord
			// 
			this->label_IdAddRecord->AutoSize = true;
			this->label_IdAddRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label_IdAddRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_IdAddRecord->Location = System::Drawing::Point(273, 60);
			this->label_IdAddRecord->Name = L"label_IdAddRecord";
			this->label_IdAddRecord->Size = System::Drawing::Size(51, 37);
			this->label_IdAddRecord->TabIndex = 0;
			this->label_IdAddRecord->Text = L"ID";
			this->label_IdAddRecord->Click += gcnew System::EventHandler(this, &AdminOption::label_IdAddRecord_Click);
			// 
			// panel_UpdateRecord
			// 
			this->panel_UpdateRecord->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel_UpdateRecord->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_UpdateRecord->Controls->Add(this->button_BackUpdateRecord);
			this->panel_UpdateRecord->Controls->Add(this->button_NextUpdateRecord);
			this->panel_UpdateRecord->Controls->Add(this->textBox_IdUpdateRecord);
			this->panel_UpdateRecord->Controls->Add(this->label_EnterIdBookUpdateRecord);
			this->panel_UpdateRecord->Location = System::Drawing::Point(973, 427);
			this->panel_UpdateRecord->Name = L"panel_UpdateRecord";
			this->panel_UpdateRecord->Size = System::Drawing::Size(688, 433);
			this->panel_UpdateRecord->TabIndex = 8;
			// 
			// button_BackUpdateRecord
			// 
			this->button_BackUpdateRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackUpdateRecord->Location = System::Drawing::Point(87, 280);
			this->button_BackUpdateRecord->Name = L"button_BackUpdateRecord";
			this->button_BackUpdateRecord->Size = System::Drawing::Size(175, 78);
			this->button_BackUpdateRecord->TabIndex = 3;
			this->button_BackUpdateRecord->Text = L"Back";
			this->button_BackUpdateRecord->UseVisualStyleBackColor = true;
			this->button_BackUpdateRecord->Click += gcnew System::EventHandler(this, &AdminOption::button_BackUpdateRecord_Click);
			// 
			// button_NextUpdateRecord
			// 
			this->button_NextUpdateRecord->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button_NextUpdateRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_NextUpdateRecord->Location = System::Drawing::Point(431, 280);
			this->button_NextUpdateRecord->Name = L"button_NextUpdateRecord";
			this->button_NextUpdateRecord->Size = System::Drawing::Size(175, 78);
			this->button_NextUpdateRecord->TabIndex = 2;
			this->button_NextUpdateRecord->Text = L"Next";
			this->button_NextUpdateRecord->UseVisualStyleBackColor = false;
			this->button_NextUpdateRecord->Click += gcnew System::EventHandler(this, &AdminOption::button_NextUpdateRecord_Click);
			// 
			// textBox_IdUpdateRecord
			// 
			this->textBox_IdUpdateRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_IdUpdateRecord->Location = System::Drawing::Point(116, 160);
			this->textBox_IdUpdateRecord->Name = L"textBox_IdUpdateRecord";
			this->textBox_IdUpdateRecord->Size = System::Drawing::Size(458, 49);
			this->textBox_IdUpdateRecord->TabIndex = 1;
			// 
			// label_EnterIdBookUpdateRecord
			// 
			this->label_EnterIdBookUpdateRecord->AutoSize = true;
			this->label_EnterIdBookUpdateRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_EnterIdBookUpdateRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_EnterIdBookUpdateRecord->Location = System::Drawing::Point(213, 74);
			this->label_EnterIdBookUpdateRecord->Name = L"label_EnterIdBookUpdateRecord";
			this->label_EnterIdBookUpdateRecord->Size = System::Drawing::Size(266, 43);
			this->label_EnterIdBookUpdateRecord->TabIndex = 0;
			this->label_EnterIdBookUpdateRecord->Text = L"Enter ID Book";
			// 
			// panel_UpdateRecord2
			// 
			this->panel_UpdateRecord2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_UpdateRecord2->Controls->Add(this->button_BackUpdateRecord2);
			this->panel_UpdateRecord2->Controls->Add(this->button_UpdateRecord);
			this->panel_UpdateRecord2->Controls->Add(this->textBox_BorrowedUpdateRecord);
			this->panel_UpdateRecord2->Controls->Add(this->textBox_TotalUpdateRecord);
			this->panel_UpdateRecord2->Controls->Add(this->textBox_NameUpdateRecord);
			this->panel_UpdateRecord2->Controls->Add(this->label_BorrowedUpdateRecord);
			this->panel_UpdateRecord2->Controls->Add(this->label_TotalUpdateRecord);
			this->panel_UpdateRecord2->Controls->Add(this->label_NameUpdateRecord);
			this->panel_UpdateRecord2->Location = System::Drawing::Point(696, 245);
			this->panel_UpdateRecord2->Name = L"panel_UpdateRecord2";
			this->panel_UpdateRecord2->Size = System::Drawing::Size(909, 520);
			this->panel_UpdateRecord2->TabIndex = 9;
			// 
			// button_BackUpdateRecord2
			// 
			this->button_BackUpdateRecord2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_BackUpdateRecord2->Location = System::Drawing::Point(67, 395);
			this->button_BackUpdateRecord2->Name = L"button_BackUpdateRecord2";
			this->button_BackUpdateRecord2->Size = System::Drawing::Size(213, 71);
			this->button_BackUpdateRecord2->TabIndex = 7;
			this->button_BackUpdateRecord2->Text = L"Back";
			this->button_BackUpdateRecord2->UseVisualStyleBackColor = true;
			this->button_BackUpdateRecord2->Click += gcnew System::EventHandler(this, &AdminOption::button_BackUpdateRecord2_Click);
			// 
			// button_UpdateRecord
			// 
			this->button_UpdateRecord->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button_UpdateRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UpdateRecord->Location = System::Drawing::Point(638, 395);
			this->button_UpdateRecord->Name = L"button_UpdateRecord";
			this->button_UpdateRecord->Size = System::Drawing::Size(213, 71);
			this->button_UpdateRecord->TabIndex = 6;
			this->button_UpdateRecord->Text = L"Update";
			this->button_UpdateRecord->UseVisualStyleBackColor = false;
			this->button_UpdateRecord->Click += gcnew System::EventHandler(this, &AdminOption::button_UpdateRecord_Click);
			// 
			// textBox_BorrowedUpdateRecord
			// 
			this->textBox_BorrowedUpdateRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_BorrowedUpdateRecord->Location = System::Drawing::Point(416, 276);
			this->textBox_BorrowedUpdateRecord->Name = L"textBox_BorrowedUpdateRecord";
			this->textBox_BorrowedUpdateRecord->Size = System::Drawing::Size(377, 49);
			this->textBox_BorrowedUpdateRecord->TabIndex = 5;
			// 
			// textBox_TotalUpdateRecord
			// 
			this->textBox_TotalUpdateRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_TotalUpdateRecord->Location = System::Drawing::Point(416, 170);
			this->textBox_TotalUpdateRecord->Name = L"textBox_TotalUpdateRecord";
			this->textBox_TotalUpdateRecord->Size = System::Drawing::Size(377, 49);
			this->textBox_TotalUpdateRecord->TabIndex = 4;
			// 
			// textBox_NameUpdateRecord
			// 
			this->textBox_NameUpdateRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NameUpdateRecord->Location = System::Drawing::Point(416, 72);
			this->textBox_NameUpdateRecord->Name = L"textBox_NameUpdateRecord";
			this->textBox_NameUpdateRecord->Size = System::Drawing::Size(377, 49);
			this->textBox_NameUpdateRecord->TabIndex = 3;
			// 
			// label_BorrowedUpdateRecord
			// 
			this->label_BorrowedUpdateRecord->AutoSize = true;
			this->label_BorrowedUpdateRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label_BorrowedUpdateRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_BorrowedUpdateRecord->Location = System::Drawing::Point(149, 282);
			this->label_BorrowedUpdateRecord->Name = L"label_BorrowedUpdateRecord";
			this->label_BorrowedUpdateRecord->Size = System::Drawing::Size(245, 43);
			this->label_BorrowedUpdateRecord->TabIndex = 2;
			this->label_BorrowedUpdateRecord->Text = L"BORROWED";
			// 
			// label_TotalUpdateRecord
			// 
			this->label_TotalUpdateRecord->AutoSize = true;
			this->label_TotalUpdateRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label_TotalUpdateRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_TotalUpdateRecord->Location = System::Drawing::Point(28, 180);
			this->label_TotalUpdateRecord->Name = L"label_TotalUpdateRecord";
			this->label_TotalUpdateRecord->Size = System::Drawing::Size(366, 43);
			this->label_TotalUpdateRecord->TabIndex = 1;
			this->label_TotalUpdateRecord->Text = L"TOTAL AVAILABLE";
			// 
			// label_NameUpdateRecord
			// 
			this->label_NameUpdateRecord->AutoSize = true;
			this->label_NameUpdateRecord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label_NameUpdateRecord->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_NameUpdateRecord->Location = System::Drawing::Point(264, 75);
			this->label_NameUpdateRecord->Name = L"label_NameUpdateRecord";
			this->label_NameUpdateRecord->Size = System::Drawing::Size(130, 43);
			this->label_NameUpdateRecord->TabIndex = 0;
			this->label_NameUpdateRecord->Text = L"NAME";
			// 
			// button_ViewStudentBorrowing
			// 
			this->button_ViewStudentBorrowing->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_ViewStudentBorrowing->Location = System::Drawing::Point(138, 396);
			this->button_ViewStudentBorrowing->Name = L"button_ViewStudentBorrowing";
			this->button_ViewStudentBorrowing->Size = System::Drawing::Size(477, 93);
			this->button_ViewStudentBorrowing->TabIndex = 10;
			this->button_ViewStudentBorrowing->Text = L"View Students Borrowing";
			this->button_ViewStudentBorrowing->UseVisualStyleBackColor = true;
			this->button_ViewStudentBorrowing->Click += gcnew System::EventHandler(this, &AdminOption::button_ViewStudentBorrowing_Click);
			// 
			// button_ViewAllStudentAccounts
			// 
			this->button_ViewAllStudentAccounts->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_ViewAllStudentAccounts->Location = System::Drawing::Point(138, 527);
			this->button_ViewAllStudentAccounts->Name = L"button_ViewAllStudentAccounts";
			this->button_ViewAllStudentAccounts->Size = System::Drawing::Size(477, 91);
			this->button_ViewAllStudentAccounts->TabIndex = 11;
			this->button_ViewAllStudentAccounts->Text = L"View All Student Accounts";
			this->button_ViewAllStudentAccounts->UseVisualStyleBackColor = true;
			this->button_ViewAllStudentAccounts->Click += gcnew System::EventHandler(this, &AdminOption::button_ViewAllStudentAccounts_Click);
			// 
			// AdminOption
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1918, 957);
			this->Controls->Add(this->button_ViewAllStudentAccounts);
			this->Controls->Add(this->button_ViewStudentBorrowing);
			this->Controls->Add(this->button_Back_AdminOption);
			this->Controls->Add(this->button_ViewAdminOption);
			this->Controls->Add(this->button_UpdateAdminOption);
			this->Controls->Add(this->button_DeleteAdminOption);
			this->Controls->Add(this->button_Add);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel_UpdateRecord);
			this->Controls->Add(this->panel_DeleteRecord);
			this->Controls->Add(this->panel_AddRecord);
			this->Controls->Add(this->panel_UpdateRecord2);
			this->Name = L"AdminOption";
			this->Text = L"AdminOption";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel_DeleteRecord->ResumeLayout(false);
			this->panel_DeleteRecord->PerformLayout();
			this->panel_AddRecord->ResumeLayout(false);
			this->panel_AddRecord->PerformLayout();
			this->panel_UpdateRecord->ResumeLayout(false);
			this->panel_UpdateRecord->PerformLayout();
			this->panel_UpdateRecord2->ResumeLayout(false);
			this->panel_UpdateRecord2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Back_AdminOption_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj2->Show();
	}
private: System::Void button_View_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_AddRecord->Hide();
	panel_DeleteRecord->Hide();
	panel_UpdateRecord->Hide();
	this->Hide();
	ViewAdminOption^ obj7 = gcnew ViewAdminOption(this);
	obj7->ShowDialog();
}
private: System::Void button_DeleteAdminOption_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_AddRecord->Hide();
	panel_UpdateRecord->Hide();
	panel_DeleteRecord->Show();
	panel_DeleteRecord->BringToFront();
}
private: System::Void button_DeleteRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStr = get_Correct_String(marshal_as<std::string>(textBox_Delete->Text));
	int counter = 0;
	for (int i = 0; i < 100; i++)
	{
		if(tempStr=="") //(textBox_Delete->Text == "" || textBox_Delete->Text == " ")
		{
			MessageBox::Show("Please fill in the Blank to delete","Error"
			,MessageBoxButtons::OK,MessageBoxIcon::Error);
			break;
		}
		else if(Data_Of_Gui[i].get_Book_Id()==tempStr)
		{
			string temp = "\0";
			Data_Of_Gui[i].set_Book_Id(temp);
			Data_Of_Gui[i].set_Book_Name(temp);
			int Num = 0;
			Data_Of_Gui[i].set_Total_Copies(Num);
			Data_Of_Gui[i].set_Borrowed_Book_Library(Num);
			MessageBox::Show("Item deleted Successfully", "Success",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
			Save_Data_Of_Library();
			panel_DeleteRecord->Hide();
			break;
		}
		else {
			counter++;
		}
	}
	if (counter == 100)
	{
		MessageBox::Show("Iteam doesn't exist in the Library", "Error", MessageBoxButtons::OK
			, MessageBoxIcon::Error);
	}
}
private: System::Void textBox_Delete_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_BackDeleteRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_DeleteRecord->Hide();

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_Add_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_DeleteRecord->Hide();
	panel_UpdateRecord->Hide();
	panel_AddRecord->Show();
	panel_AddRecord->BringToFront();
}
private: System::Void button_BackAddRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_AddRecord->Hide();
}
private: System::Void button_AddAddRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStr = get_Correct_String(marshal_as < std::string>(textBox_IdAddRecord->Text));
	std::string tempStr2 = get_Correct_String(marshal_as < std::string>(textBox_NameAddRecord->Text));
	std::string tempStr3 = get_Correct_String(marshal_as < std::string>(textBox_TotalAddRecord->Text));
	std::string tempStr4 = get_Correct_String(marshal_as < std::string>(textBox_BorrowedAddRecord->Text));
	int check = 1;
	for (int i = 0; i < 100; i++)
	{
		if (tempStr==""|| tempStr2 == ""|| tempStr3 == ""|| tempStr4 == "")
		{
			MessageBox::Show("Please Fill All The Blanks", "Error"
				,MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		else if (Data_Of_Gui[i].get_Book_Id() == tempStr)
		{
			MessageBox::Show("This ID already exists", "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
		else if (Data_Of_Gui[i].get_Book_Id() == "\0")
		{
			/*Data_Of_Gui[i].set_Book_Id(tempStr);
			Data_Of_Gui[i].set_Book_Name(tempStr2);*/
			for (int i = 0; i < tempStr3.length(); i++)
			{
				if (tempStr3[i] != '0' && tempStr3[i] != '1' && tempStr3[i] != '2'
					&& tempStr3[i] != '3' && tempStr3[i] != '4' && tempStr3[i] != '5'
					&& tempStr3[i] != '6' && tempStr3[i] != '7' && tempStr3[i] != '8' && tempStr3[i] != '9')
				{
					MessageBox::Show("Total Should Be A Number", "Error", MessageBoxButtons::OK
						, MessageBoxIcon::Error);
					check = 0;
					break;
				}
			}
			if (check == 0)
			{
				break;
			}
			for (int i = 0; i < tempStr4.length(); i++)
			{
				if (tempStr4[i] != '0' && tempStr4[i] != '1' && tempStr4[i] != '2'
					&& tempStr4[i] != '3' && tempStr4[i] != '4' && tempStr4[i] != '5'
					&& tempStr4[i] != '6' && tempStr4[i] != '7' && tempStr4[i] != '8' && tempStr4[i] != '9')
				{
					MessageBox::Show("Borrowed Should Be A Number", "Error", MessageBoxButtons::OK
						, MessageBoxIcon::Error);
					check = 0;
					break;
				}
			}
			if (check == 0)
			{
				break;
			}
			int Borrowed = stoi(tempStr4);
			int Total_Copies = stoi(tempStr3);
			if (Borrowed > Total_Copies)
			{
				MessageBox::Show("Borrowed Should Be Equal Or Smaller Than Total", "Error", MessageBoxButtons::OK
					, MessageBoxIcon::Error);
				check = 0;
			}
			if (check == 0)
			{
				break;
			}
			if(check==1)
			{
				Data_Of_Gui[i].set_Book_Id(tempStr);
				Data_Of_Gui[i].set_Book_Name(tempStr2);
				// nhớ code để ngta k nhập chữ

				Data_Of_Gui[i].set_Total_Copies(Total_Copies);
				
				Data_Of_Gui[i].set_Borrowed_Book_Library(Borrowed);
				MessageBox::Show("Record Added Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Save_Data_Of_Library();
				panel_AddRecord->Hide();

				break;
			}
		}
	}
}
private: System::Void button_UpdateAdminOption_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_AddRecord->Hide();
	panel_DeleteRecord->Hide();
	panel_UpdateRecord->Show();
	panel_UpdateRecord->BringToFront();

}
	public: int j;
private: System::Void button_NextUpdateRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string tempStr = get_Correct_String(marshal_as<std::string>(textBox_IdUpdateRecord->Text));
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		if (tempStr=="")
		{
			MessageBox::Show("Please Fill In The Blank", "Error", MessageBoxButtons::OK
				,MessageBoxIcon::Error);

			break;
		}
		else if (Data_Of_Gui[i].get_Book_Id() == tempStr)
		{
			MessageBox::Show("Item Founded", "Success", MessageBoxButtons::OK,
				MessageBoxIcon::Information);
			j = i;

			panel_UpdateRecord->Hide();
			panel_UpdateRecord2->Show();
			panel_UpdateRecord2->BringToFront();
			break;
		}
		else
		{
			count++;
		}
		if (count == 100)
		{
			MessageBox::Show("Invalid Item! Please Try Again", "Error", MessageBoxButtons::OK
				, MessageBoxIcon::Error);
		}
			
	}
}
private: System::Void button_UpdateRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	int check = 1;
	int checkTotal = 1;
	int checkBorrowed = 1;
	int checkBorrowdSmallerTotal = 1;
	std::string tempStr1 = get_Correct_String(marshal_as<std::string>(textBox_NameUpdateRecord->Text));
	std::string tempStr2 = get_Correct_String(marshal_as<std::string>(textBox_TotalUpdateRecord->Text));
	std::string tempStr3 = get_Correct_String(marshal_as<std::string>(textBox_BorrowedUpdateRecord->Text));
	while (check)
	{
		if (tempStr1==""|| tempStr2 == ""|| tempStr3 == "")
		{
			MessageBox::Show("Please Fill In All The Blanks", "Error", MessageBoxButtons::OK
				, MessageBoxIcon::Error);
			check = 0;
			break;

		}
		else
		{
			
			for (int i = 0; i < tempStr2.length(); i++)
			{
				if (tempStr2[i] != '0' && tempStr2[i] != '1' && tempStr2[i] != '2'
					&& tempStr2[i] != '3' && tempStr2[i] != '4' && tempStr2[i] != '5'
					&& tempStr2[i] != '6' && tempStr2[i] != '7' && tempStr2[i] != '8' && tempStr2[i] != '9')
				{
					MessageBox::Show("Total Should Be A Number", "Error", MessageBoxButtons::OK
						, MessageBoxIcon::Error);
					checkTotal = 0;
					check = 0;
					break;
				}
			}
			
			for (int i = 0; i < tempStr3.length(); i++)
			{
				if (tempStr3[i] != '0' && tempStr3[i] != '1' && tempStr3[i] != '2'
					&& tempStr3[i] != '3' && tempStr3[i] != '4' && tempStr3[i] != '5'
					&& tempStr3[i] != '6' && tempStr3[i] != '7' && tempStr3[i] != '8' && tempStr3[i] != '9')
				{
					MessageBox::Show("Borrowed Should Be A Number", "Error", MessageBoxButtons::OK
						, MessageBoxIcon::Error);
					checkBorrowed = 0;
					check = 0;
					break;
				}
			}
			if (checkTotal != 0 && checkBorrowed != 0)
			{
				int TotalUpdate = stoi(tempStr2), BorrowedUpdate = stoi(tempStr3);
				if (TotalUpdate < BorrowedUpdate)
				{
					MessageBox::Show("Borrowed Book Should Be Smaller Than Total Book", "Error", MessageBoxButtons::OK
						, MessageBoxIcon::Error);
					check = 0;
					break;
				}
				else
				{
					Data_Of_Gui[j].set_Book_Id(get_Correct_String(marshal_as<std::string>(textBox_IdUpdateRecord->Text)));
					Data_Of_Gui[j].set_Book_Name(tempStr1);
					Data_Of_Gui[j].set_Total_Copies(TotalUpdate);
					Data_Of_Gui[j].set_Borrowed_Book_Library(BorrowedUpdate);
					MessageBox::Show("Item Updated Successfully", "Success", MessageBoxButtons::OK
						, MessageBoxIcon::Information);
					Save_Data_Of_Library();
					

					panel_UpdateRecord2->Hide();
					panel_UpdateRecord->Hide();
					break;
				}
			}
			
		}
	}
}
private: System::Void button_BackUpdateRecord2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_UpdateRecord2->Hide();
}
private: System::Void button_BackUpdateRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_UpdateRecord->Hide();
}
private: System::Void button_ViewStudentBorrowing_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	panel_AddRecord->Hide();
	panel_DeleteRecord->Hide();
	panel_UpdateRecord->Hide();
	ViewStudentsBorrowing^ OpenViewStudentBorrowing = gcnew ViewStudentsBorrowing(this);
	OpenViewStudentBorrowing->Show();
}
private: System::Void button_ViewAllStudentAccount(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_ViewAllStudentAccounts_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ViewAllStudentAccounts^ gridAllStudents = gcnew ViewAllStudentAccounts(this);
	gridAllStudents->Show();
}
private: System::Void label_IdAddRecord_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
