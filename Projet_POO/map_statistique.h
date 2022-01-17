#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
ref class map_statistique
{
public: 
	map_statistique();
	String^ getQuantite();
	String^ getPrix();
	//String^ CalculTop10();
	//void setTop10(String^);
	//String^ getTop10();
	String^ PanierMoyne();
	String^ Top10();
	String^ Bottom10();
	String^ ValeurComer();
	String^ ValeurAchat();
	String^ CA();
	String^ gettexte();
	void settexte(String^);

private: 
	String^ Top10v;
	String^ PanierMoyen;
	String^ texte;
};

