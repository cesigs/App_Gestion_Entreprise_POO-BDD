#pragma once
#include "CAD.h"
#include "map_choisir.h"

namespace Services {
	ref class gestionChoisir
	{
	private:
		CAD^ cad;
		map_choisir^ choisir;
		DataSet^ ds;

	public :

		gestionChoisir();
		DataSet^ listeChoisir(String^ datableName);
		void ajouterChoisir(String^, String^);

	};
}

