#include <string>
#include "code/systemclass.hpp"
#include "code/pinkLight.hpp"
#include "code/pinkData.hpp"
#include "code/pinkFredom.hpp"
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  uiTitle;
	private: System::Windows::Forms::TextBox^  formUserData;
	private: System::Windows::Forms::Label^  labelUserData;
	private: System::Windows::Forms::Label^  LabelUserTexts;
	private: System::Windows::Forms::TextBox^  formUserTexts;
	private: System::Windows::Forms::Label^  labelUserMinuets;
	private: System::Windows::Forms::TextBox^  formUserMinuets;
	private: System::Windows::Forms::Label^  labelUserDataUnits;
	private: System::Windows::Forms::Label^  labelUser080Minuets;
	private: System::Windows::Forms::TextBox^  formUser080Minuets;
	private: System::Windows::Forms::Label^  labelUserTetherSentUnits;
	private: System::Windows::Forms::Label^  labelUserTetherSent;
	private: System::Windows::Forms::TextBox^  formUserTetherSent;




	private: System::Windows::Forms::Label^  labelUserTetherReseavedUnits;

	private: System::Windows::Forms::Label^  labelUserTetherReseaved;
	private: System::Windows::Forms::TextBox^  formUserTetherReseaved;
	private: System::Windows::Forms::Label^  labelCurrentVat;
	private: System::Windows::Forms::Label^  labelCurrentVatUnits;
	private: System::Windows::Forms::TextBox^  formCurrentVat;
	private: System::Windows::Forms::Button^  buttonCalculateBill;
	private: System::Windows::Forms::Label^  labelUserBillHeader;
	private: System::Windows::Forms::Label^  labelUserBill;
	private: System::Windows::Forms::Label^  labelUserContract;
	private: System::Windows::Forms::ComboBox^  comboUserContract;
	private: System::Windows::Forms::Label^  labelUserBillVat;





	protected:

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
			this->uiTitle = (gcnew System::Windows::Forms::Label());
			this->formUserData = (gcnew System::Windows::Forms::TextBox());
			this->labelUserData = (gcnew System::Windows::Forms::Label());
			this->LabelUserTexts = (gcnew System::Windows::Forms::Label());
			this->formUserTexts = (gcnew System::Windows::Forms::TextBox());
			this->labelUserMinuets = (gcnew System::Windows::Forms::Label());
			this->formUserMinuets = (gcnew System::Windows::Forms::TextBox());
			this->labelUserDataUnits = (gcnew System::Windows::Forms::Label());
			this->labelUser080Minuets = (gcnew System::Windows::Forms::Label());
			this->formUser080Minuets = (gcnew System::Windows::Forms::TextBox());
			this->labelUserTetherSentUnits = (gcnew System::Windows::Forms::Label());
			this->labelUserTetherSent = (gcnew System::Windows::Forms::Label());
			this->formUserTetherSent = (gcnew System::Windows::Forms::TextBox());
			this->labelUserTetherReseavedUnits = (gcnew System::Windows::Forms::Label());
			this->labelUserTetherReseaved = (gcnew System::Windows::Forms::Label());
			this->formUserTetherReseaved = (gcnew System::Windows::Forms::TextBox());
			this->labelCurrentVat = (gcnew System::Windows::Forms::Label());
			this->labelCurrentVatUnits = (gcnew System::Windows::Forms::Label());
			this->formCurrentVat = (gcnew System::Windows::Forms::TextBox());
			this->buttonCalculateBill = (gcnew System::Windows::Forms::Button());
			this->labelUserBillHeader = (gcnew System::Windows::Forms::Label());
			this->labelUserBill = (gcnew System::Windows::Forms::Label());
			this->labelUserContract = (gcnew System::Windows::Forms::Label());
			this->comboUserContract = (gcnew System::Windows::Forms::ComboBox());
			this->labelUserBillVat = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// uiTitle
			// 
			this->uiTitle->AutoSize = true;
			this->uiTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uiTitle->Location = System::Drawing::Point(9, 9);
			this->uiTitle->Name = L"uiTitle";
			this->uiTitle->Size = System::Drawing::Size(240, 31);
			this->uiTitle->TabIndex = 0;
			this->uiTitle->Text = L"Pink Bill Calculator";
			this->uiTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// formUserData
			// 
			this->formUserData->Location = System::Drawing::Point(101, 70);
			this->formUserData->Name = L"formUserData";
			this->formUserData->Size = System::Drawing::Size(100, 20);
			this->formUserData->TabIndex = 1;
			// 
			// labelUserData
			// 
			this->labelUserData->AutoSize = true;
			this->labelUserData->Location = System::Drawing::Point(12, 73);
			this->labelUserData->Name = L"labelUserData";
			this->labelUserData->Size = System::Drawing::Size(58, 13);
			this->labelUserData->TabIndex = 2;
			this->labelUserData->Text = L"Data Used";
			// 
			// LabelUserTexts
			// 
			this->LabelUserTexts->AutoSize = true;
			this->LabelUserTexts->Location = System::Drawing::Point(12, 96);
			this->LabelUserTexts->Name = L"LabelUserTexts";
			this->LabelUserTexts->Size = System::Drawing::Size(58, 13);
			this->LabelUserTexts->TabIndex = 3;
			this->LabelUserTexts->Text = L"Texts Sent";
			// 
			// formUserTexts
			// 
			this->formUserTexts->Location = System::Drawing::Point(101, 93);
			this->formUserTexts->Name = L"formUserTexts";
			this->formUserTexts->Size = System::Drawing::Size(100, 20);
			this->formUserTexts->TabIndex = 4;
			// 
			// labelUserMinuets
			// 
			this->labelUserMinuets->AutoSize = true;
			this->labelUserMinuets->Location = System::Drawing::Point(12, 119);
			this->labelUserMinuets->Name = L"labelUserMinuets";
			this->labelUserMinuets->Size = System::Drawing::Size(44, 13);
			this->labelUserMinuets->TabIndex = 5;
			this->labelUserMinuets->Text = L"Minuets";
			// 
			// formUserMinuets
			// 
			this->formUserMinuets->Location = System::Drawing::Point(101, 116);
			this->formUserMinuets->Name = L"formUserMinuets";
			this->formUserMinuets->Size = System::Drawing::Size(100, 20);
			this->formUserMinuets->TabIndex = 6;
			// 
			// labelUserDataUnits
			// 
			this->labelUserDataUnits->AutoSize = true;
			this->labelUserDataUnits->Location = System::Drawing::Point(207, 73);
			this->labelUserDataUnits->Name = L"labelUserDataUnits";
			this->labelUserDataUnits->Size = System::Drawing::Size(23, 13);
			this->labelUserDataUnits->TabIndex = 7;
			this->labelUserDataUnits->Text = L"MB";
			// 
			// labelUser080Minuets
			// 
			this->labelUser080Minuets->AutoSize = true;
			this->labelUser080Minuets->Location = System::Drawing::Point(12, 142);
			this->labelUser080Minuets->Name = L"labelUser080Minuets";
			this->labelUser080Minuets->Size = System::Drawing::Size(65, 13);
			this->labelUser080Minuets->TabIndex = 8;
			this->labelUser080Minuets->Text = L"080 Minuets";
			// 
			// formUser080Minuets
			// 
			this->formUser080Minuets->Location = System::Drawing::Point(101, 139);
			this->formUser080Minuets->Name = L"formUser080Minuets";
			this->formUser080Minuets->Size = System::Drawing::Size(100, 20);
			this->formUser080Minuets->TabIndex = 9;
			// 
			// labelUserTetherSentUnits
			// 
			this->labelUserTetherSentUnits->AutoSize = true;
			this->labelUserTetherSentUnits->Location = System::Drawing::Point(207, 168);
			this->labelUserTetherSentUnits->Name = L"labelUserTetherSentUnits";
			this->labelUserTetherSentUnits->Size = System::Drawing::Size(23, 13);
			this->labelUserTetherSentUnits->TabIndex = 12;
			this->labelUserTetherSentUnits->Text = L"MB";
			// 
			// labelUserTetherSent
			// 
			this->labelUserTetherSent->AutoSize = true;
			this->labelUserTetherSent->Location = System::Drawing::Point(12, 166);
			this->labelUserTetherSent->Name = L"labelUserTetherSent";
			this->labelUserTetherSent->Size = System::Drawing::Size(63, 13);
			this->labelUserTetherSent->TabIndex = 11;
			this->labelUserTetherSent->Text = L"Tether Sent";
			// 
			// formUserTetherSent
			// 
			this->formUserTetherSent->Location = System::Drawing::Point(101, 163);
			this->formUserTetherSent->Name = L"formUserTetherSent";
			this->formUserTetherSent->Size = System::Drawing::Size(100, 20);
			this->formUserTetherSent->TabIndex = 10;
			// 
			// labelUserTetherReseavedUnits
			// 
			this->labelUserTetherReseavedUnits->AutoSize = true;
			this->labelUserTetherReseavedUnits->Location = System::Drawing::Point(207, 192);
			this->labelUserTetherReseavedUnits->Name = L"labelUserTetherReseavedUnits";
			this->labelUserTetherReseavedUnits->Size = System::Drawing::Size(23, 13);
			this->labelUserTetherReseavedUnits->TabIndex = 15;
			this->labelUserTetherReseavedUnits->Text = L"MB";
			// 
			// labelUserTetherReseaved
			// 
			this->labelUserTetherReseaved->AutoSize = true;
			this->labelUserTetherReseaved->Location = System::Drawing::Point(12, 190);
			this->labelUserTetherReseaved->Name = L"labelUserTetherReseaved";
			this->labelUserTetherReseaved->Size = System::Drawing::Size(90, 13);
			this->labelUserTetherReseaved->TabIndex = 14;
			this->labelUserTetherReseaved->Text = L"Tether Reseaved";
			// 
			// formUserTetherReseaved
			// 
			this->formUserTetherReseaved->Location = System::Drawing::Point(101, 187);
			this->formUserTetherReseaved->Name = L"formUserTetherReseaved";
			this->formUserTetherReseaved->Size = System::Drawing::Size(100, 20);
			this->formUserTetherReseaved->TabIndex = 13;
			// 
			// labelCurrentVat
			// 
			this->labelCurrentVat->AutoSize = true;
			this->labelCurrentVat->Location = System::Drawing::Point(12, 215);
			this->labelCurrentVat->Name = L"labelCurrentVat";
			this->labelCurrentVat->Size = System::Drawing::Size(28, 13);
			this->labelCurrentVat->TabIndex = 16;
			this->labelCurrentVat->Text = L"VAT";
			// 
			// labelCurrentVatUnits
			// 
			this->labelCurrentVatUnits->AutoSize = true;
			this->labelCurrentVatUnits->Location = System::Drawing::Point(207, 215);
			this->labelCurrentVatUnits->Name = L"labelCurrentVatUnits";
			this->labelCurrentVatUnits->Size = System::Drawing::Size(15, 13);
			this->labelCurrentVatUnits->TabIndex = 17;
			this->labelCurrentVatUnits->Text = L"%";
			// 
			// formCurrentVat
			// 
			this->formCurrentVat->Location = System::Drawing::Point(101, 212);
			this->formCurrentVat->Name = L"formCurrentVat";
			this->formCurrentVat->Size = System::Drawing::Size(100, 20);
			this->formCurrentVat->TabIndex = 18;
			// 
			// buttonCalculateBill
			// 
			this->buttonCalculateBill->Location = System::Drawing::Point(89, 242);
			this->buttonCalculateBill->Name = L"buttonCalculateBill";
			this->buttonCalculateBill->Size = System::Drawing::Size(75, 23);
			this->buttonCalculateBill->TabIndex = 19;
			this->buttonCalculateBill->Text = L"Calculate Bill";
			this->buttonCalculateBill->UseVisualStyleBackColor = true;
			this->buttonCalculateBill->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculateBill_Click);
			// 
			// labelUserBillHeader
			// 
			this->labelUserBillHeader->AutoSize = true;
			this->labelUserBillHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelUserBillHeader->Location = System::Drawing::Point(85, 268);
			this->labelUserBillHeader->Name = L"labelUserBillHeader";
			this->labelUserBillHeader->Size = System::Drawing::Size(102, 24);
			this->labelUserBillHeader->TabIndex = 20;
			this->labelUserBillHeader->Text = L"Your Bill Is:";
			// 
			// labelUserBill
			// 
			this->labelUserBill->AutoSize = true;
			this->labelUserBill->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->labelUserBill->Location = System::Drawing::Point(86, 295);
			this->labelUserBill->Name = L"labelUserBill";
			this->labelUserBill->Size = System::Drawing::Size(70, 13);
			this->labelUserBill->TabIndex = 21;
			this->labelUserBill->Text = L"Uncalculated";
			// 
			// labelUserContract
			// 
			this->labelUserContract->AutoSize = true;
			this->labelUserContract->Location = System::Drawing::Point(12, 47);
			this->labelUserContract->Name = L"labelUserContract";
			this->labelUserContract->Size = System::Drawing::Size(47, 13);
			this->labelUserContract->TabIndex = 22;
			this->labelUserContract->Text = L"Contract";
			// 
			// comboUserContract
			// 
			this->comboUserContract->FormattingEnabled = true;
			this->comboUserContract->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Light", L"Data", L"Fredom" });
			this->comboUserContract->Location = System::Drawing::Point(101, 44);
			this->comboUserContract->Name = L"comboUserContract";
			this->comboUserContract->Size = System::Drawing::Size(100, 21);
			this->comboUserContract->TabIndex = 23;
			// 
			// labelUserBillVat
			// 
			this->labelUserBillVat->AutoSize = true;
			this->labelUserBillVat->Location = System::Drawing::Point(89, 312);
			this->labelUserBillVat->Name = L"labelUserBillVat";
			this->labelUserBillVat->Size = System::Drawing::Size(0, 13);
			this->labelUserBillVat->TabIndex = 24;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(261, 339);
			this->Controls->Add(this->labelUserBillVat);
			this->Controls->Add(this->comboUserContract);
			this->Controls->Add(this->labelUserContract);
			this->Controls->Add(this->labelUserBill);
			this->Controls->Add(this->labelUserBillHeader);
			this->Controls->Add(this->buttonCalculateBill);
			this->Controls->Add(this->formCurrentVat);
			this->Controls->Add(this->labelCurrentVatUnits);
			this->Controls->Add(this->labelCurrentVat);
			this->Controls->Add(this->labelUserTetherReseavedUnits);
			this->Controls->Add(this->labelUserTetherReseaved);
			this->Controls->Add(this->formUserTetherReseaved);
			this->Controls->Add(this->labelUserTetherSentUnits);
			this->Controls->Add(this->labelUserTetherSent);
			this->Controls->Add(this->formUserTetherSent);
			this->Controls->Add(this->formUser080Minuets);
			this->Controls->Add(this->labelUser080Minuets);
			this->Controls->Add(this->labelUserDataUnits);
			this->Controls->Add(this->formUserMinuets);
			this->Controls->Add(this->labelUserMinuets);
			this->Controls->Add(this->formUserTexts);
			this->Controls->Add(this->LabelUserTexts);
			this->Controls->Add(this->labelUserData);
			this->Controls->Add(this->formUserData);
			this->Controls->Add(this->uiTitle);
			this->Name = L"MyForm";
			this->Text = L"Pink Bill Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCalculateBill_Click(System::Object^  sender, System::EventArgs^  e) {
		comboUserContract->Text;
		if(comboUserContract->Text == "Light") {
			pinkLight user(Convert::ToDouble(formUserData->Text), Convert::ToDouble(formUserTexts->Text), Convert::ToDouble(formUserMinuets->Text), Convert::ToDouble(formUser080Minuets->Text), Convert::ToDouble(formUserTetherSent->Text), Convert::ToDouble(formUserTetherReseaved->Text),  Convert::ToDouble("14.99"), (Convert::ToDouble(formCurrentVat->Text)/100), Convert::ToDouble("1"), Convert::ToDouble("2"), Convert::ToDouble("3"));
			labelUserBill->Text = "£ " + user.calculateBill();
			labelUserBillVat->Text = "£ " + user.addVat(user.calculateBill()) + " inc VAT";
		}
		if (comboUserContract->Text == "Data") {
			pinkData user(Convert::ToDouble(formUserData->Text), Convert::ToDouble(formUserTexts->Text), Convert::ToDouble(formUserMinuets->Text), Convert::ToDouble(formUser080Minuets->Text), Convert::ToDouble(formUserTetherSent->Text), Convert::ToDouble(formUserTetherReseaved->Text), Convert::ToDouble("24.99"), (Convert::ToDouble(formCurrentVat->Text) / 100), Convert::ToDouble("1"), Convert::ToDouble("2"), Convert::ToDouble("3"));
			labelUserBill->Text = "£ " + user.calculateBill();
			labelUserBillVat->Text = "£ " + user.addVat(user.calculateBill()) + " inc VAT";
		}
		if (comboUserContract->Text == "Fredom") {
			pinkFredom user(Convert::ToDouble(formUserData->Text), Convert::ToDouble(formUserTexts->Text), Convert::ToDouble(formUserMinuets->Text), Convert::ToDouble(formUser080Minuets->Text), Convert::ToDouble(formUserTetherSent->Text), Convert::ToDouble(formUserTetherReseaved->Text), Convert::ToDouble("34.99"), (Convert::ToDouble(formCurrentVat->Text) / 100), Convert::ToDouble("1"), Convert::ToDouble("2"), Convert::ToDouble("3"));
			labelUserBill->Text = "£ " + user.calculateBill();
			labelUserBillVat->Text = "£ " + user.addVat(user.calculateBill()) + " inc VAT";
		}


	}
};
}
