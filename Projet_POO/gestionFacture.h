#pragma once
#include "pch.h"
#include "CAD.h"
#include "map_facture.h"



namespace Services {
	ref class gestionFacture
	{
	private:
		CAD^ cad;
		map_facture^ facture;
		DataSet^ ds;

	public:
		gestionFacture(void);
		DataSet^ listeFacture(String^);
		void ajouterFacture(String^, String^, String^, String^, String^);
		void ajouterReste(String^, String^);
		void supprimerFacture(String^);
		//void modifierFacture(String^, String^, String^, String^, String^);
		void supprimerTout();
	};
}