#include "pch.h"
#include "map_personnels.h"

map_personnels::map_personnels(void)
{
	map_client();
	this->Role = "";
	this->Date_Embauche = "";
}

String^ map_personnels::SELECT(void)
{
	return "SELECT * FROM dbo.Personnel";
}

String^ map_personnels::INSERT(void) {
	return "BEGIN TRANSACTION; INSERT INTO dbo.PERSONNEL (Id_Adresse , Nom , Prenom , Role , Date_Embauche , Date_Naissance ) VALUES('"
		+ this->getId_Adresse() +
		"' , '"
		+ this->getNom() +
		"' , '"
		+ this->getPrenom() +
		"' , '"
		+ this->getRole() +
		"' , '"
		+ this->getDate_Embauche() +
		"' , '"
		+ this->getDate_Naissance() +
		//"' , '"
		//+ this->getId_Personne() + , Id_Personnel
		"'); COMMIT TRANSACTION;";
}

String^ map_personnels::UPDATE(void) {
	return "BEGIN TRANSACTION; UPDATE dbo.PERSONNEL SET Id_Adresse = ' " + this->getId_Adresse() + "' , Nom = '" + this->getNom() + " ' , Prenom = ' " + this->getPrenom() + " ' , Role = '" + this->getRole() + " ' , Date_Embauche = '" + this->getDate_Embauche() + " ' , Date_Naissance = '" + this->getDate_Naissance() + "' WHERE Id = ' " + this->getLid() + "'; COMMIT TRANSACTION;";

}

String^ map_personnels::DELETE(void) {
	return "BEGIN TRANSACTION; DELETE FROM dbo.PERSONNEL WHERE Id = '"
		+ this->getLid() +
		"'; COMMIT TRANSACTION;";
}

String^ map_personnels::DELETEALL(void) {
	return "BEGIN TRANSACTION; DELETE FROM dbo.PERSONNEL ; COMMIT TRANSACTION;";
}

void map_personnels::setRole(String^ role)
{
	if (role != "")
	{
		this->Role = role;
	}
}

void map_personnels::setDate_Embauche(String^ date)
{
	if (date != "")
	{
		this->Date_Embauche = date;
	}
}

//void map_personnels::setId_Personne(String^ id_personne)
//{
//	if (id_personne != "")
//	{
//		this->Id_Personne = id_personne;
//	}
//}


String^ map_personnels::getRole(void)
{
	return this->Role;
}

String^ map_personnels::getDate_Embauche(void)
{
	return this->Date_Embauche;
}

//String^ map_personnels::getId_Personne(void)
//{
//	return this->Id_Personne;
//}

String^ map_personnels::SELECTID(void)
{
	return "SELECT TOP 1 Nom FROM dbo.PERSONNEL ORDER BY Id DESC";

}