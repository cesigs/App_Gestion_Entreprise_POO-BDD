#pragma once
#include "CAD.h"
#include "map_article.h"

namespace Services {
	ref class gestionArticle
	{
	private:
		CAD^ cad;
		map_article^ article;
		DataSet^ ds;
	public :
		gestionArticle(void);
		DataSet^ listeArticle(String^);
		void ajouterArticle(String^, String^, String^, String^, String^,String^);
		void supprimerArticle(String^);
		void modifierArticle(String^, String^, String^, String^, String^, String^, String^);
		void supprimerTout();
		String^ getLastID();
	};
}
