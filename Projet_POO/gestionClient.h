#pragma once
#include "CAD.h"
#include "map_client.h"

namespace Services {
	ref class gestionClient
	{
	private:
		CAD^ cad;
		map_client^ personne;
		DataSet^ ds;

	public:

		gestionClient(void);
		DataSet^ listeClient(String^);
		void ajouterClient(String^, String^, String^, String^);
		void supprimerClient(String^);
		void modifierClient(String^, String^, String^, String^, String^);
		void supprimerTout();
		String^ getLastID();
	};
}

