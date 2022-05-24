#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include <math.h>

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			groupBox1->Hide();
			groupBox2->Hide();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->���ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(824, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�������ToolStripMenuItem,
					this->���������ToolStripMenuItem, this->������������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click_1);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->������������ToolStripMenuItem->Text = L"������������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click_1);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click_1);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->������1ToolStripMenuItem,
					this->������2ToolStripMenuItem, this->������3ToolStripMenuItem, this->������4ToolStripMenuItem, this->������5ToolStripMenuItem
			});
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			// 
			// ������1ToolStripMenuItem
			// 
			this->������1ToolStripMenuItem->Name = L"������1ToolStripMenuItem";
			this->������1ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->������1ToolStripMenuItem->Text = L"������ 1";
			this->������1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������1ToolStripMenuItem_Click_1);
			// 
			// ������2ToolStripMenuItem
			// 
			this->������2ToolStripMenuItem->Name = L"������2ToolStripMenuItem";
			this->������2ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->������2ToolStripMenuItem->Text = L"������ 2";
			this->������2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������2ToolStripMenuItem_Click_1);
			// 
			// ������3ToolStripMenuItem
			// 
			this->������3ToolStripMenuItem->Name = L"������3ToolStripMenuItem";
			this->������3ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->������3ToolStripMenuItem->Text = L"������ 3";
			this->������3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������3ToolStripMenuItem_Click_1);
			// 
			// ������4ToolStripMenuItem
			// 
			this->������4ToolStripMenuItem->Name = L"������4ToolStripMenuItem";
			this->������4ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->������4ToolStripMenuItem->Text = L"������ 4";
			this->������4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������4ToolStripMenuItem_Click_1);
			// 
			// ������5ToolStripMenuItem
			// 
			this->������5ToolStripMenuItem->Name = L"������5ToolStripMenuItem";
			this->������5ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->������5ToolStripMenuItem->Text = L"������ 5";
			this->������5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������5ToolStripMenuItem_Click_1);
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������������ToolStripMenuItem,
					this->����������������ToolStripMenuItem
			});
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->����������������ToolStripMenuItem->Text = L"��������� �������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click_1);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->����������������ToolStripMenuItem->Text = L"��������� �������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click_1);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click_1);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(580, 425);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(577, 425);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(395, 465);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 13);
			this->label11->TabIndex = 29;
			this->label11->Text = L"B:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(319, 466);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"G:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(239, 466);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"R:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(161, 466);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"y:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(83, 466);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"x:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(418, 465);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(343, 465);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(263, 466);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(182, 465);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(104, 466);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 466);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Size";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(617, 426);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 13);
			this->label12->TabIndex = 31;
			this->label12->Text = L"�������";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(608, 462);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(214, 17);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->Text = L"��������� � �������� �����������";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckStateChanged_1);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Location = System::Drawing::Point(608, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 118);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������� ������ q1 � q2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(70, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 63);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(19, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"q2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 27);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"q1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(608, 174);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 93);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�� ������� ��� ��������� ����������� (����� ����� > 1)";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(168, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"���������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 487);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"�������� �����������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ img1;
		bool imageUploaded = false;
		int halfOfThePicture = 0, ScaleCounter = 100;
		int q1 = 0, q2 = 255;
		double scale = 1;
		int operationNum= 0;
		bool checkedFlag = 0;

		// �������
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//������� CLI ������ � ������� ������������, ������������ �� ���� ��� �����
		//� ���������� � ������� gcnew ��������� (^) �� CLI ������
		img1 = gcnew Bitmap(openFileDialog1->FileName);
		imageUploaded = true;
		halfOfThePicture = img1->Width;

		//������� CLI ������ � ������� ������������, ������������ �� ���� ������ //��������
		//� ���������� � ������� gcnew ��������� (^) �� CLI ������ 
		//� ������� �� ����������� ������������, ������ ����������� ������� ������ //��������� ������� (������ ��������)
		//������� ����������� ������ �� ���������!

		//Bitmap^ img2 = gcnew Bitmap(img1->Width, img1->Height);
		pictureBox1->Image = img1;
		pictureBox1->Size = img1->Size;

		// ������ � ��������(���������� � ����� 1)
		label1->Text = img1->Width + "x" + img1->Height;
		label12->Text = "";
		label12->Text = (ScaleCounter).ToString() + "%";
	}
}
private: System::Void ���������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "BitMap files (*.bmp)|*.bmp|JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (System::Windows::Forms::DialogResult::OK == saveFileDialog1->ShowDialog())
	{
		Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
		bmp->Save(saveFileDialog1->FileName);
	}
}

private: System::Void ������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Hide();
	groupBox2->Hide();
	pictureBox1->Image = img1;
	label1->Text = img1->Width + "x" + img1->Height;
	ScaleCounter = 100;
	label12->Text = "";
	label12->Text = (ScaleCounter).ToString() + "%";
}

private: System::Void �����ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

private: System::Void ����������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (ScaleCounter < 400 && imageUploaded)
	{
		ScaleCounter += 10;
		scale += 0.1;
		Bitmap^ bitmap1 = gcnew Bitmap(pictureBox1->Image);
		Graphics^ Gr1 = Graphics::FromImage(bitmap1);
		Bitmap^ bitmap2 = gcnew Bitmap(bitmap1->Width * scale, bitmap1->Height * scale, Gr1);
		Graphics^ Gr2 = Graphics::FromImage(bitmap2);
		Rectangle compressionRectangle = Rectangle(0, 0, bitmap1->Width * scale, bitmap1->Height * scale);
		Gr2->DrawImage(bitmap1, compressionRectangle);
		pictureBox1->Image = bitmap2;
		pictureBox1->Size = bitmap2->Size;

		//���������� � ����� 12 ���������� ��������� �� ���������������
		label12->Text = "";
		label12->Text = (ScaleCounter).ToString() + "%";

		//���������� � ����� 1 ������ ������������ �����������
		label1->Text = bitmap2->Width + "x" + bitmap2->Height;
		
		scale = 1;
	}
}
private: System::Void ����������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (ScaleCounter < 400 && imageUploaded)
	{
		ScaleCounter -= 10;
		scale -= 0.1;
		Bitmap^ bitmap1 = gcnew Bitmap(pictureBox1->Image);
		Graphics^ Gr1 = Graphics::FromImage(bitmap1);
		Bitmap^ bitmap2 = gcnew Bitmap(bitmap1->Width * scale, bitmap1->Height * scale, Gr1);
		Graphics^ Gr2 = Graphics::FromImage(bitmap2);
		Rectangle compressionRectangle = Rectangle(0, 0, bitmap1->Width * scale, bitmap1->Height * scale);
		Gr2->DrawImage(bitmap1, compressionRectangle);
		pictureBox1->Image = bitmap2;
		pictureBox1->Size = bitmap2->Size;

		//���������� � ����� 12 ���������� ��������� �� ���������������
		label12->Text = "";
		label12->Text = (ScaleCounter).ToString() + "%";

		//���������� � ����� 1 ������ ������������ �����������
		label1->Text = bitmap2->Width + "x" + bitmap2->Height;
		
		scale = 1;
	}
}

private: System::Void �������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f2 = gcnew MyForm1();
	f2->Show();
}

    //���� �� ���������� ����� �� pictureBox1
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// ��������, ��� �������� ���������
	if (imageUploaded)
	{
		Bitmap^ img2 = gcnew Bitmap(pictureBox1->Image);
		// ��������, ��� �� �� ������� �� ������� �����������
		if ((e->X > 0) && (e->X < img2->Width) &&
			(e->Y > 0) && (e->Y < img2->Height))
		{
			// ���������� x (���������� � ����� 2)
			label2->Text = Convert::ToString(e->X);
			// ���������� y (���������� � ����� 3)
			label3->Text = Convert::ToString(e->Y);

			Color current_p = img2->GetPixel(e->X, e->Y);
			// ���������� �������� ������ � ��������������� ������
			label4->Text = Convert::ToString(current_p.R);
			label5->Text = Convert::ToString(current_p.G);
			label6->Text = Convert::ToString(current_p.B);
		}
	}
}
	// ������ 1.10 (����������)
private: System::Void ������1ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 1;

	Bitmap^ img2 = gcnew Bitmap(pictureBox1->Image);
	//�������� �� ������� ������� �����������
	for (int i = 0; i < img2->Width; i++)
	{
		for (int j = 0; j < img2->Height; j++)
		{
			//� ����� ���� Color ��������� �������� ����� ������� �� ������� �����������
			Color cl1 = img2->GetPixel(i, j);
			//�������������� ������ ������ ���� Color ����� ���������� 
			// (R, G, B)
			float new_red = cl1.R;
			float new_green = 0;
			float new_blue = cl1.B;
			Color cl2 = Color::FromArgb(new_red, new_green, new_blue);
			//���������� � ��������������� ������� ������� �����������      
			//����� ����
			img2->SetPixel(i, j, cl2);
		}
		pictureBox1->Image = img2;
	}
}
	// ������ 2.6
private: System::Void ������2ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 2;
	groupBox1->Show();
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	q1 = Convert::ToInt16(textBox1->Text);
	q2 = Convert::ToInt16(textBox2->Text);
	double koef = q1 / q2;
	//groupBox2->Hide();
	//groupBox3->Hide();

	Bitmap ^ img2 = gcnew Bitmap(pictureBox1->Image);
	//�������� �� ������� ������� �����������
	for (int i = 0; i < img2->Width; i++)
	{
		for (int j = 0; j < img2->Height; j++)
		{
			//�������������� ������ ������ ���� Color ����� ���������� 
			// (R, G, B)
			float newRed;
			float newGreen;
			float newBlue;
			//� ����� ���� Color ��������� �������� ����� ������� �� ������� �����������
			Color cl1 = img2->GetPixel(i, j);
			if (cl1.R < q1) newRed = 0;
			else if(cl1.R > q2) newRed = 255;
			else {
				newRed = cl1.G * koef;
			}
			if (cl1.G < q1) newGreen = 0;
			else if (cl1.G > q2) newGreen = 255;
			else {
				newGreen = cl1.G * koef;
			}
			if (cl1.B < q1) newBlue = 0;
			else if (cl1.B > q2) newBlue = 255;
			else {
				newBlue = cl1.G * koef;
			}
			
			Color cl2 = Color::FromArgb(newRed, newGreen, newBlue);
			//���������� � ��������������� ������� ������� �����������      
			//����� ����
			img2->SetPixel(i, j, cl2);
		}
		pictureBox1->Image = img2;
	}
}

	// ������ 3.7 (������ ������)
private: System::Void ������3ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 3;
	int a[3][3];
	int b_matrix[3][3] = { {1, 2, 1}, {2, 4, 2}, {1, 2, 1} };
	Bitmap^ img2 = gcnew Bitmap(pictureBox1->Image);
	Bitmap^ img3 = gcnew Bitmap(img2->Width - 1, img2 -> Height - 1);
	for (int i = 1; i < img2->Width - 1; i++) {
		for (int j = 1; j < img2->Height - 1; j++) {
			int sum = 0;
			for (int k1 = -1; k1 <= 1; k1++) {
				for (int k2 = -1; k2 <= 1; k2++) {
					Color cl1 = img2->GetPixel(i + k1, j + k2);
					a[k1 + 1][k2 + 1] = b_matrix[k1 + 1][k2 + 1] * cl1.R;
					sum += a[k1 + 1][k2 + 1];
				}
			}
			Color cl2 = Color::FromArgb(int(sum / 16), int(sum / 16), int(sum / 16));
			img3->SetPixel(i, j, cl2);
		}
	}
	pictureBox1->Image = img3;
}
	// ������ 4.1
private: System::Void ������4ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Bitmap^ imgToPass = gcnew Bitmap(pictureBox1->Image);
	MyForm2^ Osc = gcnew MyForm2(imgToPass);
	Osc->Show();
}
	// ������ 5.3 ���������� �������� ����� ����������� ������� ���������� ������
private: System::Void ������5ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 5;
	groupBox2->Show();
}
	// ������� ������ "���������" �� ������ groupBox
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int scaleFilter5 = Convert::ToInt16(textBox3->Text);
	Bitmap^ img2 = gcnew Bitmap(pictureBox1->Image);
	int width = (img2->Width) * scaleFilter5;
	int height = (img2->Height) * scaleFilter5;
	Bitmap^ img3 = gcnew Bitmap(width, height);
	for (int i = 0; i < img2->Width; i++)
	{
		for (int j = 0; j < img2->Height; j++)
		{
			Color cl1 = img2->GetPixel(i, j);
			for (int column = 0; column < scaleFilter5; column++)
			{
				for (int row = 0; row < scaleFilter5; row++)
				{
					img3->SetPixel(i + row, j + column, cl1);
				}
			}
		}
	}
	pictureBox1->Image = img3;
}

	//���� �� ���������� ������ �� pictureBox1
private: System::Void pictureBox1_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// ��������, ��� �������� ���������
	if (imageUploaded)
	{
		Bitmap^ img2 = gcnew Bitmap(pictureBox1->Image);
		// ��������, ��� �� �� ������� �� ������� �����������
		if ((e->X > 0) && (e->X < img2->Width) &&
			(e->Y > 0) && (e->Y < img2->Height))
		{
			// ���������� x (���������� � ����� 2)
			label2->Text = Convert::ToString(e->X);
			// ���������� y (���������� � ����� 3)
			label3->Text = Convert::ToString(e->Y);

			Color current_p = img2->GetPixel(e->X, e->Y);
			// ���������� �������� ������ � ��������������� ������
			label4->Text = Convert::ToString(current_p.R);
			label5->Text = Convert::ToString(current_p.G);
			label6->Text = Convert::ToString(current_p.B);
		}
	}
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
	// ��������� � �������� �����������
	// ��������� ������� checkBox
private: System::Void checkBox1_CheckStateChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (checkedFlag)
	{
		halfOfThePicture *= 2;
		checkedFlag = 0;
	}
	else
	{
		halfOfThePicture /= 2;
		checkedFlag = 1;
	}
	if (imageUploaded)
	{
		Bitmap^ img2 = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ img3 = gcnew Bitmap(pictureBox1->Image);
		halfOfThePicture = (img2->Width) / 2;
		//��������� ������ ��������� img1 �� �������� img2
		for (int i = halfOfThePicture; i < img2->Width; i++)
		{
			for (int j = 0; j < img2->Height; j++)
			{
				//� ����� ���� Color ��������� �������� ����� ������� �� ������� �����������
				Color cl1 = img2->GetPixel(i, j);
				img3->SetPixel(i, j, cl1);
			}
		}

		switch (operationNum)
		{
		case 1:
			
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		}
	}
}
};
}
