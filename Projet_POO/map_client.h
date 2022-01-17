#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class map_client
{
protected :
	int Id;
	String^ Id_Adresse;
	String^ Nom;
	String^ Prenom;
	String^ Ne;
	String^ Id_Personne;
	String^ Lid;

public:
	map_client(void);
	String^ SELECT(void);
	String^ INSERT(void);
	String^ UPDATE(void);
	String^ DELETE(void);
	String^ DELETEALL(void);

	String^ SELECTID(void);

	void setID(int);
	void setId_Adresse(String^);
	void setNom(String^);
	void setPrenom(String^);
	void setDate_Naissance(String^);
	void setLid(String^);

	int getId(void);
	String^ getId_Adresse(void);
	String^ getNom(void);
	String^ getPrenom(void);
	String^ getDate_Naissance(void);
	String^ getLid(void);

};
