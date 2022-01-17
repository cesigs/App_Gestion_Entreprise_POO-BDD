#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class map_adresse
{
private :
	int Id;
	String^ Numero;
	String^ Rue;
	String^ Ville;
	String^ Code_Postal;
	String^ Pays;
	String^ Lid;

public :

	map_adresse(void);
	String^ SELECT(void);
	String^ INSERT(void);
	String^ DELETE(void);
	String^ DELETEALL(void);
	String^ UPDATE(void);

	void setNumero(String^);
	void setRue(String^);
	void setVille(String^);
	void setCode_Postal(String^);
	void setPays(String^);
	void setLid(String^);

	String^ getNumero(void);
	String^ getRue(void);
	String^ getVille(void);
	String^ getCode_Postal(void);
	String^ getPays(void);
	String^ getLid(void);
	String^ SELECTID(void);
};

