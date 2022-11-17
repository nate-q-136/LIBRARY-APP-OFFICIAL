#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace PBL2APP {

	/// <summary>
	/// Summary for Input_Admin
	/// </summary>
	public ref class Input_Admin : public System::Windows::Forms::UserControl
	{
	public:
		Input_Admin(void)
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
		~Input_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(274, 306);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(548, 62);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Input_Admin::textBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(108, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 55);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pass:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Orange;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(205, 98);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(644, 111);
			this->panel1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(142, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADMIN LOGIN";
			// 
			// Input_Admin
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Input_Admin";
			this->Size = System::Drawing::Size(1086, 721);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
