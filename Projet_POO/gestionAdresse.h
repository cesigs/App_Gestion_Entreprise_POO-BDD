#pragma once
#include "CAD.h"
#include "map_adresse.h"

namespace Services {
	ref class gestionAdresse
	{
	private:
		CAD^ cad;
		map_adresse^ adresse;
		DataSet^ ds;

	public:
		gestionAdresse(void);
		DataSet^ listeAdresse(String^);
		void ajouterAdresse(String^,  String^, String^, String^, String^);
		void supprimerAdresse(String^);
		void modifierAdresse(String^,  String^, String^, String^, String^, String^);
		void supprimerTout();
		String^ getLastID();
	};
}
