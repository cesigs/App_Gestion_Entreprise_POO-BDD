#include "pch.h"
#include "gestionArticle.h"

namespace Services {
    gestionArticle::gestionArticle(void)
    {
        this->cad = gcnew CAD();
        this->article = gcnew map_article();
    }

    DataSet^ gestionArticle::listeArticle(String^ datableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->article->SELECT(), datableName);
        return this->ds;
    }

    void gestionArticle::ajouterArticle(String^ nom, String^ quantite, String^ prixht, String^ nature, String^ couleur,String^ tauxtva )
    {
        int id;
        this->article->setNom(nom);
        this->article->setQuantite(quantite);
        this->article->setPrixHT(prixht);
        this->article->setNature(nature);
        this->article->setCouleur(couleur);
        this->article->setTauxTVA(tauxtva);
        id = this->cad->actionRowsID(this->article->INSERT());
    }

    void gestionArticle::modifierArticle(String^ nom, String^ quantite, String^ prixht, String^ nature, String^ couleur, String^ tauxtva, String^ lid) {

        int id;
        this->article->setNom(nom);
        this->article->setQuantite(quantite);
        this->article->setPrixHT(prixht);
        this->article->setNature(nature);
        this->article->setCouleur(couleur);
        this->article->setTauxTVA(tauxtva);
        this->article->setLid(lid);
        id = this->cad->actionRowsID(this->article->UPDATE());
    }

    void gestionArticle::supprimerArticle(String^ lid)
    {
        int id;
        this->article->setLid(lid);
        id = this->cad->actionRowsID(this->article->DELETE());
    }

    void gestionArticle::supprimerTout()
    {
        this->cad->actionRowsID(this->article->DELETEALL());
    }

    String^ gestionArticle::getLastID() {
        String^ id;
        id = Convert::ToString(this->cad->recupstring(this->article->SELECTID()));
        return id;
    }
}