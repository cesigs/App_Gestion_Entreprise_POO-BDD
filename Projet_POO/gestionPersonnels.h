#pragma once
#include "CAD.h"
#include "map_personnels.h"

namespace Services {
	ref class gestionPersonnels
	{
	private:
		CAD^ cad;
		map_personnels^ personnel;
		DataSet^ ds;

	public:
		gestionPersonnels(void);
		DataSet^ listePersonnes(String^);
		void ajouterPersonne(String^  ,String^, String^, String^,String^ , String^);
		void supprimerPersonne(String^);
		void modifierPersonne(String^, String^, String^, String^, String^, String^, String^);
		void supprimerTout();
		String^ getLastID();
	};

}
