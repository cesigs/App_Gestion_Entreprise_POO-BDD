#pragma once
#include "map_client.h"
#include "gestionClient.h"

namespace PrositFin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormVerifClient
	/// </summary>
	public ref class FormVerifClient : public System::Windows::Forms::Form
	{
	public:
		FormVerifClient(void)
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
		~FormVerifClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
		   Services::gestionClient^ gestionClient;
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(138, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// FormVerifClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(331, 133);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"FormVerifClient";
			this->Text = L"Vérification Client";
			this->Load += gcnew System::EventHandler(this, &FormVerifClient::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		gestionClient = gcnew Services::gestionClient();
		label1->Text = "Ajout du client " + gestionClient->getLastID() + " reussi.";
	}
	};
}
