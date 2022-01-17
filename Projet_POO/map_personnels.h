#pragma once
#include "map_client.h"

ref class map_personnels : public map_client
{
protected :
	String^ Role;
	String^ Date_Embauche;

public :

	map_personnels();
	String^ SELECT(void);
	String^ INSERT(void);
	String^ UPDATE(void);
	String^ DELETE(void);
	String^ DELETEALL(void);

	void setRole(String^);
	void setDate_Embauche(String^);
	//void setId_Personne(String^);
	String^ getRole(void);
	String^ getDate_Embauche(void);
	//String^ getId_Personne(void);

	String^ SELECTID(void);

};

