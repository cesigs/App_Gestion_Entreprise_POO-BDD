namespace NS_Composants
{
	ref class CL_CAD
	{
	private:
		String^ cnx;
		String^ rq_sql;
		SqlConnection^ CNX;
		SqlCommand^ CMD;
		SqlDataAdapter^ DA;
		DataSet^ DS;
		void setSQL(String^);
	public:
		CL_CAD(void);
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}

//CL_mapp_TBADRESSE.h
#pragma once
using namespace System;

namespace NS_Composants
{
	ref class CL_mappTBADRESSE
	{
	private:
		int id_adresse;
		String^ adresse;
		String^ cp;
		String^ ville;
		int id_personne;
	public:
		CL_mappTBADRESSE(void);
		String^ SELECTByIdPersonne(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIdAdresse(int);
		void setAdresse(String^);
		void setCp(String^);
		void setVille(String^);
		void setIdPersonne(int);
		int getIdAdresse(void);
		String^ getAdresse(void);
		String^ getCp(void);
		String^ getVille(void);
		int getIdPersonne(void);
	};
}

//CL_mappTBPERSONNE.h
#pragma once
using namespace System;

namespace NS_Composants
{
	ref class CL_mappTBPERSONNE
	{
	private:
		int id_personne;
		String^ nom;
		String^ prenom;
	public:
		CL_mappTBPERSONNE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setPrenom(String^);
		void setNom(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
	};
}

//CL_svc_gestionClient.h
#pragma once
#include "CL_CAD.h"
#include "CL_mappTBPERSONNE.h"
#include "CL_mappTBADRESSE.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{
	ref class CL_svc_gestionClients
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_mappTBPERSONNE^ personne;
		NS_Composants::CL_mappTBADRESSE^ adresse;
		DataSet^ ds;
	public:
		CL_svc_gestionClients(void);
		DataSet^ listeClients(String^);
		DataSet^ adressesClient(int, String^);
		void ajouter(String^, String^, array<String^>^);
		void modifier(int, String^, String^, array<String^>^);
		void supprimer(int);
	};
}

//FormPersonnel.h
#pragma once
#include "CL_CAD.h";
#include "CL_mappTBPERSONNE.h"
#include "CL_svc_gestionClients.h"

namespace EIA2MININFPOOP6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;

	/// <summary>
	/// Description résumée de FormPersonnel
	/// </summary>
	public ref class FormPersonnel : public System::Windows::Forms::Form
	{
	public:
		FormPersonnel(void)
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
		~FormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_first;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::Label^ lbl_prenom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::Button^ btn_previous;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dgv_adresses;
	private: System::Windows::Forms::Label^ lbl_adresse;
	private: System::Windows::Forms::Button^ btn_nouveau;
	private: System::Windows::Forms::Button^ btn_maj;
	private: System::Windows::Forms::Button^ btn_sup;
	private: System::Windows::Forms::Button^ btn_enr;
	private: System::Windows::Forms::Label^ lbl_message;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: NS_SVC::CL_svc_gestionClients^ gestionClients;
	private: DataSet^ dsPersonne;
	private: DataSet^ dsPersonneAdresses;
	private: String^ mode;
	private: int index;
	private: int rowsCount;
	private: int id;
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
			   this->btn_first = (gcnew System::Windows::Forms::Button());
			   this->txt_id = (gcnew System::Windows::Forms::TextBox());
			   this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			   this->lbl_id = (gcnew System::Windows::Forms::Label());
			   this->lbl_nom = (gcnew System::Windows::Forms::Label());
			   this->lbl_prenom = (gcnew System::Windows::Forms::Label());
			   this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			   this->btn_previous = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->dgv_adresses = (gcnew System::Windows::Forms::DataGridView());
			   this->lbl_adresse = (gcnew System::Windows::Forms::Label());
			   this->btn_nouveau = (gcnew System::Windows::Forms::Button());
			   this->btn_maj = (gcnew System::Windows::Forms::Button());
			   this->btn_sup = (gcnew System::Windows::Forms::Button());
			   this->btn_enr = (gcnew System::Windows::Forms::Button());
			   this->lbl_message = (gcnew System::Windows::Forms::Label());
			   this->txt_message = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_adresses))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // btn_first
			   // 
			   this->btn_first->Location = System::Drawing::Point(22, 157);
			   this->btn_first->Name = L"btn_first";
			   this->btn_first->Size = System::Drawing::Size(40, 23);
			   this->btn_first->TabIndex = 0;
			   this->btn_first->Text = L"<<";
			   this->btn_first->UseVisualStyleBackColor = true;
			   this->btn_first->Click += gcnew System::EventHandler(this, &FormPersonnel::button1_Click);
			   // 
			   // txt_id
			   // 
			   this->txt_id->Location = System::Drawing::Point(22, 26);
			   this->txt_id->Name = L"txt_id";
			   this->txt_id->ReadOnly = true;
			   this->txt_id->Size = System::Drawing::Size(178, 20);
			   this->txt_id->TabIndex = 1;
			   // 
			   // txt_nom
			   // 
			   this->txt_nom->Location = System::Drawing::Point(22, 71);
			   this->txt_nom->Name = L"txt_nom";
			   this->txt_nom->Size = System::Drawing::Size(178, 20);
			   this->txt_nom->TabIndex = 2;
			   // 
			   // lbl_id
			   // 
			   this->lbl_id->AutoSize = true;
			   this->lbl_id->Location = System::Drawing::Point(19, 10);
			   this->lbl_id->Name = L"lbl_id";
			   this->lbl_id->Size = System::Drawing::Size(16, 13);
			   this->lbl_id->TabIndex = 3;
			   this->lbl_id->Text = L"Id";
			   // 
			   // lbl_nom
			   // 
			   this->lbl_nom->AutoSize = true;
			   this->lbl_nom->Location = System::Drawing::Point(19, 55);
			   this->lbl_nom->Name = L"lbl_nom";
			   this->lbl_nom->Size = System::Drawing::Size(29, 13);
			   this->lbl_nom->TabIndex = 4;
			   this->lbl_nom->Text = L"Nom";
			   // 
			   // lbl_prenom
			   // 
			   this->lbl_prenom->AutoSize = true;
			   this->lbl_prenom->Location = System::Drawing::Point(19, 103);
			   this->lbl_prenom->Name = L"lbl_prenom";
			   this->lbl_prenom->Size = System::Drawing::Size(43, 13);
			   this->lbl_prenom->TabIndex = 5;
			   this->lbl_prenom->Text = L"Prénom";
			   // 
			   // txt_prenom
			   // 
			   this->txt_prenom->Location = System::Drawing::Point(22, 119);
			   this->txt_prenom->Name = L"txt_prenom";
			   this->txt_prenom->Size = System::Drawing::Size(178, 20);
			   this->txt_prenom->TabIndex = 6;
			   // 
			   // btn_previous
			   // 
			   this->btn_previous->Location = System::Drawing::Point(68, 157);
			   this->btn_previous->Name = L"btn_previous";
			   this->btn_previous->Size = System::Drawing::Size(40, 23);
			   this->btn_previous->TabIndex = 7;
			   this->btn_previous->Text = L"<";
			   this->btn_previous->UseVisualStyleBackColor = true;
			   this->btn_previous->Click += gcnew System::EventHandler(this, &FormPersonnel::button1_Click_1);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(160, 157);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(40, 23);
			   this->button2->TabIndex = 8;
			   this->button2->Text = L">>";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &FormPersonnel::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(114, 157);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(40, 23);
			   this->button3->TabIndex = 9;
			   this->button3->Text = L">";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &FormPersonnel::button3_Click);
			   // 
			   // dgv_adresses
			   // 
			   this->dgv_adresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgv_adresses->Location = System::Drawing::Point(216, 24);
			   this->dgv_adresses->Name = L"dgv_adresses";
			   this->dgv_adresses->Size = System::Drawing::Size(371, 243);
			   this->dgv_adresses->TabIndex = 10;
			   // 
			   // lbl_adresse
			   // 
			   this->lbl_adresse->AutoSize = true;
			   this->lbl_adresse->Location = System::Drawing::Point(213, 8);
			   this->lbl_adresse->Name = L"lbl_adresse";
			   this->lbl_adresse->Size = System::Drawing::Size(50, 13);
			   this->lbl_adresse->TabIndex = 11;
			   this->lbl_adresse->Text = L"Adresses";
			   // 
			   // btn_nouveau
			   // 
			   this->btn_nouveau->Location = System::Drawing::Point(22, 186);
			   this->btn_nouveau->Name = L"btn_nouveau";
			   this->btn_nouveau->Size = System::Drawing::Size(86, 23);
			   this->btn_nouveau->TabIndex = 12;
			   this->btn_nouveau->Text = L"Nouveau";
			   this->btn_nouveau->UseVisualStyleBackColor = true;
			   this->btn_nouveau->Click += gcnew System::EventHandler(this, &FormPersonnel::btn_nouveau_Click);
			   // 
			   // btn_maj
			   // 
			   this->btn_maj->Location = System::Drawing::Point(22, 215);
			   this->btn_maj->Name = L"btn_maj";
			   this->btn_maj->Size = System::Drawing::Size(86, 23);
			   this->btn_maj->TabIndex = 13;
			   this->btn_maj->Text = L"Mise à jour";
			   this->btn_maj->UseVisualStyleBackColor = true;
			   this->btn_maj->Click += gcnew System::EventHandler(this, &FormPersonnel::btn_maj_Click);
			   // 
			   // btn_sup
			   // 
			   this->btn_sup->Location = System::Drawing::Point(22, 244);
			   this->btn_sup->Name = L"btn_sup";
			   this->btn_sup->Size = System::Drawing::Size(86, 23);
			   this->btn_sup->TabIndex = 14;
			   this->btn_sup->Text = L"Supprimer";
			   this->btn_sup->UseVisualStyleBackColor = true;
			   this->btn_sup->Click += gcnew System::EventHandler(this, &FormPersonnel::btn_sup_Click);
			   // 
			   // btn_enr
			   // 
			   this->btn_enr->Location = System::Drawing::Point(114, 186);
			   this->btn_enr->Name = L"btn_enr";
			   this->btn_enr->Size = System::Drawing::Size(86, 81);
			   this->btn_enr->TabIndex = 15;
			   this->btn_enr->Text = L"Enregistrer";
			   this->btn_enr->UseVisualStyleBackColor = true;
			   this->btn_enr->Click += gcnew System::EventHandler(this, &FormPersonnel::btn_enr_Click);
			   // 
			   // lbl_message
			   // 
			   this->lbl_message->AutoSize = true;
			   this->lbl_message->Location = System::Drawing::Point(19, 289);
			   this->lbl_message->Name = L"lbl_message";
			   this->lbl_message->Size = System::Drawing::Size(50, 13);
			   this->lbl_message->TabIndex = 16;
			   this->lbl_message->Text = L"Message";
			   // 
			   // txt_message
			   // 
			   this->txt_message->Location = System::Drawing::Point(22, 305);
			   this->txt_message->Multiline = true;
			   this->txt_message->Name = L"txt_message";
			   this->txt_message->Size = System::Drawing::Size(565, 48);
			   this->txt_message->TabIndex = 17;
			   // 
			   // FormPersonnel
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(610, 365);
			   this->Controls->Add(this->txt_message);
			   this->Controls->Add(this->lbl_message);
			   this->Controls->Add(this->btn_enr);
			   this->Controls->Add(this->btn_sup);
			   this->Controls->Add(this->btn_maj);
			   this->Controls->Add(this->btn_nouveau);
			   this->Controls->Add(this->lbl_adresse);
			   this->Controls->Add(this->dgv_adresses);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->btn_previous);
			   this->Controls->Add(this->txt_prenom);
			   this->Controls->Add(this->lbl_prenom);
			   this->Controls->Add(this->lbl_nom);
			   this->Controls->Add(this->lbl_id);
			   this->Controls->Add(this->txt_nom);
			   this->Controls->Add(this->txt_id);
			   this->Controls->Add(this->btn_first);
			   this->Name = L"FormPersonnel";
			   this->Text = L"FormPersonnel";
			   this->Load += gcnew System::EventHandler(this, &FormPersonnel::FormPersonnel_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_adresses))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->txt_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[0]);
		this->txt_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[1]);
		this->txt_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[2]);
		this->dsPersonneAdresses = this->gestionClients->adressesClient(Convert::ToInt32(this->txt_id->Text), "AdressesPersonnes");
		this->dgv_adresses->DataSource = this->dsPersonneAdresses;
		this->dgv_adresses->DataMember = "AdressesPersonnes";
		this->dgv_adresses->Columns["id_personne"]->Visible = false;
		this->dgv_adresses->Columns["id_adresse"]->Visible = false;
		this->txt_message->Text = "Chargement de l'enregistrement : " + (this->index + 1);
	}
	private: System::Void FormPersonnel_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->initialisationENR();
		this->txt_message->Text = "Cnx SQL SERVER ok \r\nEnregistrement chargés";
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index > 0)
		{
			this->index--;
			this->txt_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[0]);
			this->txt_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[1]);
			this->txt_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[2]);
			this->dsPersonneAdresses = this->gestionClients->adressesClient(Convert::ToInt32(this->txt_id->Text), "AdressesPersonnes");
			this->dgv_adresses->DataSource = this->dsPersonneAdresses;
			this->dgv_adresses->DataMember = "AdressesPersonnes";
			this->dgv_adresses->Columns["id_personne"]->Visible = false;
			this->dgv_adresses->Columns["id_adresse"]->Visible = false;
			this->txt_message->Text = "Chargement de l'enregistrement : " + (this->index + 1);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index < this->rowsCount - 1)
		{
			this->index++;
			this->txt_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[0]);
			this->txt_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[1]);
			this->txt_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[2]);
			this->dsPersonneAdresses = this->gestionClients->adressesClient(Convert::ToInt32(this->txt_id->Text), "AdressesPersonnes");
			this->dgv_adresses->DataSource = this->dsPersonneAdresses;
			this->dgv_adresses->DataMember = "AdressesPersonnes";
			this->dgv_adresses->Columns["id_personne"]->Visible = false;
			this->dgv_adresses->Columns["id_adresse"]->Visible = false;
			this->txt_message->Text = "Chargement de l'enregistrement : " + (this->index + 1);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = this->rowsCount - 1;
		this->txt_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[0]);
		this->txt_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[1]);
		this->txt_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[2]);
		this->dsPersonneAdresses = this->gestionClients->adressesClient(Convert::ToInt32(this->txt_id->Text), "AdressesPersonnes");
		this->dgv_adresses->DataSource = this->dsPersonneAdresses;
		this->dgv_adresses->DataMember = "AdressesPersonnes";
		this->dgv_adresses->Columns["id_personne"]->Visible = false;
		this->dgv_adresses->Columns["id_adresse"]->Visible = false;
		this->txt_message->Text = "Chargement de l'enregistrement : " + (this->index + 1);
	}
	private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->txt_id->Text = "";
		this->txt_nom->Text = "";
		this->txt_prenom->Text = "";
		this->dgv_adresses->DataSource = nullptr;
		this->dgv_adresses->Columns->Add("Adresse", "Adresse");
		this->dgv_adresses->Columns->Add("Ville", "Ville");
		this->dgv_adresses->Columns->Add("Cp", "Cp");
		this->txt_message->Text = "Veuillez saisir les renseignements avant d'enregister";
		this->mode = "nouveau";

	}
	private: System::Void btn_enr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->mode == "nouveau")
		{
			int i;
			int ii;

			int taille = (this->dgv_adresses->RowCount - 1) * 3;
			array<String^>^ lesAdresses = gcnew array<String^>(taille);

			ii = 0;
			for (i = 0; i < taille - 1; i++)
			{
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[0, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[1, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[2, ii]->Value);
				ii++;
			}

			this->gestionClients->ajouter(this->txt_nom->Text, this->txt_prenom->Text, lesAdresses);
		}
		else if (this->mode == "supprimer")
		{
			this->gestionClients->supprimer(id);
		}
		else if (this->mode == "maj")
		{
			int i;
			int ii;

			int taille = (this->dgv_adresses->RowCount - 1) * 4;
			array<String^>^ lesAdresses = gcnew array<String^>(taille);

			ii = 0;
			this->dgv_adresses->Columns["id_adresse"]->Visible = true;
			for (i = 0; i < taille - 1; i++)
			{
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[0, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[1, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[2, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[3, ii]->Value);
				ii++;
			}
			this->gestionClients->modifier(Convert::ToInt32(this->txt_id->Text), this->txt_nom->Text, this->txt_prenom->Text, lesAdresses);
		}
		this->initialisationENR();
	}
	private: System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->id = Convert::ToInt32(this->txt_id->Text);
		this->mode = "supprimer";
		this->txt_id->Text = "";
		this->txt_nom->Text = "";
		this->txt_prenom->Text = "";
		this->dgv_adresses->DataSource = nullptr;
		this->txt_message->Text = "L'enregistrement a été supprimer.";

	}
	private: void initialisationENR(void)
	{
		this->gestionClients = gcnew NS_SVC::CL_svc_gestionClients();
		this->dgv_adresses->Columns->Clear();
		this->dsPersonne = this->gestionClients->listeClients("LesClients");
		this->rowsCount = this->dsPersonne->Tables["LesClients"]->Rows->Count;
		this->index = 0;
		this->txt_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[0]);
		this->txt_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[1]);
		this->txt_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[2]);

		this->dsPersonneAdresses = this->gestionClients->adressesClient(Convert::ToInt32(this->txt_id->Text), "AdressesPersonnes");
		this->dgv_adresses->DataSource = this->dsPersonneAdresses;
		this->dgv_adresses->DataMember = "AdressesPersonnes";
		this->dgv_adresses->Columns["id_personne"]->Visible = false;
		this->dgv_adresses->Columns["id_adresse"]->Visible = false;
		this->txt_message->Text = "Chargement de l'enregistrement : " + (this->index + 1);
	}
	private: System::Void btn_maj_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "maj";
		this->txt_message->Text = "Enregistrement en attente de validation";
	}
	};
}

//CL_CAD.cpp
#include "CL_CAD.h"

namespace NS_Composants
{
	CL_CAD::CL_CAD(void)
	{
		this->rq_sql = "RIEN";
		this->cnx = "Data Source=DESKTOP-7SAG648\\MSSQLSERVMANU;" +
			"Initial Catalog=DB_A2_POO_P6;" +
			"Persist Security Info=True;" +
			"User ID=CNX_A2_POO_P6;" +
			"Password=azerty";
		this->CNX = gcnew SqlConnection(this->cnx);
		this->CMD = gcnew SqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = CommandType::Text;
	}
	int CL_CAD::actionRowsID(String^ rq_sql)
	{
		int id;
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		id = Convert::ToInt32(this->CMD->ExecuteScalar());
		this->CNX->Close();
		return id;
	}
	void CL_CAD::actionRows(String^ rq_sql)
	{
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		this->CMD->ExecuteNonQuery();
		this->CNX->Close();
	}
	DataSet^ CL_CAD::getRows(String^ rq_sql, String^ dataTableName)
	{
		this->setSQL(rq_sql);
		this->DA = gcnew SqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_sql;
		this->DS = gcnew DataSet();
		this->DA->Fill(this->DS, dataTableName);

		return this->DS;
	}
	void CL_CAD::setSQL(String^ rq_sql)
	{
		if (rq_sql == "" || rq_sql == "RIEN")
		{
			this->rq_sql = "RIEN";
		}
		else
		{
			this->rq_sql = rq_sql;
		}
	}
}

//CL_mappTBADRESSES.cpp
#include "CL_mappTBADRESSE.h"

namespace NS_Composants
{
	CL_mappTBADRESSE::CL_mappTBADRESSE(void)
	{
		this->id_adresse = -1;
		this->adresse = "RIEN";
		this->cp = "RIEN";
		this->ville = "RIEN";
		this->id_personne = -1;
	}
	String^ CL_mappTBADRESSE::SELECTByIdPersonne(void)
	{
		return "SELECT id_adresse, adresse, ville, cp, id_personne " +
			"FROM TB_ADRESSE " +
			"WHERE(id_personne = " + this->id_personne + ");";
	}
	String^ CL_mappTBADRESSE::INSERT(void)
	{
		return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +
			"VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";
	}
	String^ CL_mappTBADRESSE::UPDATE(void)
	{
		return "UPDATE TB_ADRESSE " +
			"SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +
			"WHERE(id_adresse =  " + this->id_adresse + "); ";
	}
	String^ CL_mappTBADRESSE::DELETE(void)
	{
		return "DELETE FROM TB_ADRESSE " +
			"WHERE(id_adresse = " + this->id_adresse + ");";
	}
	void CL_mappTBADRESSE::setIdAdresse(int IdAdresse)
	{
		if (IdAdresse > 0)this->id_adresse = IdAdresse;
	}
	void CL_mappTBADRESSE::setAdresse(String^ Adresse)
	{
		if (Adresse != "")this->adresse = Adresse;
	}
	void CL_mappTBADRESSE::setCp(String^ Cp)
	{
		if (Cp != "")this->cp = Cp;
	}
	void CL_mappTBADRESSE::setVille(String^ Ville)
	{
		if (Ville != "")this->ville = Ville;
	}
	void CL_mappTBADRESSE::setIdPersonne(int IdPersonne)
	{
		if (IdPersonne > 0)this->id_personne = IdPersonne;
	}
	int CL_mappTBADRESSE::getIdAdresse(void)
	{
		return this->id_adresse;
	}
	String^ CL_mappTBADRESSE::getAdresse(void)
	{
		return this->adresse;
	}
	String^ CL_mappTBADRESSE::getCp(void)
	{
		return this->cp;
	}
	String^ CL_mappTBADRESSE::getVille(void)
	{
		return this->ville;
	}
	int CL_mappTBADRESSE::getIdPersonne(void)
	{
		return this->id_personne;
	}
}


//CL_mappTBPERSONNE.cpp
#include "CL_mappTBPERSONNE.h"

namespace NS_Composants
{
	CL_mappTBPERSONNE::CL_mappTBPERSONNE(void)
	{
		this->id_personne = -1;
		this->nom = "RIEN";
		this->prenom = "RIEN";
	}
	String^ CL_mappTBPERSONNE::SELECT(void)
	{
		return "SELECT id_personne, nom, prenom " +
			"FROM TB_PERSONNE;";
	}
	String^ CL_mappTBPERSONNE::INSERT(void)
	{
		return "INSERT INTO TB_PERSONNE " +
			"(nom, prenom) " +
			"VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
	}
	String^ CL_mappTBPERSONNE::UPDATE(void)
	{
		return "UPDATE TB_PERSONNE " +
			"SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
			"WHERE(id_personne = " + this->getId() + ");";
	}
	String^ CL_mappTBPERSONNE::DELETE(void)
	{
		return "DELETE FROM TB_PERSONNE " +
			"WHERE(id_personne = " + this->getId() + ");";
	}
	void CL_mappTBPERSONNE::setID(int id_personne)
	{
		if (id_personne > 0)
		{
			this->id_personne = id_personne;
		}
	}
	void CL_mappTBPERSONNE::setPrenom(String^ prenom)
	{
		if (prenom != "")
		{
			this->prenom = prenom;
		}
	}
	void CL_mappTBPERSONNE::setNom(String^ nom)
	{
		if (nom != "")
		{
			this->nom = nom;
		}
	}
	int CL_mappTBPERSONNE::getId(void)
	{
		return this->id_personne;
	}
	String^ CL_mappTBPERSONNE::getNom(void)
	{
		return this->nom;
	}
	String^ CL_mappTBPERSONNE::getPrenom(void)
	{
		return this->prenom;
	}
}

//CL_svc_gestionClients.cpp
#include "CL_svc_gestionClients.h"

namespace NS_SVC
{
	CL_svc_gestionClients::CL_svc_gestionClients(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CL_mappTBPERSONNE();
		this->adresse = gcnew NS_Composants::CL_mappTBADRESSE();
	}
	DataSet^ CL_svc_gestionClients::listeClients(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->personne->SELECT(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionClients::adressesClient(int id_personne, String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->adresse->setIdPersonne(id_personne);
		this->ds = this->cad->getRows(this->adresse->SELECTByIdPersonne(), dataTableName);
		return this->ds;
	}
	void CL_svc_gestionClients::ajouter(String^ nom, String^ prenom, array<String^>^ lesAdresses)
	{
		int id;
		int i;

		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		id = this->cad->actionRowsID(this->personne->INSERT());

		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setAdresse(lesAdresses[i]); i++;
			this->adresse->setVille(lesAdresses[i]); i++;
			this->adresse->setCp(lesAdresses[i]);
			this->adresse->setIdPersonne(id);
			this->cad->actionRows(this->adresse->INSERT());
		}
	}
	void CL_svc_gestionClients::CL_svc_gestionClients::modifier(int id_personne, String^ nom, String^ prenom, array<String^>^ lesAdresses)
	{
		int i;

		this->personne->setID(id_personne);
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->cad->actionRows(this->personne->UPDATE());

		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setIdAdresse(Convert::ToInt32(lesAdresses[i])); i++;
			this->adresse->setAdresse(lesAdresses[i]); i++;
			this->adresse->setVille(lesAdresses[i]); i++;
			this->adresse->setCp(lesAdresses[i]);
			this->cad->actionRows(this->adresse->UPDATE());
		}
	}
	void CL_svc_gestionClients::supprimer(int idPersonne)
	{
		this->personne->setID(idPersonne);
		this->cad->actionRows(this->personne->DELETE());
	}
}

//myForm.cpp
//FormPersonnel.cpp
#include "FormPersonnel.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EIA2MININFPOOP6::FormPersonnel mainFRM;
	Application::Run(% mainFRM);
}

