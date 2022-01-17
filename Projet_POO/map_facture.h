#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class map_facture
{
private:
	int Id;
	String^ Moyen_Paiement;
	String^ Montant_Paye;
	String^ Date_Paiement;
	String^ Id_Commande;
	String^ Id_Adresse;
	String^ Lid;

public:

	map_facture(void);
	String^ SELECT(void);
	String^ INSERT(void);
	String^ UPDATERESTE(String^, String^);
	String^ DELETE(void);
	String^ DELETEALL(void);
	String^ UPDATE(void);


	void setId_Commande(String^);
	void setMoyen_Paiement(String^);
	void setId_Adresse(String^);
	void setDate_Paiement(String^);
	void setMontant_Paye(String^);
	void setLid(String^);


	String^ getId_Commande(void);
	String^ getMoyen_Paiement(void);
	String^ getId_Adresse(void);
	String^ getDate_Paiement(void);
	String^ getMontant_Paye(void);
	String^ getLid(void);
};
