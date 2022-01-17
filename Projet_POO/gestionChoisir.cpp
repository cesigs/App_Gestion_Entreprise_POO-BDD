#include "pch.h"
#include "gestionChoisir.h"

namespace Services {

    gestionChoisir::gestionChoisir(void)
    {
        this->cad = gcnew CAD();
        this->choisir = gcnew map_choisir();
    }

    DataSet^ gestionChoisir::listeChoisir(String^ datableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->choisir->SELECT(), datableName);
        return this->ds;
    }

    void gestionChoisir::ajouterChoisir(String^ article, String^ commande)
    {
        int id;
        this->choisir->setArticle(article);
        this->choisir->setCommande(commande);
        id = this->cad->actionRowsID(this->choisir->INSERT());
    }

}