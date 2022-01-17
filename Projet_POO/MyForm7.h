#pragma once
#include "map_personnels.h"
#include "gestionPersonnels.h"

namespace PrositFin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormPersonnel7
	/// </summary>
	public ref class FormPersonnel7 : public System::Windows::Forms::Form
	{
	public:
		FormPersonnel7(void)
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
		~FormPersonnel7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
		   Services::gestionPersonnels^ gestionPersonnels;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->label1->Location = System::Drawing::Point(140, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// FormPersonnel7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(331, 133);
			this->Controls->Add(this->label1);
			this->Name = L"FormPersonnel7";
			this->Text = L"Vérification Personnel";
			this->Load += gcnew System::EventHandler(this, &FormPersonnel7::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		gestionPersonnels = gcnew Services::gestionPersonnels();
		label1->Text = "Ajout du personnel " + gestionPersonnels->getLastID() + " reussi.";
	}
	};
}
