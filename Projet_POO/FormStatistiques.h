#pragma once
#include "gestionStat.h"
#include "map_statistique.h"
namespace PrositFin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormStatistiques
	/// </summary>
	public ref class FormStatistiques : public System::Windows::Forms::Form
	{
	public:
		FormStatistiques(void)
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
		~FormStatistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: Services::gestionStat^ gestionStat;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridView^ dataGridView7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dataGridView8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::DataGridView^ dataGridView9;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(331, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Panier Moyen";
			this->label1->Click += gcnew System::EventHandler(this, &FormStatistiques::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(334, 73);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(243, 71);
			this->dataGridView1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(446, 2);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Charger Simulation";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormStatistiques::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 74);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(243, 215);
			this->dataGridView2->TabIndex = 3;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(12, 326);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(243, 215);
			this->dataGridView3->TabIndex = 4;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(668, 73);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(243, 71);
			this->dataGridView4->TabIndex = 5;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(668, 178);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->Size = System::Drawing::Size(243, 71);
			this->dataGridView5->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aqua;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(411, 495);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 40);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Simulation";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormStatistiques::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox1->Location = System::Drawing::Point(306, 443);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(140, 28);
			this->comboBox1->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"15" });
			this->comboBox2->Location = System::Drawing::Point(493, 443);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(140, 28);
			this->comboBox2->TabIndex = 9;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2", L"3", L"5" });
			this->comboBox3->Location = System::Drawing::Point(882, 443);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(140, 28);
			this->comboBox3->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(630, 507);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 22);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Resultat Simulation :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(331, 417);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 22);
			this->label3->TabIndex = 12;
			this->label3->Text = L"TVA (en %)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(472, 417);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(194, 22);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Marge Commerciale (en %)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(895, 417);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 22);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Demarque (en %)";
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"01/2020", L"02/2020" });
			this->comboBox4->Location = System::Drawing::Point(334, 294);
			this->comboBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(140, 28);
			this->comboBox4->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(331, 268);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 22);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Chiffre d\'Affaires";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 22);
			this->label4->TabIndex = 18;
			this->label4->Text = L"10 articles les plus vendus";
			this->label4->Click += gcnew System::EventHandler(this, &FormStatistiques::label4_Click);
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(334, 326);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->Size = System::Drawing::Size(243, 71);
			this->dataGridView6->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 301);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(206, 22);
			this->label8->TabIndex = 20;
			this->label8->Text = L"10 articles les moins vendus";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(665, 152);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 22);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Valeur d\'Achat Stock";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(664, 47);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(190, 22);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Valeur Commerciale Stock";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(331, 152);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(205, 22);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Produits manquant de stock";
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(334, 178);
			this->dataGridView7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersWidth = 51;
			this->dataGridView7->Size = System::Drawing::Size(243, 71);
			this->dataGridView7->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(665, 267);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(153, 22);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Montant total achats";
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Location = System::Drawing::Point(668, 327);
			this->dataGridView8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->RowHeadersWidth = 51;
			this->dataGridView8->Size = System::Drawing::Size(243, 71);
			this->dataGridView8->TabIndex = 25;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox1->Location = System::Drawing::Point(728, 297);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(94, 26);
			this->textBox1->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(665, 303);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 20);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Client :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(672, 417);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(200, 22);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Remise Commerciale (en %)";
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5", L"6" });
			this->comboBox5->Location = System::Drawing::Point(704, 443);
			this->comboBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(140, 28);
			this->comboBox5->TabIndex = 29;
			// 
			// dataGridView9
			// 
			this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView9->Location = System::Drawing::Point(789, 504);
			this->dataGridView9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView9->Name = L"dataGridView9";
			this->dataGridView9->RowHeadersWidth = 51;
			this->dataGridView9->Size = System::Drawing::Size(182, 31);
			this->dataGridView9->TabIndex = 31;
			// 
			// FormStatistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1099, 561);
			this->Controls->Add(this->dataGridView9);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->dataGridView8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->dataGridView7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"FormStatistiques";
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &FormStatistiques::FormStatistiques_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void loadDataGridView() {
		dataGridView1->DataSource = gestionStat->affichagePanierMoyen();
		dataGridView1->DataMember = "Panier";
		dataGridView2->DataSource = gestionStat->affichageTop10();
		dataGridView2->DataMember = "Top10";
		dataGridView3->DataSource = gestionStat->affichageBottom10();
		dataGridView3->DataMember = "Bottom10";
		dataGridView4->DataSource = gestionStat->affichageValeurComer();
		dataGridView4->DataMember = "ValeurComer";
		dataGridView5->DataSource = gestionStat->affichageValeurAchat();
		dataGridView5->DataMember = "ValeurAchat";
		dataGridView6->DataSource = gestionStat->affichageCA(comboBox4->Text);
		dataGridView6->DataMember = "CAaa";
		//label7->Text= gestionStat->CA(comboBox4->Text);
	}
	private: System::Void FormStatistiques_Load(System::Object^ sender, System::EventArgs^ e) {
		gestionStat = gcnew Services::gestionStat();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		loadDataGridView();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = Convert::ToString(CalculSimutalion());

	}

	private: int getQuantite() {
		return Convert::ToInt32(gestionStat->getQuantite());
	}
	private: int getPrix() {
		int i = Convert::ToInt32(gestionStat->getPrix());
		return i;
	}
	private: int CalculSimutalion() {
		double i = 0;
		double tva = Convert::ToDouble(comboBox1->Text);
		double marge = Convert::ToDouble(comboBox2->Text);
		double demarque = Convert::ToDouble(comboBox3->Text);
		//label4->Text = Convert::ToString(tva);
		i = getPrix() * getQuantite() * (1 + (tva / 100)) * (1 + (marge / 100)) * (1 + (demarque / 100));

		return i;
	}
		   //typedef int (*ptr)(void);
		   //int (*gP)() = &getPrix() ;
		   //ftab[0] = &getPrix;





	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
