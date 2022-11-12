#pragma once
#include <string>
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack;
	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnClear;
	protected:


	private: System::Windows::Forms::Button^ btnClearAll;

	private: System::Windows::Forms::Button^ btnPlusMinus;


	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnAdd;





	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn2;


	private: System::Windows::Forms::Button^ btn5;


	private: System::Windows::Forms::Button^ btn0;

	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnMult;


	private: System::Windows::Forms::Button^ btnSub;






	private: System::Windows::Forms::Button^ btnDecimal;


	private: System::Windows::Forms::Button^ btnEqual;


	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtDisplay2;



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
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Wingdings", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBack->Location = System::Drawing::Point(20, 133);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(132, 54);
			this->btnBack->TabIndex = 0;
			this->btnBack->Text = L"Õ\r\n";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Form1::btnBack_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(20, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(578, 115);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &Form1::txtDisplay_TextChanged);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(167, 133);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(132, 54);
			this->btnClear->TabIndex = 2;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// btnClearAll
			// 
			this->btnClearAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClearAll->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnClearAll->Location = System::Drawing::Point(316, 133);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Size = System::Drawing::Size(132, 54);
			this->btnClearAll->TabIndex = 3;
			this->btnClearAll->Text = L"CE";
			this->btnClearAll->UseVisualStyleBackColor = true;
			this->btnClearAll->Click += gcnew System::EventHandler(this, &Form1::btnClearAll_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusMinus->Location = System::Drawing::Point(466, 133);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(132, 54);
			this->btnPlusMinus->TabIndex = 4;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &Form1::btnPlusMinus_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(20, 193);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(132, 54);
			this->btn7->TabIndex = 6;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(167, 193);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(132, 54);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(316, 193);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(132, 54);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(466, 193);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(132, 54);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::ArithmeticOP);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(20, 314);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(132, 54);
			this->btn1->TabIndex = 13;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(20, 254);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(132, 54);
			this->btn4->TabIndex = 12;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(167, 314);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(132, 54);
			this->btn2->TabIndex = 15;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(167, 254);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(132, 54);
			this->btn5->TabIndex = 14;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(20, 374);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(132, 54);
			this->btn0->TabIndex = 16;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn3->Location = System::Drawing::Point(316, 314);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(132, 54);
			this->btn3->TabIndex = 19;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(316, 254);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(132, 54);
			this->btn6->TabIndex = 18;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::NumbersOnly);
			// 
			// btnMult
			// 
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(466, 314);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(132, 54);
			this->btnMult->TabIndex = 21;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &Form1::ArithmeticOP);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(466, 254);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(132, 54);
			this->btnSub->TabIndex = 20;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &Form1::ArithmeticOP);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(167, 374);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(132, 54);
			this->btnDecimal->TabIndex = 30;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &Form1::btnDecimal_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(316, 374);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(132, 54);
			this->btnEqual->TabIndex = 32;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &Form1::btnEqual_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(466, 374);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(132, 54);
			this->btnDiv->TabIndex = 34;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::ArithmeticOP);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(20, 434);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 54);
			this->button1->TabIndex = 35;
			this->button1->Text = L"^";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::btnExponent);
			// 
			// txtDisplay2
			// 
			this->txtDisplay2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay2->Location = System::Drawing::Point(604, 12);
			this->txtDisplay2->Multiline = true;
			this->txtDisplay2->Name = L"txtDisplay2";
			this->txtDisplay2->Size = System::Drawing::Size(267, 476);
			this->txtDisplay2->TabIndex = 36;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 507);
			this->Controls->Add(this->txtDisplay2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnClearAll);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnBack);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double firstNum, secondNum, answer, first;
		int counter = 0;
		String^ charOP;
		String^ originalOP;

#pragma endregion
	private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {
		Button^ numb = safe_cast<Button^>(sender);
		if (txtDisplay->Text == "0") {
			txtDisplay->Text = numb->Text;
		}
		else {
			txtDisplay->Text = txtDisplay->Text + numb->Text;
		}
	}
private: System::Void ArithmeticOP(System::Object^ sender, System::EventArgs^ e) {
	Button^ aOP = safe_cast<Button^>(sender);
	firstNum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	charOP = aOP->Text;

}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
	charOP = "";
	counter = 0;
}
private: System::Void btnClearAll_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
	txtDisplay2->Text = "";
	charOP = "";
	counter = 0;
}
private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0) {
		//txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length-1, 1);
		counter = 0;
		charOP = "";
	}
}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
}
private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (counter = 0) {
	//	secondNum = Double::Parse(txtDisplay->Text);
	//}
	first = firstNum;
	
	if (charOP == "+") {
		if (counter == 0) {
			secondNum = Double::Parse(txtDisplay->Text);
			answer = firstNum + secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			originalOP = charOP;
			//counter++;
		}
		else {
			if (originalOP != charOP) {
				secondNum = Double::Parse(txtDisplay->Text);
				originalOP = charOP;
				//counter = 0;
			}
			answer = firstNum + secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			//counter++;
		}
		//secondNum = Double::Parse(txtDisplay->Text);
		//answer = firstNum + secondNum;
		//txtDisplay->Text = System::Convert::ToString(answer);
		//secondNum = firstNum;
		//firstNum = answer;
		
		/*if (counter == 0) {
			secondNum = Double::Parse(txtDisplay->Text);
			answer = firstNum + secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			counter++;
		}
		else {
			answer = firstNum + secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			counter++;
		}*/

	}
	else if (charOP == "-") {
		if (counter == 0) {
			secondNum = Double::Parse(txtDisplay->Text);
			answer = firstNum - secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			originalOP = charOP;
			//counter++;
		}
		else {
			if (originalOP != charOP) {
				secondNum = Double::Parse(txtDisplay->Text);
				originalOP = charOP;
				//counter = 0;
			}
			answer = firstNum - secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			//counter++;
		}
		//secondNum = Double::Parse(txtDisplay->Text);
		//answer = firstNum - secondNum;
		//txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOP == "/") {
		//answer = firstNum / secondNum;
		//txtDisplay->Text = System::Convert::ToString(answer);
		if (counter == 0) {
			secondNum = Double::Parse(txtDisplay->Text);
			answer = firstNum / secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			originalOP = charOP;
			//counter++;
		}
		else {
			if (originalOP != charOP) {
				secondNum = Double::Parse(txtDisplay->Text);
				originalOP = charOP;
				//counter = 0;
			}
			answer = firstNum / secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			//counter++;
		}
	}
	else if (charOP == "*") {
		//answer = firstNum * secondNum;
		//txtDisplay->Text = System::Convert::ToString(answer);
		if (counter == 0) {
			secondNum = Double::Parse(txtDisplay->Text);
			answer = firstNum * secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			originalOP = charOP;
			//counter++;
		}
		else {
			if (originalOP != charOP) {
				secondNum = Double::Parse(txtDisplay->Text);
				originalOP = charOP;
				//counter = 0;
			}
			answer = firstNum * secondNum;
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			//counter++;
		}
	}
	else if (charOP == "^") {
		//answer = pow(firstNum, secondNum);
		//txtDisplay->Text = System::Convert::ToString(answer);
		if (counter == 0) {
			secondNum = Double::Parse(txtDisplay->Text);
			answer = pow(firstNum, secondNum);
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			originalOP = charOP;
			//counter++;
		}
		else {
			if (originalOP != charOP) {
				secondNum = Double::Parse(txtDisplay->Text);
				originalOP = charOP;
				//counter = 0;
			}
			answer = pow(firstNum, secondNum);
			txtDisplay->Text = System::Convert::ToString(answer);
			firstNum = answer;
			//counter++;
		}
	}
	if (charOP != "") {
		counter++;
		txtDisplay2->Text += System::Convert::ToString(first) + " " + System::Convert::ToString(charOP) + " " + System::Convert::ToString(secondNum) + " = " + System::Convert::ToString(answer) + "\r\n";
	}
	//secondNum = firstNum;
	//firstNum = answer;
	
}

private: System::Void btnExponent(System::Object^ sender, System::EventArgs^ e) {
	Button^ aOP = safe_cast<Button^>(sender);
	firstNum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	charOP = aOP->Text;
}
private: System::Void txtDisplay2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
