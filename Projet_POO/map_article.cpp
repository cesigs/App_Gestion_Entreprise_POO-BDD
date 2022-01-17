#include "pch.h"
#include "map_article.h"

map_article::map_article(){

	this->Nom = "";
	this->Quantite = "";
	this->PrixHT = "";
	this->Nature = "";
	this->Couleur = "";
	//this->EnVente = "";
	this->TauxTVA = "";
}

String^ map_article::SELECT(void)
{
	return "SELECT * FROM dbo.Article";
}

String^ map_article::INSERT(void) {
	return "BEGIN TRANSACTION; INSERT INTO dbo.ARTICLE (Nom , Quantite , PrixHT, Nature, Couleur, TauxTVA) VALUES('"
		+ this->getNom() +
		"' , '"
		+ this->getQuantite() +
		"' , '"
		+ this->getPrixHT() +
		"' , '"
		+ this->getNature() +
		"' , '"
		+ this->getCouleur() +
		"' , '"
		/*+ this->getEnVente() +
		"' , '"*/
		+ this->getTauxTVA() +
		"'); COMMIT TRANSACTION;";
}

String^ map_article::UPDATE(void) {
	return "BEGIN TRANSACTION; UPDATE dbo.Article SET Nom = ' " + this->getNom() + " ' , Quantite = ' " + this->getQuantite() + " ' , PrixHT = '" + this->getPrixHT() + "' , Nature = '" + this->getNature() + "' , Couleur = '" + this->getCouleur() + "' , TauxTVA = '" + this->getTauxTVA() + "' WHERE Id = '" + this->getLid() + "'; COMMIT TRANSACTION;";
}

String^ map_article::DELETE(void) {
	return "BEGIN TRANSACTION; DELETE FROM dbo.ARTICLE WHERE Id = '"
		+ this->getLid() +
		"' ; COMMIT TRANSACTION;";
}

String^ map_article::DELETEALL(void) {
	return "BEGIN TRANSACTION; DELETE FROM dbo.ARTICLE ; COMMIT TRANSACTION;";
}

void map_article::setNom(String^ nom){

	this->Nom = nom;

}

void map_article::setQuantite(String^ quantite) {

	this->Quantite = quantite;

}

void map_article::setPrixHT(String^ prixht) {

	this->PrixHT = prixht;

}

void map_article::setNature(String^ nature) {

	this->Nature = nature;

}

void map_article::setCouleur(String^ couleur) {

	this->Couleur = couleur;

}

//void map_article::setEnVente(String^ envente) {
//
//	this->EnVente = envente;
//
//}

void map_article::setTauxTVA(String^ tauxtva) {

	this->TauxTVA = tauxtva;

}

void map_article::setLid(String^ lid)
{
	this->Lid = lid;
}

String^ map_article::getNom(void)
{
	return this->Nom;
}

String^ map_article::getQuantite(void)
{
	return this->Quantite;
}

String^ map_article::getNature(void)
{
	return this->Nature;
}

String^ map_article::getPrixHT(void)
{
	return this->PrixHT;
}

String^ map_article::getCouleur(void)
{
	return this->Couleur;
}

//string^ map_article::getenvente(void)
//{
//	return this->envente;
//}

String^ map_article::getTauxTVA(void)
{
	return this->TauxTVA;
}

String^ map_article::getLid(void)
{
	return this->Lid;
}

String^ map_article::SELECTID(void)
{
	return "SELECT TOP 1 Nom FROM dbo.ARTICLE ORDER BY Id DESC";

}