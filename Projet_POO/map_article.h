#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class map_article
{
private:
	int Id;
	String^ Nom;
	String^ Quantite;
	String^ PrixHT;
	String^ Nature;
	String^ Couleur;
	//String^ EnVente;
	String^ TauxTVA;
	String^ Lid;

public :

	map_article(void);
	String^ SELECT(void);
	String^ INSERT(void);
	String^ DELETE(void);
	String^ DELETEALL(void);
	String^ UPDATE(void);
	String^ SELECTID(void);

	void setNom(String^);
	void setQuantite(String^);
	void setPrixHT(String^);
	void setNature(String^);
	void setCouleur(String^);
	//void setEnVente(String^);
	void setTauxTVA(String^);
	void setLid(String^);

	String^ getNom(void);
	String^ getQuantite(void);
	String^ getPrixHT(void);
	String^ getNature(void);
	String^ getCouleur(void);
	//String^ getEnVente(void);
	String^ getTauxTVA(void);
	String^ getLid(void);
	


};