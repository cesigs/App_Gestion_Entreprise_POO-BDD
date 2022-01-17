#pragma once
#include "CAD.h"
#include "map_client.h"
#include "gestionPersonnels.h"
#include "FormAdresse.h"
#include "FormVerifPersonnel.h"

namespace PrositFin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FormPersonnel : public System::Windows::Forms::Form
	{
	public:
		FormPersonnel(void)
		{
			InitializeComponent();
		}

	protected:
		~FormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;

		   Services::gestionPersonnels^ gestionPersonnels;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			   this->button1->ForeColor = System::Drawing::Color::Black;
			   this->button1->Location = System::Drawing::Point(8, 15);
			   this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(293, 49);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"Charger la table Personnel";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &FormPersonnel::button1_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(309, 14);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->Size = System::Drawing::Size(1153, 677);
			   this->dataGridView1->TabIndex = 2;
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			   this->textBox1->Location = System::Drawing::Point(157, 108);
			   this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(124, 25);
			   this->textBox1->TabIndex = 3;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Lime;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			   this->button2->Location = System::Drawing::Point(17, 327);
			   this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(267, 49);
			   this->button2->TabIndex = 4;
			   this->button2->Text = L"Ajouter la personne";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &FormPersonnel::button2_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			   this->textBox2->Location = System::Drawing::Point(157, 152);
			   this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(124, 25);
			   this->textBox2->TabIndex = 5;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(11, 108);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(52, 20);
			   this->label1->TabIndex = 6;
			   this->label1->Text = L"Nom :";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			   this->label2->Location = System::Drawing::Point(11, 152);
			   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(72, 20);
			   this->label2->TabIndex = 7;
			   this->label2->Text = L"Prénom :";
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::Red;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			   this->button3->Location = System::Drawing::Point(17, 378);
			   this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(267, 49);
			   this->button3->TabIndex = 8;
			   this->button3->Text = L"Supprimer la personne";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &FormPersonnel::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::Black;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			   this->button4->ForeColor = System::Drawing::Color::White;
			   this->button4->Location = System::Drawing::Point(17, 428);
			   this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(267, 49);
			   this->button4->TabIndex = 9;
			   this->button4->Text = L"Tout supprimer";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &FormPersonnel::button4_Click);
			   // 
			   // textBox3
			   // 
			   this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			   this->textBox3->Location = System::Drawing::Point(159, 497);
			   this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(124, 25);
			   this->textBox3->TabIndex = 11;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			   this->label3->Location = System::Drawing::Point(17, 497);
			   this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(31, 20);
			   this->label3->TabIndex = 12;
			   this->label3->Text = L"Id :";
			   // 
			   // button6
			   // 
			   this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(128)));
			   this->button6->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			   this->button6->Location = System::Drawing::Point(15, 551);
			   this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(267, 49);
			   this->button6->TabIndex = 13;
			   this->button6->Text = L"Modifier";
			   this->button6->UseVisualStyleBackColor = false;
			   this->button6->Click += gcnew System::EventHandler(this, &FormPersonnel::button6_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			   this->label4->Location = System::Drawing::Point(11, 185);
			   this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(48, 20);
			   this->label4->TabIndex = 14;
			   this->label4->Text = L"Rôle :";
			   // 
			   // textBox4
			   // 
			   this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			   this->textBox4->Location = System::Drawing::Point(157, 227);
			   this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(124, 25);
			   this->textBox4->TabIndex = 15;
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Location = System::Drawing::Point(157, 185);
			   this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(124, 28);
			   this->comboBox1->TabIndex = 16;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			   this->label5->Location = System::Drawing::Point(9, 227);
			   this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(128, 20);
			   this->label5->TabIndex = 17;
			   this->label5->Text = L"Date_Embauche :";
			   // 
			   // textBox5
			   // 
			   this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->textBox5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			   this->textBox5->Location = System::Drawing::Point(157, 274);
			   this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(124, 25);
			   this->textBox5->TabIndex = 18;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			   this->label6->Location = System::Drawing::Point(11, 274);
			   this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(126, 20);
			   this->label6->TabIndex = 19;
			   this->label6->Text = L"Date_Naissance :";
			   // 
			   // button5
			   // 
			   this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			   this->button5->Location = System::Drawing::Point(8, 641);
			   this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(172, 36);
			   this->button5->TabIndex = 20;
			   this->button5->Text = L"Adresse";
			   this->button5->UseVisualStyleBackColor = false;
			   this->button5->Click += gcnew System::EventHandler(this, &FormPersonnel::button5_Click);
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			   this->label8->Location = System::Drawing::Point(11, 71);
			   this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(93, 20);
			   this->label8->TabIndex = 23;
			   this->label8->Text = L"Id_Adresse :";
			   // 
			   // textBox7
			   // 
			   this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			   this->textBox7->Location = System::Drawing::Point(159, 71);
			   this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(124, 25);
			   this->textBox7->TabIndex = 24;
			   // 
			   // FormPersonnel
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::LightGray;
			   this->ClientSize = System::Drawing::Size(1465, 690);
			   this->Controls->Add(this->textBox7);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->button1);
			   this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->Name = L"FormPersonnel";
			   this->Text = L"Personnel";
			   this->Load += gcnew System::EventHandler(this, &FormPersonnel::Form1_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		loadDataGridView();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionPersonnels->ajouterPersonne(textBox7->Text, textBox1->Text, textBox2->Text, comboBox1->Text, textBox4->Text, textBox5->Text);
		loadDataGridView();
		FormVerifPersonnel^ Myform7 = gcnew FormVerifPersonnel;
		Myform7->ShowDialog();
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		gestionPersonnels = gcnew Services::gestionPersonnels();
	}

	private: void loadDataGridView() {
		dataGridView1->DataSource = gestionPersonnels->listePersonnes("Personnels");
		dataGridView1->DataMember = "Personnels";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionPersonnels->supprimerPersonne(textBox3->Text);
		loadDataGridView();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionPersonnels->supprimerTout();
		loadDataGridView();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionPersonnels->modifierPersonne(textBox7->Text, textBox1->Text, textBox2->Text, comboBox1->Text, textBox4->Text, textBox5->Text, textBox3->Text);
		loadDataGridView();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		FormAdresse^ Myform1 = gcnew FormAdresse;
		Myform1->Show();
	}
	};
}