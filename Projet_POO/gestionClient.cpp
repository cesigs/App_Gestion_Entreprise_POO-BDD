#include "pch.h"
#include "gestionClient.h"

namespace Services {
    gestionClient::gestionClient(void)
    {
        this->cad = gcnew CAD();
        this->personne = gcnew map_client();
    }

    DataSet^ gestionClient::listeClient(String^ datableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->personne->SELECT(), datableName);
        return this->ds;
    }

    void gestionClient::ajouterClient(String^  id_adresse ,String^ nom, String^ prenom, String^ ne)
    {
        int id;
        this->personne->setId_Adresse(id_adresse);
        this->personne->setNom(nom);
        this->personne->setPrenom(prenom);
        this->personne->setDate_Naissance(ne);
        id = this->cad->actionRowsID(this->personne->INSERT());
    }

    void gestionClient::modifierClient(String^ id_adresse,  String^ nom, String^ prenom, String^ ne, String^ lid)
    {
        int id;
        this->personne->setId_Adresse(id_adresse);
        this->personne->setNom(nom);
        this->personne->setPrenom(prenom);
        this->personne->setDate_Naissance(ne);
        this->personne->setLid(lid);
        id = this->cad->actionRowsID(this->personne->UPDATE());
    }

    void gestionClient::supprimerClient(String^ lid)
    {
        int id;
        this->personne->setLid(lid);
        id = this->cad->actionRowsID(this->personne->DELETE());
    }

    void gestionClient::supprimerTout()
    {
        this->cad->actionRowsID(this->personne->DELETEALL());
    }

    String^ gestionClient::getLastID() {
        String^ id;
        id = Convert::ToString(this->cad->recupstring(this->personne->SELECTID()));
        return id;
    }
}

