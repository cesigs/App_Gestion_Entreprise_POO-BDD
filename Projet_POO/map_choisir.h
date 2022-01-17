#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class map_choisir
{
public :
	map_choisir();
	String^ SELECT(void);
	String^ INSERT(void);

	void setArticle(String^ article);

	void setCommande(String^ commande);

	String^ getArticle(void);

	String^ getCommande(void);

private :
	String^ Article;
	String^ Commande;
};

