#include "pch.h"
#include "map_statistique.h"

//String^ map_statistique::CalculTop10()
//{
//    throw gcnew System::NotImplementedException();
//    // TODO: insérer une instruction return ici
//}

//void map_statistique::setTop10(String^)
//{
//    
//}

//String^ map_statistique::getTop10()
//{
//    
//}

String^ map_statistique::PanierMoyne()
{
    return "Select AVG(MontantPromotion)as PanierMoy from (Select (MontantCommande-MontantCommande*Promotion) as MontantPromotion, Id_Commande from ((Select Promotion, Id from Commande) as Promo join (Select SUM(PrixTTC) as MontantCommande, Id_Commande from(SELECT PrixTTC, Promotion, Id_Commande From (SElECT Promotion, Id_Commande, Id_Article from Commande JOIN Choisir ON Commande.ID = Choisir.ID_Commande) as tt join(Select(PrixHT * TauxTVA + PrixHT) as PrixTTC, ID from Article) as PrixArticle on tt.Id_Article = PrixArticle.Id) as pp Group by Id_Commande) as p On Promo.Id = p.Id_Commande)) as final;";
}

String^ map_statistique::Top10()
{
    return "Select TOP 10 NombreVente, Nom from (Select COUNT(*) as NombreVente, Id_Article from Choisir group by Id_Article ) as t join  Article on t.Id_Article = Article.Id Order by NombreVente Desc; ";
}

String^ map_statistique::Bottom10()
{
    return "Select TOP 10 NombreVente, Nom from (Select COUNT(*) as NombreVente, Id_Article from Choisir group by Id_Article ) as t join  Article on t.Id_Article = Article.Id Order by NombreVente Asc; ";
}

String^ map_statistique::ValeurComer()
{
    return "SELECT  Sum(Quantite * PrixHT * 1) as ValeurStock from Article;";
}
String^ map_statistique::ValeurAchat()
{
    return "SELECT  Sum(Quantite * PrixHT) as ValeurStock  from Article;";
}
String^ map_statistique::gettexte()
{
    return this->texte;
}
void map_statistique::settexte(String^ texte)
{
    this->texte = texte;
}
String^ map_statistique::CA()
{
    return "Select SUM(MontantPromotion) as CA from (select MontantPromotion from (Select (MontantCommande-MontantCommande*Promotion) as MontantPromotion, Id_Commande, Date_Commande from ((Select Promotion,Date_Commande, Id from Commande) as Promo join (Select SUM(PrixTTC) as MontantCommande, Id_Commande from(SELECT PrixTTC, Promotion, Id_Commande From(SElECT Promotion, Id_Commande, Id_Article from Commande JOIN Choisir ON Commande.Id = Choisir.Id_Commande) as tt join(Select(PrixHT * TauxTVA + PrixHT) as PrixTTC, Id from Article) as PrixArticle on tt.Id_Article = PrixArticle.Id) as pp Group by Id_Commande) as p On Promo.Id = p.Id_Commande)) as tt where tt.Date_Commande like '%" + gettexte() + "') as m;";
}
map_statistique::map_statistique()
{
    this->PanierMoyen = "";
    this->Top10v = "";
    this->texte = "";
   
}

String^ map_statistique::getQuantite() 
{
    return "SELECT Sum(Quantite) from dbo.Article";
}

String^ map_statistique::getPrix() 
{
    return "SELECT Sum(PrixHT) from dbo.Article";
}
