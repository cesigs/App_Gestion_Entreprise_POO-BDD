#include "pch.h"
#include "gestionFacture.h"

namespace Services {
    gestionFacture::gestionFacture(void)
    {
        this->cad = gcnew CAD();
        this->facture = gcnew map_facture();
    }

    DataSet^ gestionFacture::listeFacture(String^ datableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->facture->SELECT(), datableName);
        return this->ds;
    }

    void gestionFacture::ajouterFacture(String^moyen_paiement,String^montant, String^ date, String^ id_adresse, String^ id_commande)
    {
        int id;
        this->facture->setMoyen_Paiement(moyen_paiement);
        this->facture->setMontant_Paye(montant);
        this->facture->setDate_Paiement(date);
        this->facture->setId_Adresse(id_adresse);
        this->facture->setId_Commande(id_commande);
        
        id = this->cad->actionRowsID(this->facture->INSERT());
        //id = this->cad->actionRowsID(this->facture->INSERTREF(id_personne, id_adresse));
        //id = this->cad->actionRowsID(this->facture->INSERTPROMO(id_personne, date));
    }

    void gestionFacture::ajouterReste(String^ reste, String^ idcommande) {
        int id;
        id = this->cad->actionRowsID(this->facture->UPDATERESTE(reste, idcommande));
    }

    /*void gestionfacture::modifierfacture(String^ id_personne, String^ id_adresse, String^ date, String^ anniv, String^ lid) {

        int id;
        this->facture->setId_Client(id_personne);
        this->facture->setId_Adresse(id_adresse);
        this->facture->setDates(date);
        this->facture->setPromo(anniv);
        this->facture->setLid(lid);
        id = this->cad->actionRowsID(this->facture->UPDATE());
    }*/

    void gestionFacture::supprimerFacture(String^ lid)
    {
        int id;
        this->facture->setLid(lid);
        id = this->cad->actionRowsID(this->facture->DELETE());
    }

    void gestionFacture::supprimerTout()
    {
        this->cad->actionRowsID(this->facture->DELETEALL());
    }

}