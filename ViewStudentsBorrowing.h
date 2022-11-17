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
	/// Summary for ViewStudentsBorrowing
	/// </summary>
	public ref class ViewStudentsBorrowing : public System::Windows::Forms::Form
	{
	public:
		ViewStudentsBorrowing(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DataTable^ AvailableBooks = gcnew DataTable();
		Form^ AdminOptionPage;
	public:int IndexCounter = 1;
		  
		ViewStudentsBorrowing(Form^ tempForm)
		{
			AdminOptionPage = tempForm;
			InitializeComponent();
			
				
				Load_Data_Of_Borrowed_Book();
				Load_Data_Of_Library();
				
			
			for (int i = 0; i < 100; i++)
			{
				if (Data_Of_Gui[i].get_Borrow_Student_Id() != "\0")
				{
					createnewrow();
				}
			}
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewStudentsBorrowing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button_BackViewStudentsBorrowing;
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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button_BackViewStudentsBorrowing = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1025, 635);
			this->dataGridView1->TabIndex = 0;
			// 
			// button_BackViewStudentsBorrowing
			// 
			this->button_BackViewStudentsBorrowing->Location = System::Drawing::Point(880, 711);
			this->button_BackViewStudentsBorrowing->Name = L"button_BackViewStudentsBorrowing";
			this->button_BackViewStudentsBorrowing->Size = System::Drawing::Size(239, 78);
			this->button_BackViewStudentsBorrowing->TabIndex = 1;
			this->button_BackViewStudentsBorrowing->Text = L"Back";
			this->button_BackViewStudentsBorrowing->UseVisualStyleBackColor = true;
			this->button_BackViewStudentsBorrowing->Click += gcnew System::EventHandler(this, &ViewStudentsBorrowing::button_BackViewStudentsBorrowing_Click);
			// 
			// ViewStudentsBorrowing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1155, 821);
			this->Controls->Add(this->button_BackViewStudentsBorrowing);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ViewStudentsBorrowing";
			this->Text = L"ViewStudentsBorrowing";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:void createnewrow()
		{
			if (AvailableBooks->Rows->Count <= 0)
			{
				AvailableBooks->Columns->Add("ID STUDENT");

				AvailableBooks->Columns->Add("ID ITEM");

				AvailableBooks->Columns->Add("NUMBER ARE BEING BORROWED");

				AvailableBooks->Columns->Add("BORROW DATE");

				AvailableBooks->Columns->Add("RETURN DATE");
				if (Data_Of_Gui[0].get_Borrow_Student_Id()!="\0")
				{
					string temp_Number_Are_Borrowed = to_string(Data_Of_Gui[0].get_Number_Borrowed_Book());
					string temp_Borrow_Date = to_string(Data_Of_Gui[0].get_Borrow_Date().day) + "/" + to_string(Data_Of_Gui[0].get_Borrow_Date().month)
						+ "/" + to_string(Data_Of_Gui[0].get_Borrow_Date().year);
					string temp_Return_Date = to_string(Data_Of_Gui[0].get_Return_Date().day) + "/" + to_string(Data_Of_Gui[0].get_Return_Date().month)
						+ "/" + to_string(Data_Of_Gui[0].get_Return_Date().year);
					
					AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[0].get_Borrow_Student_Id().c_str()), gcnew String(Data_Of_Gui[0].get_Borrowed_Book_Id().c_str())
						, gcnew String(temp_Number_Are_Borrowed.c_str()), gcnew String(temp_Borrow_Date.c_str()), gcnew String(temp_Return_Date.c_str()));
				}
				else {
					string temp_Number_Are_Borrowed = to_string(Data_Of_Gui[IndexCounter].get_Number_Borrowed_Book());
					string temp_Borrow_Date = to_string(Data_Of_Gui[IndexCounter].get_Borrow_Date().day) + "/" + to_string(Data_Of_Gui[IndexCounter].get_Borrow_Date().month)
						+ "/" + to_string(Data_Of_Gui[IndexCounter].get_Borrow_Date().year);
					string temp_Return_Date = to_string(Data_Of_Gui[IndexCounter].get_Return_Date().day) + "/" + to_string(Data_Of_Gui[IndexCounter].get_Return_Date().month)
						+ "/" + to_string(Data_Of_Gui[IndexCounter].get_Return_Date().year);
					
					AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Borrow_Student_Id().c_str()), gcnew String(Data_Of_Gui[IndexCounter].get_Borrowed_Book_Id().c_str())
						, gcnew String(temp_Number_Are_Borrowed.c_str()), gcnew String(temp_Borrow_Date.c_str()), gcnew String(temp_Return_Date.c_str()));
				
					IndexCounter++;
				}
				dataGridView1->DataSource = AvailableBooks;

			}
			else
			{
				if (Data_Of_Gui[IndexCounter].get_Book_Id() != "\0" && (Data_Of_Gui[IndexCounter].get_Total_Copies() - Data_Of_Gui[IndexCounter].get_Borrowed_Book_Library()) != 0)
				{
					string temp_Number_Are_Borrowed = to_string(Data_Of_Gui[IndexCounter].get_Number_Borrowed_Book());
					string temp_Borrow_Date = to_string(Data_Of_Gui[IndexCounter].get_Borrow_Date().day) + "/" + to_string(Data_Of_Gui[IndexCounter].get_Borrow_Date().month)
						+ "/" + to_string(Data_Of_Gui[IndexCounter].get_Borrow_Date().year);
					string temp_Return_Date = to_string(Data_Of_Gui[IndexCounter].get_Return_Date().day) + "/" + to_string(Data_Of_Gui[IndexCounter].get_Return_Date().month)
						+ "/" + to_string(Data_Of_Gui[IndexCounter].get_Return_Date().year);
					AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Borrow_Student_Id().c_str()), gcnew String(Data_Of_Gui[IndexCounter].get_Borrowed_Book_Id().c_str())
						, gcnew String(temp_Number_Are_Borrowed.c_str()), gcnew String(temp_Borrow_Date.c_str()), gcnew String(temp_Return_Date.c_str()));
					dataGridView1->DataSource = AvailableBooks;
					IndexCounter++;
				}
			}



			
		}
	private: System::Void button_BackViewStudentsBorrowing_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AdminOptionPage->Show();
	}
	};
}
