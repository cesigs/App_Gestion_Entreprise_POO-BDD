#include "pch.h"
#include "map_facture.h"
#include "map_commande.h"



map_facture::map_facture(void)
{
    this->Id = -1;
	this->Lid;
	this->Id_Commande = "";
	this->Id_Adresse = "";
	this->Date_Paiement = "";
	this->Montant_Paye = "";
	this->Moyen_Paiement = "";

}

String^ map_facture::SELECT(void)
{
	return "SELECT * FROM dbo.Facture";
}

String^ map_facture::INSERT(void)
{
	return " INSERT INTO dbo.Facture (Moyen_Paiement ,Montant_Paye , Date_Paiement, Id_Adresse, Id_Commande) VALUES( '" +
		this->getMoyen_Paiement() + "','" + this->getMontant_Paye() + "','" + this->getDate_Paiement() + "','" + this->getId_Adresse() + "','" + this->getId_Commande() +
		"');";
		
}

String^ map_facture::UPDATERESTE(String^ montant, String^ idcommande) {
	return "UPDATE dbo.Commande SET Reste_A_Payer = Reste_A_Payer - '" + montant + "' WHERE Id = '" + idcommande + "';";
}

String^ map_facture::DELETE(void)
{
	return "BEGIN TRANSACTION; DELETE FROM dbo.Facture WHERE Id = '"
		+ this->getLid() +
		"' ; COMMIT TRANSACTION;";
}

String^ map_facture::DELETEALL(void)
{
	return "BEGIN TRANSACTION; DELETE FROM dbo.Facture ; COMMIT TRANSACTION;";
}

String^ map_facture::UPDATE(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

void map_facture::setId_Commande(String^ idcom)
{
	this->Id_Commande = idcom;
}

void map_facture::setMoyen_Paiement(String^ moypai)
{
	this->Moyen_Paiement = moypai;
}

void map_facture::setId_Adresse(String^ idad)
{
	this->Id_Adresse = idad;
}

void map_facture::setDate_Paiement(String^ datepai)
{
	this->Date_Paiement = datepai;
}

void map_facture::setMontant_Paye(String^ montantpay)
{
	this->Montant_Paye = montantpay;
}

void map_facture::setLid(String^ lid)
{
	this->Lid = lid;
}

String^ map_facture::getId_Commande(void)
{
	return this->Id_Commande;
}

String^ map_facture::getMoyen_Paiement(void)
{
	return this->Moyen_Paiement;
}

String^ map_facture::getId_Adresse(void)
{
	return this->Id_Adresse;
}

String^ map_facture::getDate_Paiement(void)
{
	return this->Date_Paiement;
}

String^ map_facture::getMontant_Paye(void)
{
	return this->Montant_Paye;
}

String^ map_facture::getLid(void)
{
	return this->Lid;
}
