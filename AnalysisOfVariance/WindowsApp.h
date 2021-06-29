#pragma once
#include "String"
#include "UAV.h"
#include "TWAV.h"

namespace AnalysisOfVariance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int m, n, l;

	public ref class WindowsApp : public System::Windows::Forms::Form
	{
		
	public:
		WindowsApp(void)
		{
			InitializeComponent();
			textBox12->Enabled = false;
			m = Convert::ToInt32(textBox1->Text);
			n = Convert::ToInt32(textBox2->Text);
			dataGridView1->ColumnCount = m;
			dataGridView1->RowCount = n;
			dataGridView2->ColumnCount = 3;
			dataGridView2->RowCount = 3;
			dataGridView2->Columns[0]->HeaderText = "Сумма квадратов";
			dataGridView2->Columns[1]->HeaderText = "Число степеней свободы";
			dataGridView2->Columns[2]->HeaderText = "Средние квадраты";
			dataGridView2->Rows[0]->HeaderCell->Value = "Межгрупповая";
			dataGridView2->Rows[1]->HeaderCell->Value = "Внутригрупповая";
			dataGridView2->Rows[2]->HeaderCell->Value = "Общая";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~WindowsApp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(33, 24);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(341, 230);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WindowsApp::dataGridView1_CellContentClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(426, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(40, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(426, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(380, 105);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Обновить таблицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &WindowsApp::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(380, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Расчитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &WindowsApp::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(33, 481);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(167, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(207, 481);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(167, 20);
			this->textBox4->TabIndex = 6;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(33, 286);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 120;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->Size = System::Drawing::Size(341, 159);
			this->dataGridView2->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(380, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 35);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Пример задачи";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &WindowsApp::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(33, 584);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(341, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(33, 268);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 15);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Таблица Результатов расчетов:";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(33, 448);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 30);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Значение статистики:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(207, 448);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 30);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Критическое значение по таблице Фишера-Снедекора:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(33, 566);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(204, 15);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Результат на уровне значимости 0,05:";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(380, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 20);
			this->label5->TabIndex = 14;
			this->label5->Text = L"m = ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(380, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"n = ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(380, 187);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(92, 17);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"2-факторный";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &WindowsApp::checkBox1_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(33, 507);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(167, 20);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(33, 533);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(167, 20);
			this->textBox7->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(207, 507);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(167, 20);
			this->textBox8->TabIndex = 19;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(207, 533);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(167, 20);
			this->textBox9->TabIndex = 20;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(33, 610);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(341, 20);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(33, 636);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(341, 20);
			this->textBox11->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(380, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 20);
			this->label7->TabIndex = 24;
			this->label7->Text = L"l = ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(426, 76);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(40, 20);
			this->textBox12->TabIndex = 23;
			this->textBox12->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Location = System::Drawing::Point(7, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 93);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Ф\n а\n к\n т\n о\n р\n 1";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Location = System::Drawing::Point(33, 6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 15);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Фактор 1";
			// 
			// WindowsApp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 663);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"WindowsApp";
			this->Text = L"Решение задач дисперсионного анализа";
			this->Load += gcnew System::EventHandler(this, &WindowsApp::WindowsApp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}

    // Update button
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		m = Convert::ToInt32(textBox1->Text);
		n = Convert::ToInt32(textBox2->Text);

		if (checkBox1->Checked)
		{
			l = Convert::ToInt32(textBox12->Text);
			dataGridView1->ColumnCount = n * l;
			dataGridView1->RowCount = m;
			for (int j = 0; j < l; j++) {
				for (int k = 0; k < n; k++) {
					dataGridView1->Columns[k + n * j]->HeaderText = Convert::ToString(k + 1);
				}
			}
		}
		else {
			dataGridView1->ColumnCount = m;
			dataGridView1->RowCount = n;
		}
		
	}

    // Caclulate
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		m = Convert::ToInt32(textBox1->Text);
		n = Convert::ToInt32(textBox2->Text);
		l = Convert::ToInt32(textBox12->Text);
		Matrix mat(m, std::vector<double>(n));
		Matrix3 mat3(m, std::vector<std::vector<double>>(l, std::vector<double>(n)));

		if (checkBox1->Checked)
		{
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < l; j++) {
					for (int k = 0; k < n; k++) {
						mat3[i][j][k] = Convert::ToDouble(dataGridView1[k + n * j, i]->Value);
					}
				}
			}
			double q1 = Q1(mat3, m, l, n);
			double q2 = Q2(mat3, m, l, n);
			double q3 = Q3(mat3, m, l, n);
			double q4 = Q4(mat3, m, l, n);
			double qGen = QGen(mat3, m, l, n);

			dataGridView2[0, 0]->Value = q1;
			dataGridView2[0, 1]->Value = q2;
			dataGridView2[0, 2]->Value = q3;
			dataGridView2[0, 3]->Value = q4;
			dataGridView2[0, 4]->Value = qGen;

			int PowFr1 = m - 1;
			int PowFr2 = l - 1;
			int PowFr3 = (m - 1) * (l - 1);
			int PowFr4 = m * l * n - m * l;
			dataGridView2[1, 0]->Value = PowFr1;
			dataGridView2[1, 1]->Value = PowFr2;
			dataGridView2[1, 2]->Value = PowFr3;
			dataGridView2[1, 3]->Value = PowFr4;
			dataGridView2[1, 4]->Value = m * l * n - 1;

			dataGridView2[2, 0]->Value = q1 / PowFr1;
			dataGridView2[2, 1]->Value = q2 / PowFr2;
			dataGridView2[2, 2]->Value = q3 / PowFr3;
			dataGridView2[2, 3]->Value = q4 / PowFr4;

			double resFB = (q1 / PowFr1) / (q4 / PowFr4);
			double resFA = (q2 / PowFr2) / (q4 / PowFr4);
			double resFAB = (q3 / PowFr3) / (q4 / PowFr4);

			textBox3->Text = "F(1) = " + Convert::ToString(resFB);
			textBox6->Text = "F(2) = " + Convert::ToString(resFA);
			textBox7->Text = "F(1&2) = " + Convert::ToString(resFAB);

			textBox4->Text = "F(0,05;" + PowFr1 + ";" + PowFr4 + ") = " + Convert::ToString(FisherSned[PowFr4 - 1][PowFr1 - 1]);
			textBox8->Text = "F(0,05;" + PowFr2 + ";" + PowFr4 + ") = " + Convert::ToString(FisherSned[PowFr4 - 1][PowFr2 - 1]);
			textBox9->Text = "F(0,05;" + PowFr3 + ";" + PowFr4 + ") = " + Convert::ToString(FisherSned[PowFr4 - 1][PowFr3 - 1]);

			if (resFB > FisherSned[PowFr4 - 1][PowFr1 - 1])
			{
				textBox5->Text = "Фактор 1 влияет на результат";
			}
			else {
				textBox5->Text = "Фактор 1 не влияет на результат";
			}

			if (resFA > FisherSned[PowFr4 - 1][PowFr2 - 1])
			{
				textBox10->Text = "Фактор 2 влияет на результат";
			}
			else {
				textBox10->Text = "Фактор 2 не влияет на результат";
			}

			if (resFAB > FisherSned[PowFr4 - 1][PowFr3 - 1])
			{
				textBox11->Text = "Совокупность факторов 1 и 2 влияет на результат";
			}
			else {
				textBox11->Text = "Совокупность факторов 1 и 2 не влияет на результат";
			}
		}
		else {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					mat[i][j] = Convert::ToDouble(dataGridView1[i, j]->Value);
				}
			}

			dataGridView2[0, 0]->Value = Convert::ToString((SumOfQuadOfSum(mat, m, n) / n) - QuadOfSums(mat, m, n) / (m * n));
			dataGridView2[0, 1]->Value = Convert::ToString(SumsOfQuad(mat, m, n) - (SumOfQuadOfSum(mat, m, n) / n));
			dataGridView2[0, 2]->Value = Convert::ToString(SumsOfQuad(mat, m, n) - QuadOfSums(mat, m, n) / (m * n));

			dataGridView2[1, 0]->Value = m - 1;
			dataGridView2[1, 1]->Value = m * n - m;
			dataGridView2[1, 2]->Value = m * n - 1;
			int PowFree1 = m - 1;
			int PowFree2 = m * n - m;

			dataGridView2[2, 0]->Value = Convert::ToString(IntergroupMidQuad(mat, m, n));
			dataGridView2[2, 1]->Value = Convert::ToString(IntragroupMidQuad(mat, m, n));

			double resF = Convert::ToDouble(dataGridView2[2, 0]->Value) / Convert::ToDouble(dataGridView2[2, 1]->Value);

			textBox3->Text = "F = " + Convert::ToString(resF);
			textBox4->Text = "F(0,05;" + PowFree1 + ";" + PowFree2 + ") = " + Convert::ToString(FisherSned[PowFree2 - 1][PowFree1 - 1]);

			if (resF > FisherSned[PowFree2 - 1][PowFree1 - 1])
			{
				textBox5->Text = "Фактор 1 влияет на результат";
			}
			else {
				textBox5->Text = "Фактор 1 не влияет на результат";
			}
			textBox6->Text = "";
			textBox7->Text = "";
			textBox8->Text = "";
			textBox9->Text = "";
			textBox10->Text = "";
			textBox11->Text = "";
		}
	}

	// PreSet
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			dataGridView1->ColumnCount = 9;
			dataGridView1->RowCount = 4;
			textBox1->Text = "4";
			textBox2->Text = "3";
			textBox12->Text = "3";
			dataGridView1[0, 0]->Value = "50";
			dataGridView1[0, 1]->Value = "54";
			dataGridView1[0, 2]->Value = "52";
			dataGridView1[0, 3]->Value = "60";
			dataGridView1[1, 0]->Value = "54";
			dataGridView1[1, 1]->Value = "46";
			dataGridView1[1, 2]->Value = "48";
			dataGridView1[1, 3]->Value = "55";
			dataGridView1[2, 0]->Value = "58";
			dataGridView1[2, 1]->Value = "50";
			dataGridView1[2, 2]->Value = "50";
			dataGridView1[2, 3]->Value = "56";
			dataGridView1[3, 0]->Value = "62";
			dataGridView1[3, 1]->Value = "64";
			dataGridView1[3, 2]->Value = "70";
			dataGridView1[3, 3]->Value = "58";
			dataGridView1[4, 0]->Value = "60";
			dataGridView1[4, 1]->Value = "59";
			dataGridView1[4, 2]->Value = "62";
			dataGridView1[4, 3]->Value = "54";
			dataGridView1[5, 0]->Value = "58";
			dataGridView1[5, 1]->Value = "60";
			dataGridView1[5, 2]->Value = "60";
			dataGridView1[5, 3]->Value = "50";
			dataGridView1[6, 0]->Value = "65";
			dataGridView1[6, 1]->Value = "59";
			dataGridView1[6, 2]->Value = "59";
			dataGridView1[6, 3]->Value = "71";
			dataGridView1[7, 0]->Value = "71";
			dataGridView1[7, 1]->Value = "54";
			dataGridView1[7, 2]->Value = "66";
			dataGridView1[7, 3]->Value = "74";
			dataGridView1[8, 0]->Value = "65";
			dataGridView1[8, 1]->Value = "61";
			dataGridView1[8, 2]->Value = "64";
			dataGridView1[8, 3]->Value = "62";
		}
		else
		{
			dataGridView1->ColumnCount = 5;
			dataGridView1->RowCount = 6;
			textBox1->Text = "5";
			textBox2->Text = "6";
			dataGridView1[0, 0]->Value = "1,2";
			dataGridView1[0, 1]->Value = "1,1";
			dataGridView1[0, 2]->Value = "1,0";
			dataGridView1[0, 3]->Value = "1,3";
			dataGridView1[0, 4]->Value = "1,1";
			dataGridView1[0, 5]->Value = "0,8";
			dataGridView1[1, 0]->Value = "0,6";
			dataGridView1[1, 1]->Value = "1,1";
			dataGridView1[1, 2]->Value = "0,8";
			dataGridView1[1, 3]->Value = "0,7";
			dataGridView1[1, 4]->Value = "0,7";
			dataGridView1[1, 5]->Value = "0,9";
			dataGridView1[2, 0]->Value = "0,9";
			dataGridView1[2, 1]->Value = "0,6";
			dataGridView1[2, 2]->Value = "0,8";
			dataGridView1[2, 3]->Value = "1,0";
			dataGridView1[2, 4]->Value = "1,0";
			dataGridView1[2, 5]->Value = "1,1";
			dataGridView1[3, 0]->Value = "1,7";
			dataGridView1[3, 1]->Value = "1,4";
			dataGridView1[3, 2]->Value = "1,3";
			dataGridView1[3, 3]->Value = "1,5";
			dataGridView1[3, 4]->Value = "1,2";
			dataGridView1[3, 5]->Value = "1,3";
			dataGridView1[4, 0]->Value = "1,0";
			dataGridView1[4, 1]->Value = "1,4";
			dataGridView1[4, 2]->Value = "1,1";
			dataGridView1[4, 3]->Value = "0,9";
			dataGridView1[4, 4]->Value = "1,2";
			dataGridView1[4, 5]->Value = "1,5";
		}
	}
	private: System::Void WindowsApp_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {  
	   
	   if (checkBox1->Checked)
	   {  
		  dataGridView2->ColumnCount = 3;
		  dataGridView2->RowCount = 5;
		  dataGridView2->Columns[0]->HeaderText = "Сумма квадратов";
		  dataGridView2->Columns[1]->HeaderText = "Число степеней свободы";
		  dataGridView2->Columns[2]->HeaderText = "Средние квадраты";
		  dataGridView2->Rows[0]->HeaderCell->Value = "Межгрупп. (1)";
		  dataGridView2->Rows[1]->HeaderCell->Value = "Межгрупп. (2)";
		  dataGridView2->Rows[2]->HeaderCell->Value = "Взаимод. (1&2)";
		  dataGridView2->Rows[3]->HeaderCell->Value = "Остаточная";
		  dataGridView2->Rows[4]->HeaderCell->Value = "Общая";
		  textBox12->Enabled = true;
		  label9->Text = L"Фактор 2";
		  label8->Text = L"Ф\n а\n к\n т\n о\n р\n 1";
		  label8->Visible = true;
	   }  
	   else  
	   {  
		  dataGridView2->ColumnCount = 3;
		  dataGridView2->RowCount = 3;
		  dataGridView2->Columns[0]->HeaderText = "Сумма квадратов";
		  dataGridView2->Columns[1]->HeaderText = "Число степеней свободы";
		  dataGridView2->Columns[2]->HeaderText = "Средние квадраты";
		  dataGridView2->Rows[0]->HeaderCell->Value = "Межгрупп.";
		  dataGridView2->Rows[1]->HeaderCell->Value = "Внутригрупп.";
		  dataGridView2->Rows[2]->HeaderCell->Value = "Общая";
		  dataGridView2[2, 2]->Value = "";
		  textBox12->Enabled = false;
		  label9->Text = L"Фактор 1";
		  label8->Text = L"";
		  label8->Visible = false;
	   }  
	}  
};
}
