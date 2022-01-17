#pragma once
#include "pch.h"
#include "CAD.h"
#include "map_commande.h"



namespace Services {
	ref class gestionCommande
	{
	private:
		CAD^ cad;
		map_commande^ commande;
		DataSet^ ds;

	public:
		gestionCommande(void);
		DataSet^ listeCommande(String^);
		void ajouterCommande(String^, String^, String^, String^, String^);
		void supprimerCommande(String^);
		void ajouterPromo(String^, String^);
		void modifierCommande(String^, String^, String^, String^, String^, String^);
		void supprimerTout();
		String^ getLastID();
		//String^ getLIV();
		String^ getVILLE();
		String^ getNOM();
		String^ getPRENOM();
		String^ getREF();
		
	};
}

typedef String^ (*pf)(void);