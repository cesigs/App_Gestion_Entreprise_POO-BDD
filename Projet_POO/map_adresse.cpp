#include "pch.h"
#include "map_adresse.h"

map_adresse::map_adresse(void)
{
	this->Id = -1;
	this->Numero = "";
	this->Rue = "";
	this->Ville = "";
	this->Code_Postal = "";
	this->Pays = "";
}

String^ map_adresse::SELECT(void)
{
	return "SELECT * FROM Adresse";
}

String^ map_adresse::INSERT(void) {
	return "BEGIN TRANSACTION; INSERT INTO dbo.ADRESSE (Numero , Rue, Ville, Code_Postal, Pays) VALUES('" 
		+ this->getNumero() + 
		"' , '"
		+ this->getRue() + 
		"' , '"
		+ this->getVille() +
		"' , '"
		+ this->getCode_Postal() +
		"' , '"
		+ this->getPays() +
		"'); COMMIT TRANSACTION;";
}

String^ map_adresse::UPDATE(void) {
	return "BEGIN TRANSACTION; UPDATE dbo.ADRESSE SET Numero = ' " + this->getNumero() + " ' , Rue = '" + this->getRue() + "' , Ville = '" + this->getVille() + "' , Code_Postal = '" + this->getCode_Postal() + "' , Pays = '" + this->getPays() + "' WHERE Id_Adresse = ' " + this->getLid() + "'; COMMIT TRANSACTION;";
}

String^ map_adresse::DELETE(void) {
	return "BEGIN TRANSACTION; DELETE FROM dbo.ADRESSE WHERE Id_Adresse = '" 
		+ this->getLid() + 
		"' ; COMMIT TRANSACTION;";
}

String^ map_adresse::DELETEALL(void) {
	return "BEGIN TRANSACTION; DELETE FROM dbo.ADRESSE ; COMMIT TRANSACTION;";
}


void map_adresse::setNumero(String^ numero)
{	
	this->Numero = numero;
}

void map_adresse::setRue(String^ rue)
{
	this->Rue = rue;
}

void map_adresse::setVille(String^ ville)
{
	this->Ville = ville;
}

void map_adresse::setCode_Postal(String^ code)
{
	this->Code_Postal = code;
}

void map_adresse::setPays(String^ pays)
{
	this->Pays = pays;
}

void map_adresse::setLid(String^ lid)
{
	this->Lid = lid;
}


String^ map_adresse::getNumero(void)
{
	return this->Numero;
}

String^ map_adresse::getRue(void)
{
	return this->Rue;
}

String^ map_adresse::getVille(void)
{
	return this->Ville;
}

String^ map_adresse::getCode_Postal(void)
{
	return this->Code_Postal;
}

String^ map_adresse::getPays(void)
{
	return this->Pays;
}

String^ map_adresse::getLid(void)
{
	return this->Lid;
}

String^ map_adresse::SELECTID(void)
{
	return "SELECT TOP 1 Rue FROM dbo.ADRESSE ORDER BY Id_Adresse DESC";

}