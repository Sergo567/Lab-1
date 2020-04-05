#pragma once
#include"Monom.h"
#include"Polinomm.h"
#include <msclr\marshal_cppstd.h>
namespace PolinomF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Polinom
	/// </summary>
	public ref class Polinom : public System::Windows::Forms::Form
	{
	public:
		Polinom(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Polinom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Exite;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  MAXSTEP;
	private: System::Windows::Forms::Button^  SetN;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  DEL1POL;
	private: System::Windows::Forms::Button^  ADD2POL;
	private: System::Windows::Forms::Button^  DEL2POL;
	private: System::Windows::Forms::Button^  PLUS;
	private: System::Windows::Forms::Button^  MINUS;
	private: System::Windows::Forms::Button^  MULTIPLUI;
	private: System::Windows::Forms::Button^  MULTYPLUI_NA_CHISLO;








	private: System::Windows::Forms::Button^  Clear;
	private: System::Windows::Forms::Button^  MULTYPLUI_NA_CHISLO2;
	private: System::Windows::Forms::TextBox^  textBox9;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Exite = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->MAXSTEP = (gcnew System::Windows::Forms::Button());
			this->SetN = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->DEL1POL = (gcnew System::Windows::Forms::Button());
			this->ADD2POL = (gcnew System::Windows::Forms::Button());
			this->DEL2POL = (gcnew System::Windows::Forms::Button());
			this->PLUS = (gcnew System::Windows::Forms::Button());
			this->MINUS = (gcnew System::Windows::Forms::Button());
			this->MULTIPLUI = (gcnew System::Windows::Forms::Button());
			this->MULTYPLUI_NA_CHISLO = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->MULTYPLUI_NA_CHISLO2 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Exite
			// 
			this->Exite->Location = System::Drawing::Point(819, 286);
			this->Exite->Name = L"Exite";
			this->Exite->Size = System::Drawing::Size(75, 23);
			this->Exite->TabIndex = 0;
			this->Exite->Text = L"Exite";
			this->Exite->UseVisualStyleBackColor = true;
			this->Exite->Click += gcnew System::EventHandler(this, &Polinom::Exite_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Polinom1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Polinom2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Res";
			this->label3->Click += gcnew System::EventHandler(this, &Polinom::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(450, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Polinom::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(92, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(450, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(92, 222);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(450, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Polinom::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(92, 21);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Polinom::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(328, 21);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Polinom::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(602, 89);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Polinom::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(602, 138);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 10;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Polinom::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(548, 167);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(45, 20);
			this->textBox8->TabIndex = 11;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Polinom::textBox8_TextChanged);
			// 
			// MAXSTEP
			// 
			this->MAXSTEP->Location = System::Drawing::Point(207, 21);
			this->MAXSTEP->Name = L"MAXSTEP";
			this->MAXSTEP->Size = System::Drawing::Size(93, 23);
			this->MAXSTEP->TabIndex = 12;
			this->MAXSTEP->Text = L"Set Max Stepen";
			this->MAXSTEP->UseVisualStyleBackColor = true;
			this->MAXSTEP->Click += gcnew System::EventHandler(this, &Polinom::MAXSTEP_Click);
			// 
			// SetN
			// 
			this->SetN->Location = System::Drawing::Point(447, 21);
			this->SetN->Name = L"SetN";
			this->SetN->Size = System::Drawing::Size(95, 23);
			this->SetN->TabIndex = 13;
			this->SetN->Text = L"Set N";
			this->SetN->UseVisualStyleBackColor = true;
			this->SetN->Click += gcnew System::EventHandler(this, &Polinom::SetN_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(727, 87);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"ADD";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Polinom::button3_Click);
			// 
			// DEL1POL
			// 
			this->DEL1POL->Location = System::Drawing::Point(819, 87);
			this->DEL1POL->Name = L"DEL1POL";
			this->DEL1POL->Size = System::Drawing::Size(75, 23);
			this->DEL1POL->TabIndex = 15;
			this->DEL1POL->Text = L"DEL";
			this->DEL1POL->UseVisualStyleBackColor = true;
			this->DEL1POL->Click += gcnew System::EventHandler(this, &Polinom::DEL1POL_Click);
			// 
			// ADD2POL
			// 
			this->ADD2POL->Location = System::Drawing::Point(727, 136);
			this->ADD2POL->Name = L"ADD2POL";
			this->ADD2POL->Size = System::Drawing::Size(75, 23);
			this->ADD2POL->TabIndex = 16;
			this->ADD2POL->Text = L"ADD";
			this->ADD2POL->UseVisualStyleBackColor = true;
			this->ADD2POL->Click += gcnew System::EventHandler(this, &Polinom::ADD2POL_Click);
			// 
			// DEL2POL
			// 
			this->DEL2POL->Location = System::Drawing::Point(819, 135);
			this->DEL2POL->Name = L"DEL2POL";
			this->DEL2POL->Size = System::Drawing::Size(75, 23);
			this->DEL2POL->TabIndex = 17;
			this->DEL2POL->Text = L"DEL";
			this->DEL2POL->UseVisualStyleBackColor = true;
			this->DEL2POL->Click += gcnew System::EventHandler(this, &Polinom::DEL2POL_Click);
			// 
			// PLUS
			// 
			this->PLUS->Location = System::Drawing::Point(92, 180);
			this->PLUS->Name = L"PLUS";
			this->PLUS->Size = System::Drawing::Size(75, 23);
			this->PLUS->TabIndex = 18;
			this->PLUS->Text = L"+";
			this->PLUS->UseVisualStyleBackColor = true;
			this->PLUS->Click += gcnew System::EventHandler(this, &Polinom::PLUS_Click);
			// 
			// MINUS
			// 
			this->MINUS->Location = System::Drawing::Point(225, 180);
			this->MINUS->Name = L"MINUS";
			this->MINUS->Size = System::Drawing::Size(75, 23);
			this->MINUS->TabIndex = 19;
			this->MINUS->Text = L"-";
			this->MINUS->UseVisualStyleBackColor = true;
			this->MINUS->Click += gcnew System::EventHandler(this, &Polinom::MINUS_Click);
			// 
			// MULTIPLUI
			// 
			this->MULTIPLUI->Location = System::Drawing::Point(353, 180);
			this->MULTIPLUI->Name = L"MULTIPLUI";
			this->MULTIPLUI->Size = System::Drawing::Size(75, 23);
			this->MULTIPLUI->TabIndex = 20;
			this->MULTIPLUI->Text = L"*";
			this->MULTIPLUI->UseVisualStyleBackColor = true;
			this->MULTIPLUI->Click += gcnew System::EventHandler(this, &Polinom::MULTIPLUI_Click);
			// 
			// MULTYPLUI_NA_CHISLO
			// 
			this->MULTYPLUI_NA_CHISLO->Location = System::Drawing::Point(467, 164);
			this->MULTYPLUI_NA_CHISLO->Name = L"MULTYPLUI_NA_CHISLO";
			this->MULTYPLUI_NA_CHISLO->Size = System::Drawing::Size(75, 23);
			this->MULTYPLUI_NA_CHISLO->TabIndex = 21;
			this->MULTYPLUI_NA_CHISLO->Text = L"*K1";
			this->MULTYPLUI_NA_CHISLO->UseVisualStyleBackColor = true;
			this->MULTYPLUI_NA_CHISLO->Click += gcnew System::EventHandler(this, &Polinom::MULTYPLUI_NA_CHISLO_Click);
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(727, 286);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(75, 23);
			this->Clear->TabIndex = 22;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &Polinom::Clear_Click);
			// 
			// MULTYPLUI_NA_CHISLO2
			// 
			this->MULTYPLUI_NA_CHISLO2->Location = System::Drawing::Point(467, 193);
			this->MULTYPLUI_NA_CHISLO2->Name = L"MULTYPLUI_NA_CHISLO2";
			this->MULTYPLUI_NA_CHISLO2->Size = System::Drawing::Size(75, 23);
			this->MULTYPLUI_NA_CHISLO2->TabIndex = 23;
			this->MULTYPLUI_NA_CHISLO2->Text = L"*K2";
			this->MULTYPLUI_NA_CHISLO2->UseVisualStyleBackColor = true;
			this->MULTYPLUI_NA_CHISLO2->Click += gcnew System::EventHandler(this, &Polinom::MULTYPLUI_NA_CHISLO2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(548, 196);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(45, 20);
			this->textBox9->TabIndex = 24;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Polinom::textBox9_TextChanged);
			// 
			// Polinom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 321);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->MULTYPLUI_NA_CHISLO2);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->MULTYPLUI_NA_CHISLO);
			this->Controls->Add(this->MULTIPLUI);
			this->Controls->Add(this->MINUS);
			this->Controls->Add(this->PLUS);
			this->Controls->Add(this->DEL2POL);
			this->Controls->Add(this->ADD2POL);
			this->Controls->Add(this->DEL1POL);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->SetN);
			this->Controls->Add(this->MAXSTEP);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exite);
			this->Name = L"Polinom";
			this->Text = L"Polinom";
			this->Load += gcnew System::EventHandler(this, &Polinom::Polinom_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int max_step = -1, n = -1;
			polinomm* polinom1;
			polinomm* polinom2;
			polinomm* res;
	private: System::Void Polinom_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void Exite_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MAXSTEP_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ tmp = textBox4->Text;
	max_step = System::Convert::ToInt32(tmp);
	textBox4->ReadOnly = true;
	if (max_step != -1 && n != -1) {
		polinom1 = new polinomm("", n, max_step);
		polinom2 = new polinomm("", n, max_step);
	}
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void SetN_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String^ tmp = textBox5->Text;
	n = System::Convert::ToInt32(tmp);
	textBox5->ReadOnly = true;
	if (max_step != -1 && n != -1) {
		polinom1 = new polinomm("", n, max_step);
		polinom2 = new polinomm("", n, max_step);
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	String^ tmpS = textBox6->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* kek = new monom(tmp, max_step, n);
	polinom1->add(*kek);
	textBox1->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void DEL1POL_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	String^ tmpS = textBox6->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* kek = new monom(tmp, max_step, n);
	polinom1->erase(*kek);
	textBox1->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());
}
private: System::Void ADD2POL_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	String^ tmpS = textBox7->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* kek = new monom(tmp, max_step, n);
	polinom2->add(*kek);
	textBox2->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void DEL2POL_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	String^ tmpS = textBox7->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* kek = new monom(tmp, max_step, n);
	polinom2->erase(*kek);
	textBox2->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void PLUS_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	res = new polinomm(polinom1->operator+(*polinom2));
	textBox3->Text = msclr::interop::marshal_as<String^>(res->to_string());
}
private: System::Void MINUS_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	res = new polinomm(polinom1->operator-(*polinom2));
	textBox3->Text = msclr::interop::marshal_as<String^>(res->to_string());
}
private: System::Void MULTIPLUI_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	res = new polinomm(polinom1->operator*(*polinom2));
	textBox3->Text = msclr::interop::marshal_as<String^>(res->to_string());
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MULTYPLUI_NA_CHISLO_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	int k = System::Convert::ToInt32(textBox8->Text);
	res = new polinomm(polinom1->operator*(k));
	textBox3->Text = msclr::interop::marshal_as<String^>(res->to_string());
}
private: System::Void Clear_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->ReadOnly = false;
	textBox5->ReadOnly = false;
	textBox4->Clear();
	textBox5->Clear();
	n = -1;
	max_step = -1;
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox6->Clear();
	textBox7->Clear();
	textBox8->Clear();
	textBox9->Clear();
}
private: System::Void MULTYPLUI_NA_CHISLO2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (n == -1 || max_step == -1) {
		return;
	}
	int k = System::Convert::ToInt32(textBox8->Text);
	res = new polinomm(polinom2->operator*(k));
	textBox3->Text = msclr::interop::marshal_as<String^>(res->to_string());
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
