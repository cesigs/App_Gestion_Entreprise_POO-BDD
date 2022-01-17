#pragma once
#include "CAD.h"
#include "map_adresse.h"
#include "gestionAdresse.h"
#include "FormVerifAdresse.h"


namespace PrositFin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormAdresse
	/// </summary>
	public ref class FormAdresse : public System::Windows::Forms::Form
	{
	public:
		FormAdresse(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormAdresse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
		   Services::gestionAdresse^ gestionAdresse;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;







	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(6, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Charger la table Adresse";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormAdresse::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(119, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(94, 21);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			this->textBox3->Location = System::Drawing::Point(119, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(94, 21);
			this->textBox3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(8, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 15);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Numéro :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(8, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 15);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Rue :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(8, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Ville :";
			this->label4->Click += gcnew System::EventHandler(this, &FormAdresse::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(8, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Code_Postal :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(9, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 15);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Pays :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(232, 11);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(865, 550);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormAdresse::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(13, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 40);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Ajouter l\'adresse";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormAdresse::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(13, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 40);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Supprimer l\'adresse";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormAdresse::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(13, 348);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 40);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Tout supprimer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormAdresse::button4_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			this->textBox7->Location = System::Drawing::Point(119, 404);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(94, 21);
			this->textBox7->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(13, 404);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 15);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Id :";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(11, 448);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 40);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Modifier";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormAdresse::button5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Anglet", L"Angers", L"Bayonne", L"Biarritz",
					L"Bordeaux", L"Nice", L"Paris", L"Marseille", L"Londres", L"Munich"
			});
			this->comboBox1->Location = System::Drawing::Point(119, 112);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(94, 24);
			this->comboBox1->TabIndex = 20;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"64600", L"49000", L"64100", L"64200", L"33000",
					L"06000", L"75000", L"13000", L"CR0",L"83300"
			});
			this->comboBox2->Location = System::Drawing::Point(119, 141);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(94, 24);
			this->comboBox2->TabIndex = 21;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Allemagne", L"France", L"Angleterre"

			});
			this->comboBox3->Location = System::Drawing::Point(119, 170);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(94, 24);
			this->comboBox3->TabIndex = 22;
			// 
			// FormAdresse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1099, 561);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Name = L"FormAdresse";
			this->Text = L"Adresse";
			this->Load += gcnew System::EventHandler(this, &FormAdresse::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		gestionAdresse = gcnew Services::gestionAdresse();
	}

	private: void loadDataGridView() {
		dataGridView1->DataSource = gestionAdresse->listeAdresse("Adresse");
		dataGridView1->DataMember = "Adresse";
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		loadDataGridView();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionAdresse->ajouterAdresse(textBox2->Text, textBox3->Text, comboBox1->Text, comboBox2->Text, comboBox3->Text);
		loadDataGridView();
		FormVerifAdresse^ Myform8 = gcnew FormVerifAdresse;
		Myform8->ShowDialog();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionAdresse->supprimerAdresse(textBox7->Text);
		loadDataGridView();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionAdresse->supprimerTout();
		loadDataGridView();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionAdresse->modifierAdresse(textBox2->Text, textBox3->Text, comboBox1->Text, comboBox2->Text, comboBox3->Text, textBox7->Text);
		loadDataGridView();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
