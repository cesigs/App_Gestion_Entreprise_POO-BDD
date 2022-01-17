#include "pch.h"
#include "map_commande.h"
#include "gestionCommande.h"
#include "CAD.h"

map_commande::map_commande(void)
{
	this->Id = -1;
	this->Id_Client = "";
	this->Id_Adresse = "";
	this->Dates = "";
	this->Promo = "";
}

String^ map_commande::SELECT(void)
{
	return "SELECT * FROM dbo.Commande";

}

String^ map_commande::SELECTID(void)
{
	return "SELECT TOP 1 Id FROM dbo.Commande ORDER BY Id DESC";

}

//String^ map_commande::SELECTLIV(String^ ok)
//{
//	return "Select Date_Livraison FROM dbo.Commande WHERE Id = "+ok+";";
//}

String^ map_commande::SELECTVILLE(String^ ok)
{
	return "SELECT Ville FROM dbo.Adresse WHERE Id_Adresse = (SELECT Id_Adresse FROM dbo.Commande WHERE Id_Adresse="+ok+");";

}
String^ map_commande::SELECTNOM(String^ ok)
{
	return "SELECT Nom FROM dbo.Client WHERE ID = (SELECT Id_Client FROM dbo.Commande WHERE Id_Client=" + ok + ");";

}
String^ map_commande::SELECTPRENOM(String^ ok)
{
	return "SELECT Prenom FROM dbo.Client WHERE ID = (SELECT Id_Client FROM dbo.Commande WHERE Id_Client =" + ok + ");";

}


String^ map_commande::INSERT(void)
{
	//String^debutref = CAD::recupstring()
	return " INSERT INTO dbo.COMMANDE (Id_Client ,Id_Adresse , Date_Commande , Reste_A_Payer, Promotion) VALUES( '"
		+ this->getId_Client() +
		"' , '"
		+ this->getId_Adresse() +
		"' , '"
		+ this->getDates() +
		"' , '"
		+ this->getReste() +
		"' , '"
		+ this->getPromo() +
		/*"' , '"
		+ this->getDateLiv() +
		"' , '"
		+ this->getDateEnvoi() +*/
		"' );";
}

String^ map_commande::INSERTREF(String^ idclient,String^ idadresse) {
	return "UPDATE dbo.COMMANDE SET Ref = CONCAT((SELECT Date_Commande FROM dbo.COMMANDE WHERE Id_Client = '" + this->getId_Client() +
		"'),(SELECT Pays FROM dbo.ADRESSE WHERE Id_Adresse = '" +
		this->getId_Adresse() + "'),(SELECT Nom FROM dbo.CLIENT WHERE Id_Client = '" +
		this->getId_Client() + "'),(SELECT Prenom FROM dbo.CLIENT WHERE Id_Client = '" +
		this->getId_Client() + "'));";
}

String^ map_commande::INSERTPROMO(String^ id, String^ date) {
	return "UPDATE dbo.COMMANDE SET Promo = (CASE WHEN (SELECT Date_Naissance FROM dbo.CLIENT WHERE Id = '" +
		id + "') = '" + date + "' THEN Promo = 15 ELSE Promo = 0 END); ";
}

String^ map_commande::DELETE(void)
{
	return "BEGIN TRANSACTION; DELETE FROM dbo.COMMANDE WHERE Id = '"
		+ this->getLid() +
		"' ; COMMIT TRANSACTION;";
}

String^ map_commande::DELETEALL(void)
{
	return "BEGIN TRANSACTION; DELETE FROM dbo.COMMANDE ; COMMIT TRANSACTION;";
}

String^ map_commande::UPDATE(void)
{
	return "BEGIN TRANSACTION; UPDATE dbo.COMMANDE SET Ref = '" + this->getRef() + 
		"' WHERE Id_Client = ' " + this->getId_Client() + " ' AND Id_Adresse = ' " + this->getId_Adresse() +
		" ' AND Date_Commande = '" + this->getDates() + "' AND Reste_A_Payer = '" +
		this->getReste() + "' AND Promotion = '" + this->getPromo() + "'; COMMIT TRANSACTION;";
}


void map_commande::setId_Client(String^ idclient)
{
	this->Id_Client = idclient;
}

void map_commande::setRef(String^ ref)
{
	this->Ref = ref;
}

void map_commande::setId_Adresse(String^ idadresse)
{
	this->Id_Adresse = idadresse;
}

void map_commande::setDates(String^ date)
{
	this->Dates = date;
}

void map_commande::setPromo(String^ anniv)
{
	this->Promo = anniv;
}

void map_commande::setLid(String^ lid)
{
	this->Lid = lid;
}

String^ map_commande::getId_Client(void)
{
	return this->Id_Client;
}

String^ map_commande::getRef(void)
{
	return this->Ref;
}

String^ map_commande::getId_Adresse(void)
{
	return this->Id_Adresse;
}

String^ map_commande::getDates(void)
{
	
	return this->Dates;
}

String^ map_commande::getPromo(void)
{
	return this->Promo;
}

String^ map_commande::getLid(void)
{
	return this->Lid;
}

//void map_commande::setDate_Livre(String^ livre)
//{
//	this->Livre = livre;
//}
//
//String^ map_commande::getDate_Livre(void)
//{
//	return this->Livre;
//}

void map_commande::setReste(String^ reste)
{
	this->Reste = reste;
}

String^ map_commande::getReste(void)
{
	return this->Reste;
}

//void map_commande::setDate_Envoie(String^ envoie)
//{
//	this->Envoie = envoie;
//}
//
//String^ map_commande::getDate_Envoie(void)
//{
//	return this->Envoie;
//}

// String^ map_commande::getDateLiv()
//{
//    String^ dateliv = this->getDates();
//    String^ jourS = dateliv->Remove(2);
//    String^ moisS = dateliv->Substring(3)->Remove(2);
//    String^ anneeS = dateliv->Substring(6);
//    int jour = Convert::ToInt32(jourS);
//    int mois = Convert::ToInt32(moisS);
//    int annee = Convert::ToInt32(anneeS);
//    switch (mois) {
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 8:
//    case 10:
//    case 12:
//        if (mois < 12) {
//            if (jour > 26) {
//                mois++;
//                jour -= 31;
//            }
//        }
//        else {
//            if (jour > 26) {
//                mois = 1;
//                annee++;
//                jour -= 31;
//            }
//        }
//        jour += 5;
//        break;
//    case 4:
//    case 6:
//    case 9:
//    case 11:
//        if (jour > 25) {
//            mois++;
//            jour -= 30;
//        }
//        jour += 5;
//        break;
//
//    case 2:
//        if (jour > 23) {
//            mois++;
//            jour -= 28;
//        }
//        jour += 5;
//        break;
//    }
//    anneeS = Convert::ToString(annee);
//    moisS = Convert::ToString(mois);
//    jourS = Convert::ToString(jour);
//    if (mois < 10) {
//        moisS = "0" + Convert::ToString(mois);
//    }
//    if (jour < 10) {
//        jourS = "0" + Convert::ToString(jour);
//    }
//    dateliv = jourS + "\/" + moisS + "\/" + anneeS;
//    return dateliv;
//}
//String^ map_commande::getDateEnvoi()
//{
//    String^ dateliv = this->getDates();
//    String^ jourS = dateliv->Remove(2);
//    String^ moisS = dateliv->Substring(3)->Remove(2);
//    String^ anneeS = dateliv->Substring(6);
//    int jour = Convert::ToInt32(jourS);
//    int mois = Convert::ToInt32(moisS);
//    int annee = Convert::ToInt32(anneeS);
//    switch (mois) {
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 8:
//    case 10:
//    case 12:
//        if (mois < 12) {
//            if (jour > 29) {
//                mois++;
//                jour -= 31;
//            }
//        }
//        else {
//            if (jour > 29) {
//                mois = 1;
//                annee++;
//                jour -= 31;
//            }
//        }
//        jour += 2;
//        break;
//    case 4:
//    case 6:
//    case 9:
//    case 11:
//        if (jour > 28) {
//            mois++;
//            jour -= 30;
//        }
//        jour += 2;
//        break;
//    case 2:
//        if (jour > 26) {
//            mois++;
//            jour -= 28;
//        }
//        jour += 2;
//        break;
//    }
//    anneeS = Convert::ToString(annee);
//    moisS = Convert::ToString(mois);
//    jourS = Convert::ToString(jour);
//    if (mois < 10) {
//        moisS = "0" + Convert::ToString(mois);
//    }
//    if (jour < 10) {
//        jourS = "0" + Convert::ToString(jour);
//    }
//    dateliv = jourS + "\/" + moisS + "\/" + anneeS;
//    return dateliv;
//}
