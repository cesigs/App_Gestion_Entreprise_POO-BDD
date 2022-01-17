#include "pch.h"
#include "map_choisir.h"

map_choisir::map_choisir() {

	
}

String^ map_choisir::SELECT(void)
{
	return "SELECT * FROM dbo.Choisir";
}

String^ map_choisir::INSERT(void) {
	return "BEGIN TRANSACTION; INSERT INTO dbo.CHOISIR (Id_Article, Id_Commande) VALUES('"
		+ this->getArticle() +
		"' , '"
		+ this->getCommande() +
		"'); COMMIT TRANSACTION;";
}

void map_choisir::setArticle(String^ article) {

	this->Article = article;

}

void map_choisir::setCommande(String^ commande) {

	this->Commande = commande;

}

String^ map_choisir::getArticle(void)
{
	return this->Article;
}

String^ map_choisir::getCommande(void)
{
	return this->Commande;
}