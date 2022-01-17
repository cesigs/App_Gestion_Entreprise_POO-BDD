#include "pch.h"
#include "gestionStat.h"
#include "map_statistique.h"
namespace Services {
	gestionStat::gestionStat()
	{
		this->cad = gcnew CAD();
		this->Panier = gcnew map_statistique();
	}

	DataSet^ gestionStat::affichagePanierMoyen()
	{
		this->dsPanierMoyen = gcnew DataSet();
		this->dsPanierMoyen = this->cad->getRows(this->Panier->PanierMoyne(), "Panier");
		return this->dsPanierMoyen;
	}
	DataSet^ gestionStat::affichageTop10()
	{
		this->dsTop10 = gcnew DataSet();
		this->dsTop10 = this->cad->getRows(this->Panier->Top10(), "Top10");
		return this->dsTop10;
	}
	DataSet^ gestionStat::affichageBottom10()
	{
		this->dsBottom10 = gcnew DataSet();
		this->dsBottom10 = this->cad->getRows(this->Panier->Bottom10(), "Bottom10");
		return this->dsBottom10;
	}
	DataSet^ gestionStat::affichageValeurComer()
	{
		this->dsValeurComer = gcnew DataSet();
		this->dsValeurComer = this->cad->getRows(this->Panier->ValeurComer(), "ValeurComer");
		return this->dsValeurComer;
	}
	DataSet^ gestionStat::affichageValeurAchat()
	{
		this->dsValeurAchat = gcnew DataSet();
		this->dsValeurAchat = this->cad->getRows(this->Panier->ValeurAchat(), "ValeurAchat");
		return this->dsValeurAchat;
	}

	DataSet^ gestionStat::affichageCA(String^texte)
	{
		this->Panier->settexte(texte);
		this->dsCA = gcnew DataSet();
		this->dsCA = this->cad->getRows(this->Panier->CA(),"CAaa");
		return this->dsCA;
		// TODO: insérer une instruction return ici
	}

	String^ gestionStat::getQuantite()
	{
		String^ q;
		q = this->cad->recupstring(this->Panier->getQuantite());
		return q;
	}
	String^ gestionStat::getPrix()
	{
		String^ q;
		q = this->cad->recupstring(this->Panier->getPrix());
		return q;
	}
	String^ gestionStat::CA(String^ texte) {
		String^ q;
		q = this->cad->recupstring(this->Panier->CA());
		return q;

	}

}