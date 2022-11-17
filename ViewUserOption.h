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
	/// Summary for ViewUserOption
	/// </summary>
	public ref class ViewUserOption : public System::Windows::Forms::Form
	{
	public:
		
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
		ViewUserOption(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DataTable^ AvailableBooks = gcnew DataTable();
	public:int IndexCounter = 1;
		  int turn = 1;
		  Form^ UserOptionForm;
		  ViewUserOption(Form^ tempForm)
		  {

			  UserOptionForm = tempForm;
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
		~ViewUserOption()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button_BackViewUserOption;

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
			this->button_BackViewUserOption = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(4, 20);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1192, 682);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewUserOption::dataGridView1_CellContentClick);
			// 
			// button_BackViewUserOption
			// 
			this->button_BackViewUserOption->Location = System::Drawing::Point(1089, 798);
			this->button_BackViewUserOption->Name = L"button_BackViewUserOption";
			this->button_BackViewUserOption->Size = System::Drawing::Size(287, 91);
			this->button_BackViewUserOption->TabIndex = 1;
			this->button_BackViewUserOption->Text = L"Back";
			this->button_BackViewUserOption->UseVisualStyleBackColor = true;
			this->button_BackViewUserOption->Click += gcnew System::EventHandler(this, &ViewUserOption::button_BackViewUserOption_Click);
			// 
			// ViewUserOption
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1429, 930);
			this->Controls->Add(this->button_BackViewUserOption);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ViewUserOption";
			this->Text = L"ViewUserOption";
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

				AvailableBooks->Columns->Add("TOTAL AVAILABLE");

				AvailableBooks->Columns->Add("BORROWED");
				if (Data_Of_Gui[0].get_Book_Id() != "\0")
				{
					string temp_Total_Copies = to_string(Data_Of_Gui[0].get_Total_Copies());
					string temp_Borrowed_Book_Library = to_string(Data_Of_Gui[0].get_Borrowed_Book_Library());
					AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[0].get_Book_Id().c_str()), gcnew String(Data_Of_Gui[0].get_Book_Name().c_str())
						, gcnew String(temp_Total_Copies.c_str()), gcnew String(temp_Borrowed_Book_Library.c_str()));
				}
				else {
					string temp_Total_Copies = to_string(Data_Of_Gui[IndexCounter].get_Total_Copies());
					string temp_Borrowed_Book_Library = to_string(Data_Of_Gui[IndexCounter].get_Borrowed_Book_Library());
					AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Book_Id().c_str()), gcnew String(Data_Of_Gui[IndexCounter].get_Book_Name().c_str())
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
					AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Book_Id().c_str()), gcnew String(Data_Of_Gui[IndexCounter].get_Book_Name().c_str())
						, gcnew String(temp_Total_Copies.c_str()), gcnew String(temp_Borrowed_Book_Library.c_str()));
					dataGridView1->DataSource = AvailableBooks;
					IndexCounter++;
				}
			}



			/*string temp_Total_Copies = to_string(Data_Of_Gui[IndexCounter].get_Total_Copies());
			string temp_Borrowed_Book_Library = to_string(Data_Of_Gui[IndexCounter].get_Borrowed_Book_Library());
			AvailableBooks->Rows->Add(gcnew String(Data_Of_Gui[IndexCounter].get_Book_Id().c_str()), "", gcnew String(Data_Of_Gui[IndexCounter].get_Book_Name().c_str())
				, "", gcnew String(temp_Total_Copies.c_str()), "", gcnew String(temp_Borrowed_Book_Library.c_str()));
			IndexCounter++;

			dataGridView1->DataSource = AvailableBooks;*/
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button_BackViewUserOption_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		UserOptionForm->Show();
	}
	};
}
