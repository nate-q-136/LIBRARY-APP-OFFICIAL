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
	/// Summary for ViewAdminOption
	/// </summary>
	public ref class ViewAdminOption : public System::Windows::Forms::Form
	{

	public:
		ViewAdminOption(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button_BackViewAdminOption;
	public:

	public:
		bool turn = 1;
		

		DataTable^ AvailableBooks = gcnew DataTable();
	public:int IndexCounter = 1;
		  Form^ AdminOptionForm;
		  ViewAdminOption(Form^ tempForm)
		  {

			  AdminOptionForm = tempForm;
			  InitializeComponent();
			  if (turn)
			  {
				  Load_Data_Of_Library();

			  }


			  for (int i = 0; i < 100; i++)
			  {
				  if (Data_Of_Gui[i].get_Book_Id() != "\0")
					  createnewrow();

			  }
			  ////
			  //TODO: Add the constructor code here
			  //
		  }



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewAdminOption()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_BackViewAdminOption = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(39, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1165, 788);
			this->dataGridView1->TabIndex = 0;
			// 
			// button_BackViewAdminOption
			// 
			this->button_BackViewAdminOption->Location = System::Drawing::Point(1273, 796);
			this->button_BackViewAdminOption->Name = L"button_BackViewAdminOption";
			this->button_BackViewAdminOption->Size = System::Drawing::Size(215, 78);
			this->button_BackViewAdminOption->TabIndex = 1;
			this->button_BackViewAdminOption->Text = L"Back";
			this->button_BackViewAdminOption->UseVisualStyleBackColor = true;
			this->button_BackViewAdminOption->Click += gcnew System::EventHandler(this, &ViewAdminOption::button_BackViewAdminOption_Click);
			// 
			// ViewAdminOption
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1510, 916);
			this->Controls->Add(this->button_BackViewAdminOption);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ViewAdminOption";
			this->Text = L"ViewAdminOption";
			this->Load += gcnew System::EventHandler(this, &ViewAdminOption::ViewAdminOption_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
		/*DataTable^ AvailableBooks = gcnew DataTable();
	public:int IndexCounter = 1;*/


	public:void createnewrow()
	{
		if (AvailableBooks->Rows->Count <= 0)
		{
			AvailableBooks->Columns->Add("ID");

			AvailableBooks->Columns->Add("NAME");

			AvailableBooks->Columns->Add("TOTAL AVAILABLE");

			AvailableBooks->Columns->Add("BORROWED");
			if (Data_Of_Gui[0].get_Book_Id() != "\0")
			{
				string temp_Total_Copies = to_string(Data_Of_Gui[0].get_Total_Copies());
				string temp_Borrowed_Book_Library = to_string(Data_Of_Gui[0].get_Borrowed_Book_Library());
				AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[0].get_Book_Id().c_str())
					, gcnew String(Data_Of_Gui[0].get_Book_Name().c_str())
					, gcnew String(temp_Total_Copies.c_str()), gcnew String(temp_Borrowed_Book_Library.c_str()));
			}
			else
			{
				string temp_Total_Copies = to_string(Data_Of_Gui[IndexCounter].get_Total_Copies());
				string temp_Borrowed_Book_Library = to_string(Data_Of_Gui[IndexCounter].get_Borrowed_Book_Library());
				AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Book_Id().c_str())
					, gcnew String(Data_Of_Gui[IndexCounter].get_Book_Name().c_str())
					, gcnew String(temp_Total_Copies.c_str()), gcnew String(temp_Borrowed_Book_Library.c_str()));
				IndexCounter++;
			}
			dataGridView1->DataSource = AvailableBooks;

		}
		else
		{
			if (Data_Of_Gui[IndexCounter].get_Book_Id() != "\0")
			{
				string temp_Total_Copies = to_string(Data_Of_Gui[IndexCounter].get_Total_Copies());
				string temp_Borrowed_Book_Library = to_string(Data_Of_Gui[IndexCounter].get_Borrowed_Book_Library());
				AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Book_Id().c_str())
					, gcnew String(Data_Of_Gui[IndexCounter].get_Book_Name().c_str())
					, gcnew String(temp_Total_Copies.c_str()), gcnew String(temp_Borrowed_Book_Library.c_str()));
				dataGridView1->DataSource = AvailableBooks;
				IndexCounter++;
			}
		}
	}
	private: System::Void ViewAdminOption_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void button_BackViewAdminOption_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AdminOptionForm->Show();

		//AdminOptionForm->ShowDialog();
	}
	};
}
