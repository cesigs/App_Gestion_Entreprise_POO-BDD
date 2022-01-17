#include "pch.h"
#include "gestionPersonnels.h"

namespace Services {
    gestionPersonnels::gestionPersonnels(void)
    {
        this->cad = gcnew CAD();
        this->personnel = gcnew map_personnels();
    }

    DataSet^ gestionPersonnels::listePersonnes(String^ datableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->personnel->SELECT(), datableName);
        return this->ds;
    }

    void gestionPersonnels::ajouterPersonne(String^ id_adresse,String^ nom, String^ prenom, String^ role, String^ date, String^ ne)
    {
        int id;
        this->personnel->setId_Adresse(id_adresse);
        this->personnel->setNom(nom);
        this->personnel->setPrenom(prenom);
        this->personnel->setRole(role);
        this->personnel->setDate_Embauche(date);
        this->personnel->setDate_Naissance(ne);
        //this->personnel->setId_Personne(id_personne);
        id = this->cad->actionRowsID(this->personnel->INSERT());
    }

    void gestionPersonnels::modifierPersonne(String^ id_adresse, String^ nom, String^ prenom,String^ role,String^date, String^ ne, String^ lid)
    {
        int id;
        this->personnel->setId_Adresse(id_adresse);
        this->personnel->setNom(nom);
        this->personnel->setPrenom(prenom);
        this->personnel->setRole(role);
        this->personnel->setDate_Embauche(date);
        this->personnel->setDate_Naissance(ne);
       // this->personnel->setId_Personne(id_personne);
        this->personnel->setLid(lid);
        id = this->cad->actionRowsID(this->personnel->UPDATE());
    }

    void gestionPersonnels::supprimerPersonne(String^ lid)
    {
        int id;
        this->personnel->setLid(lid);
        id = this->cad->actionRowsID(this->personnel->DELETE());
    }

    void gestionPersonnels::supprimerTout()
    {
        this->cad->actionRowsID(this->personnel->DELETEALL());
    }

    String^ gestionPersonnels::getLastID() {
        String^ id;
        id = Convert::ToString(this->cad->recupstring(this->personnel->SELECTID()));
        return id;
    }

}


