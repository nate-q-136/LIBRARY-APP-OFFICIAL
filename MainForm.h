#pragma once
#include"AdminOption.h"
#include"SignIn_Register.h"

namespace PBL2APP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		bool flag = true;
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

		}*/
		
		MainForm(void)
		{
			
			
			InitializeComponent();
			/*if (flag)
			{
				Load_Data_Of_Library();
				flag = false;
			}*/
			//
			//TODO: Add the constructor code here
			//
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel2;

	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel_SignIn;
	private: System::Windows::Forms::Button^ button_Back;
	private: System::Windows::Forms::Label^ label_Pass;
	private: System::Windows::Forms::Label^ label_ID;
	private: System::Windows::Forms::TextBox^ textBox_Pass;
	private: System::Windows::Forms::TextBox^ textBox_ID;
	private: System::Windows::Forms::Button^ button_Enter;

	private: System::Windows::Forms::PictureBox^ pictureBox1;































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->panel_SignIn = (gcnew System::Windows::Forms::Panel());
			this->label_Pass = (gcnew System::Windows::Forms::Label());
			this->label_ID = (gcnew System::Windows::Forms::Label());
			this->textBox_Pass = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->button_Enter = (gcnew System::Windows::Forms::Button());
			this->button_Back = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel_SignIn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Goldenrod;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(384, 888);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(54, 571);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(248, 75);
			this->button3->TabIndex = 2;
			this->button3->Text = L"END";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(58, 408);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(244, 81);
			this->button2->TabIndex = 1;
			this->button2->Text = L"USER";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LemonChiffon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(54, 254);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(248, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ADMIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::IndianRed;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Location = System::Drawing::Point(404, 13);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1252, 131);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(159, 27);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(876, 67);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"LIBRARY HOME";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Location = System::Drawing::Point(3, 124);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1252, 724);
			this->panel4->TabIndex = 4;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1088, 27);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 65);
			this->button5->TabIndex = 3;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(1162, 27);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 67);
			this->button4->TabIndex = 2;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// panel_SignIn
			// 
			this->panel_SignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel_SignIn->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_SignIn->Controls->Add(this->label_Pass);
			this->panel_SignIn->Controls->Add(this->label_ID);
			this->panel_SignIn->Controls->Add(this->textBox_Pass);
			this->panel_SignIn->Controls->Add(this->textBox_ID);
			this->panel_SignIn->Controls->Add(this->button_Enter);
			this->panel_SignIn->Controls->Add(this->button_Back);
			this->panel_SignIn->Location = System::Drawing::Point(407, 162);
			this->panel_SignIn->Name = L"panel_SignIn";
			this->panel_SignIn->Size = System::Drawing::Size(1246, 708);
			this->panel_SignIn->TabIndex = 3;
			// 
			// label_Pass
			// 
			this->label_Pass->AutoSize = true;
			this->label_Pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Pass->Location = System::Drawing::Point(161, 319);
			this->label_Pass->Name = L"label_Pass";
			this->label_Pass->Size = System::Drawing::Size(142, 51);
			this->label_Pass->TabIndex = 6;
			this->label_Pass->Text = L"PASS";
			// 
			// label_ID
			// 
			this->label_ID->AutoSize = true;
			this->label_ID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ID->Location = System::Drawing::Point(203, 194);
			this->label_ID->Name = L"label_ID";
			this->label_ID->Size = System::Drawing::Size(67, 51);
			this->label_ID->TabIndex = 5;
			this->label_ID->Text = L"ID";
			// 
			// textBox_Pass
			// 
			this->textBox_Pass->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Pass->Location = System::Drawing::Point(343, 319);
			this->textBox_Pass->Name = L"textBox_Pass";
			this->textBox_Pass->Size = System::Drawing::Size(547, 44);
			this->textBox_Pass->TabIndex = 4;
			this->textBox_Pass->UseSystemPasswordChar = true;
			this->textBox_Pass->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox_Pass_TextChanged);
			// 
			// textBox_ID
			// 
			this->textBox_ID->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_ID->Location = System::Drawing::Point(343, 197);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(547, 44);
			this->textBox_ID->TabIndex = 3;
			this->textBox_ID->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox_ID_TextChanged);
			// 
			// button_Enter
			// 
			this->button_Enter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_Enter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Enter->Location = System::Drawing::Point(621, 439);
			this->button_Enter->Name = L"button_Enter";
			this->button_Enter->Size = System::Drawing::Size(285, 62);
			this->button_Enter->TabIndex = 2;
			this->button_Enter->Text = L"Enter";
			this->button_Enter->UseVisualStyleBackColor = false;
			this->button_Enter->Click += gcnew System::EventHandler(this, &MainForm::button_Enter_Click);
			// 
			// button_Back
			// 
			this->button_Back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Back->Location = System::Drawing::Point(325, 439);
			this->button_Back->Name = L"button_Back";
			this->button_Back->Size = System::Drawing::Size(285, 62);
			this->button_Back->TabIndex = 1;
			this->button_Back->Text = L"Back";
			this->button_Back->UseVisualStyleBackColor = true;
			this->button_Back->Click += gcnew System::EventHandler(this, &MainForm::button_Back_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(404, 152);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1255, 748);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(1740, 944);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel_SignIn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel_SignIn->ResumeLayout(false);
			this->panel_SignIn->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) { 
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//SignIn_Admin^ frm = gcnew SignIn_Admin(this);
		//frm->Show();
		pictureBox1->Hide();
		panel_SignIn->Show();
		panel_SignIn->BringToFront();
		textBox_ID->Text = "";
		textBox_Pass->Text = "";
		
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_SignIn->Hide();
	pictureBox1->Show();
}
private: System::Void textBox_ID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button_Enter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox_ID->Text == "admin")
	{
		if (textBox_Pass->Text == "1234")
		{
			MessageBox::Show("Sign In Success! Hello admin");
			AdminOption^ obj1 = gcnew AdminOption(this);
			this->Hide();
			pictureBox1->Show();
			pictureBox1->BringToFront();
			panel_SignIn->Hide();
			obj1->Show();
		}
		else {
			MessageBox::Show("Incorrect Password");
		}
	}
	else {
		MessageBox::Show("User doesn't exist!");
	}

}
private: System::Void button_BackUser_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_UserSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel_User_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SignIn_Register^ obj3 = gcnew SignIn_Register(this);
	panel_SignIn->Hide();
	pictureBox1->Show();
	this->Hide();
	obj3->Show();
}
private: System::Void textBox_Pass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
