#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class map_commande
{
private:
	int Id;
	String^ Ref;
	String^ Id_Client;
	String^ Id_Adresse;
	String^ Dates;
	//String^ Livre;
	String^ Reste;
	//String^ Envoie;
	//String^ Moyen_Paiement;
	String^ Promo;
	String^ Lid;

public:

	map_commande(void);
	String^ SELECT(void);
	String^ SELECTID(void);
	//String^ SELECTLIV(String^);
	String^ SELECTVILLE(String^ ok);
	String^ SELECTNOM(String^ ok);
	String^ SELECTPRENOM(String^ ok);
	String^ INSERT(void);
	String^ INSERTREF(String^,String^);
	String^ INSERTPROMO(String^, String^);
	String^ DELETE(void);
	String^ DELETEALL(void);
	String^ UPDATE(void);



	void setId_Client(String^);
	void setRef(String^);
	void setId_Adresse(String^);
	void setDates(String^);
	//void setMoyen_Paiement(String^);
	void setPromo(String^);
	void setLid(String^);
	

	String^ getId_Client(void);
	String^ getRef(void);
	String^ getId_Adresse(void);
	String^ getDates(void);
	//String^ getMoyen_Paiement(void);
	String^ getPromo(void);
	String^ getLid(void);
	//void setDate_Livre(String^ livre);
	//String^ getDate_Livre(void);
	void setReste(String^ reste);
	String^ getReste(void);
	//void setDate_Envoie(String^ envoie);
	//String^ getDate_Envoie(void);
	//String^ getDateLiv();
	//String^ getDateEnvoi();
};
