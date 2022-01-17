#include "pch.h"
#include "gestionAdresse.h"

namespace Services {
    gestionAdresse::gestionAdresse(void)
    {
        this->cad = gcnew CAD();
        this->adresse = gcnew map_adresse();
    }

    DataSet^ gestionAdresse::listeAdresse(String^ datableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->adresse->SELECT(), datableName);
        return this->ds;
    }

    void gestionAdresse::ajouterAdresse(String^ numero, String^ rue, String^ ville, String^ code, String^ pays)
    {
        int id;
        this->adresse->setNumero(numero);
        this->adresse->setRue(rue);
        this->adresse->setVille(ville);
        this->adresse->setCode_Postal(code);
        this->adresse->setPays(pays);
        id = this->cad->actionRowsID(this->adresse->INSERT());
    }

    void gestionAdresse::modifierAdresse(String^ numero, String^ rue, String^ ville, String^ code, String^ pays, String^ lid) {

        int id;
        this->adresse->setNumero(numero);
        this->adresse->setRue(rue);
        this->adresse->setVille(ville);
        this->adresse->setCode_Postal(code);
        this->adresse->setPays(pays);
        this->adresse->setLid(lid);
        id = this->cad->actionRowsID(this->adresse->UPDATE());
    }

    void gestionAdresse::supprimerAdresse(String^ lid)
    {
        int id;
        this->adresse->setLid(lid);
        id = this->cad->actionRowsID(this->adresse->DELETE());
    }

    void gestionAdresse::supprimerTout()
    {
        this->cad->actionRowsID(this->adresse->DELETEALL());
    }

    String^ gestionAdresse::getLastID() {
        String^ id;
        id = Convert::ToString(this->cad->recupstring(this->adresse->SELECTID()));
        return id;
    }
}