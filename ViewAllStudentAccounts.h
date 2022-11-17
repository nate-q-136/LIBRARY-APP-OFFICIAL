#pragma once
#include"objDeclerationFile.h"
namespace PBL2APP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewAllStudentAccounts
	/// </summary>
	public ref class ViewAllStudentAccounts : public System::Windows::Forms::Form
	{
	public:
		Form^ AdminOptionPage;
		DataTable^ AvailableBooks = gcnew DataTable();
	public:int IndexCounter = 1;
		ViewAllStudentAccounts(Form^ tempForm)
		{

			AdminOptionPage = tempForm;
			InitializeComponent();
			Load_Data_Of_User();
			for (int i = 0; i < 100; i++)
			{
				if (Data_Of_Gui[i].get_Student_Id()!="\0")
					createnewrow();

			}
			//
			//TODO: Add the constructor code here
			//
		}
		ViewAllStudentAccounts(void)
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
		~ViewAllStudentAccounts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_BackViewAllStudentAccounts;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_BackViewAllStudentAccounts = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(39, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1048, 653);
			this->dataGridView1->TabIndex = 0;
			// 
			// button_BackViewAllStudentAccounts
			// 
			this->button_BackViewAllStudentAccounts->Location = System::Drawing::Point(945, 701);
			this->button_BackViewAllStudentAccounts->Name = L"button_BackViewAllStudentAccounts";
			this->button_BackViewAllStudentAccounts->Size = System::Drawing::Size(267, 89);
			this->button_BackViewAllStudentAccounts->TabIndex = 1;
			this->button_BackViewAllStudentAccounts->Text = L"Back";
			this->button_BackViewAllStudentAccounts->UseVisualStyleBackColor = true;
			this->button_BackViewAllStudentAccounts->Click += gcnew System::EventHandler(this, &ViewAllStudentAccounts::button_BackViewAllStudentAccounts_Click);
			// 
			// ViewAllStudentAccounts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1242, 804);
			this->Controls->Add(this->button_BackViewAllStudentAccounts);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ViewAllStudentAccounts";
			this->Text = L"ViewAllStudentAccounts";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:void createnewrow()
	{
		if (AvailableBooks->Rows->Count <= 0)
		{
			AvailableBooks->Columns->Add("ID");

			AvailableBooks->Columns->Add("NAME");

			AvailableBooks->Columns->Add("PASSWORD");

			if (Data_Of_Gui[0].get_Student_Id() != "\0")
			{
				
				AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[0].get_Student_Id().c_str())
					, gcnew String(Data_Of_Gui[0].get_Student_Name().c_str())
					, gcnew String(Data_Of_Gui[0].get_Student_Pass().c_str()));
			}
			else
			{

				AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Student_Id().c_str())
					, gcnew String(Data_Of_Gui[IndexCounter].get_Student_Name().c_str())
					, gcnew String(Data_Of_Gui[IndexCounter].get_Student_Pass().c_str()));
				IndexCounter++;
			}
			dataGridView1->DataSource = AvailableBooks;

		}
		else
		{
			if (Data_Of_Gui[IndexCounter].get_Student_Id() != "\0")
			{
				AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Student_Id().c_str())
					, gcnew String(Data_Of_Gui[IndexCounter].get_Student_Name().c_str())
					, gcnew String(Data_Of_Gui[IndexCounter].get_Student_Pass().c_str()));
				dataGridView1->DataSource = AvailableBooks;
				IndexCounter++;
			}
		}
	}
	private: System::Void button_BackViewAllStudentAccounts_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AdminOptionPage->Show();
	}
	};
}
