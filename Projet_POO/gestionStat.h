#pragma once
#include "CAD.h"
#include "map_statistique.h"
namespace Services {
	ref class gestionStat
	{
	public:
		gestionStat();
		DataSet^ affichagePanierMoyen();
		DataSet^ affichageTop10();
		DataSet^ affichageBottom10();
		DataSet^ affichageValeurComer();
		DataSet^ affichageValeurAchat();
		DataSet^ affichageCA(String^);
		String^ getQuantite();
		String^ getPrix();
		String^ CA(String^ texte);
	private:
		CAD^ cad;
		DataSet^ dsPanierMoyen;
		DataSet^ dsTop10;
		DataSet^ dsBottom10;
		DataSet^ dsValeurComer;
		DataSet^ dsValeurAchat;
		DataSet^ dsCA;
		int Quantite;
		int Prix;
		map_statistique^ Panier;

	};
}
