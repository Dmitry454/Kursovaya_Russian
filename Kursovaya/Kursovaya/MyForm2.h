#pragma once

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		bool checkRow = false;
		bool checkColumn = false;
		int numOfRow = 0;
		int numOfColumn = 0;
		bool analyseRed = false;
		bool analyseGreen = false;
		bool analyseBlue = false;
		bool analyseGrey = false;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	public:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	public:  Bitmap^ image;

		MyForm2(Bitmap^ img)
		{
			InitializeComponent();
			image = img;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
				chart1->Series["Osc"]->Points->Clear();
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите тип осциллограммы:\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(310, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Выберите тип изображения:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Введите номер строки/столбца:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(189, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"Номер пиксела в строке/столбце";
			chartArea1->AxisY->Title = L"Яркость";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 132);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Osc";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(711, 300);
			this->chart1->TabIndex = 6;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(502, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 57);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(15, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(163, 60);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(75, 17);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"по строке\r\n";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 37);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(80, 17);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"по столбцу";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton2_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Location = System::Drawing::Point(313, 26);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(148, 100);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 19);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(116, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"цветное - канал R";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 35);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(116, 17);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"цветное - канал G";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 51);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(115, 17);
			this->radioButton5->TabIndex = 2;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"цветное - канал B";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 77);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(89, 17);
			this->radioButton6->TabIndex = 3;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"полутоновое";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton6_CheckedChanged);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 464);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"Осцилограмма";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Osc"]->Points->Clear();
	if (checkRow)
	{
		numOfRow = Convert::ToInt16(textBox1->Text);
		if (analyseRed)
		{
			for (int i = 0; i < image->Width; i++)
			{
				Color cl = image->GetPixel(i, numOfRow);
				chart1->Series["Osc"]->Points->AddXY(i, cl.R);
			}
		}
		else if (analyseGreen)
		{
			for (int i = 0; i < image->Width; i++)
			{
				Color cl = image->GetPixel(i, numOfRow);
				chart1->Series["Osc"]->Points->AddXY(i, cl.G);
			}
		}
		else if (analyseBlue)
		{
			for (int i = 0; i < image->Width; i++)
			{
				Color cl = image->GetPixel(i, numOfRow);
				chart1->Series["Osc"]->Points->AddXY(i, cl.B);
			}
		}
		else if (analyseGrey)
		{
			for (int i = 0; i < image->Width; i++)
			{
				Color cl = image->GetPixel(i, numOfRow);
				chart1->Series["Osc"]->Points->AddXY(i, cl.R);
			}
		}
	}
	else
	{
		numOfColumn = Convert::ToInt16(textBox1->Text);
		if (analyseRed)
		{
			for (int i = 0; i < image->Height; i++)
			{
				Color cl = image->GetPixel(numOfColumn, i);
				chart1->Series["Osc"]->Points->AddXY(i, cl.R);
			}
		}
		else if (analyseGreen)
		{
			for (int i = 0; i < image->Height; i++)
			{
				Color cl = image->GetPixel(numOfColumn, i);
				chart1->Series["Osc"]->Points->AddXY(i, cl.R);
			}
		}
		else if (analyseBlue)
		{
			for (int i = 0; i < image->Height; i++)
			{
				Color cl = image->GetPixel(numOfColumn, i);
				chart1->Series["Osc"]->Points->AddXY(i, cl.R);
			}
		}
		else if (analyseGrey)
		{
			for (int i = 0; i < image->Height; i++)
			{
				Color cl = image->GetPixel(numOfColumn, i);
				chart1->Series["Osc"]->Points->AddXY(i, cl.R);
			}
		}
	}
}
	   // По строке 
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkRow = true;
	checkColumn = false;
}
	   // По столбцу
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkRow = false;
	checkColumn = true;
}
	   // цветное - канал R
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	analyseRed = true;
	analyseGreen = false;
	analyseBlue = false;
	analyseGrey = false;
}
	   // цветное - канал G
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	analyseRed = false;
	analyseGreen = true;
	analyseBlue = false;
	analyseGrey = false;
}
	   // цветное - канал B
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	analyseRed = false;
	analyseGreen = false;
	analyseBlue = true;
	analyseGrey = false;
}
	   // Полутоновое
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	analyseRed = false;
	analyseGreen = false;
	analyseBlue = false;
	analyseGrey = true;
}
};
}
