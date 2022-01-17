#include "pch.h"
#include "map_client.h"

map_client::map_client(void)
{
	this->Id = -1;
	this->Nom = "";
	this->Prenom = "";
	this->Ne = "";
}


void map_client::setID(int id_personne)
{
	if (id_personne > 0)
	{
		this->Id = id_personne;
	}
}

void map_client::setId_Adresse(String^ id_adresse)
{
	if (id_adresse != "")
	{
		this->Id_Adresse = id_adresse;
	}
}

void map_client::setNom(String^ nom)
{
	if (nom != "")
	{
		this->Nom = nom;
	}
}

void map_client::setPrenom(String^ prenom)
{
	if (prenom != "")
	{
		this->Prenom = prenom;
	}
}

void map_client::setDate_Naissance(String^ ne)
{
	if (ne != "")
	{
		this->Ne = ne;
	}
}


void map_client::setLid(String^ lid)
{
	if (lid != "")
	{
		this->Lid = lid;
	}
}

int map_client::getId(void)
{
	return this->Id;
}

String^ map_client::getId_Adresse(void)
{
	return this->Id_Adresse;
}

String^ map_client::getNom(void)
{
	return this->Nom;
}

String^ map_client::getPrenom(void)
{
	return this->Prenom;
}

String^ map_client::getDate_Naissance(void)
{
	return this->Ne;
}


String^ map_client::getLid(void)
{
	return this->Lid;
}

String^ map_client::SELECT(void)
{
	return "SELECT * FROM dbo.Client";
}

String^ map_client::INSERT(void) {
	return "BEGIN TRANSACTION; INSERT INTO dbo.CLIENT (Id_Adresse ,Nom , Prenom , Date_Naissance) VALUES('"
		+ this->getId_Adresse() +
		"' , '"
		+ this->getNom() +
		"' , '"
		+ this->getPrenom() +
		"' , '"
		+ this->getDate_Naissance() +
		"'); COMMIT TRANSACTION;";
}

String^ map_client::UPDATE(void) {
	return "BEGIN TRANSACTION; UPDATE dbo.CLIENT SET Id_Adresse = '" + this->getId_Adresse() + "' ,Nom = ' " + this->getNom() + " ' , Prenom = ' " + this->getPrenom() + " ' , Date_Naissance = '" + this->getDate_Naissance() + "' WHERE Id = ' " + this->getLid() + "'; COMMIT TRANSACTION;";

}

String^ map_client::DELETE(void) {
	return "BEGIN TRANSACTION; DELETE FROM dbo.CLIENT WHERE Id = '"
		+ this->getLid() +
		"'; COMMIT TRANSACTION;";
}

String^ map_client::DELETEALL(void) {
	return "BEGIN TRANSACTION; DELETE FROM dbo.CLIENT ; COMMIT TRANSACTION;";
}

String^ map_client::SELECTID(void)
{
	return "SELECT TOP 1 Nom FROM dbo.CLIENT ORDER BY Id DESC";

}
