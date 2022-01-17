#include "pch.h"
#include "gestionCommande.h"
#include <string>
#include <iostream>

using namespace std;
int i = 0;


namespace Services {
    gestionCommande::gestionCommande(void)
    {
        this->cad = gcnew CAD();
        this->commande = gcnew map_commande();
    }

    DataSet^ gestionCommande::listeCommande(String^ datableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->commande->SELECT(), datableName);
        return this->ds;
    }

    void gestionCommande::ajouterCommande(String^ id_personne, String^ id_adresse, String^ date, String^ reste, String^promo)
    {
        int id;
        this->commande->setId_Client(id_personne);
        this->commande->setId_Adresse(id_adresse);
        this->commande->setDates(date);
        this->commande->setReste(reste);
        this->commande->setPromo(promo);
        id = this->cad->actionRowsID(this->commande->INSERT());
    }

    void gestionCommande::ajouterPromo(String^ idclient, String^ dateanniv) {
        int id;
        id = this->cad->actionRowsID(this->commande->INSERTPROMO(idclient, dateanniv));
    }
    void gestionCommande::modifierCommande(String^ ref, String^ id_personne, String^ id_adresse, String^ date, String^ reste, String^ promo) {

        int id;
        this->commande->setRef(ref);
        this->commande->setId_Client(id_personne);
        this->commande->setId_Adresse(id_adresse);
        this->commande->setDates(date);
        this->commande->setReste(reste);
        this->commande->setPromo(promo);
        id = this->cad->actionRowsID(this->commande->UPDATE());
    }

    void gestionCommande::supprimerCommande(String^ lid)
    {
        int id;
        this->commande->setLid(lid);
        id = this->cad->actionRowsID(this->commande->DELETE());
    }

    void gestionCommande::supprimerTout()
    {
        this->cad->actionRowsID(this->commande->DELETEALL());
    }

    String^ gestionCommande::getLastID() {
        String^ id;
        id = Convert::ToString(this->cad->actionRowsID(this->commande->SELECTID()));
        return id;
    }

    /*String^ gestionCommande::getLIV() {
        String^ id;
        id = this->cad->recupstring(this->commande->SELECTLIV(getLastID()));
        return id;
    }*/
    String^ gestionCommande::getVILLE() {
        String^ id;
        id = this->cad->recupstring(this->commande->SELECTVILLE(getLastID()));
        return id;
    }
    String^ gestionCommande::getNOM() {
        String^ id;
        id = this->cad->recupstring(this->commande->SELECTNOM(getLastID()));
        return id;
    }
    String^ gestionCommande::getPRENOM() {
        String^ id;
        id = this->cad->recupstring(this->commande->SELECTPRENOM(getLastID()));
        return id;
    }
   
    String^ gestionCommande::getREF() {
        ////String^ date;
        //String^ ville;
        //String^ nom; 
        //String^ prenom;
        ////date = getLIV();
        //ville = getVILLE();
        //nom = getNOM();
        //prenom = getPRENOM();
        //String^ ref = ville->Remove(3) + prenom->Remove(2) + nom->Remove(2);
        string str = "test";
        i++;
        str = to_string(i);
        String^ ref = gcnew String(str.c_str());
        return ref;

    }
}//Lenght = end - startindex