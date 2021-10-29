#include <string.h>
#include <iostream>
#include "Compte.h"
using namespace banque;
using namespace std;
Compte::Compte()
{
	this->NumCompte = 0;
	this->NomProp = new char[10];
	strcpy(this->NomProp, "");
	this->Solde = 0;
}



Compte::Compte(int Num, char* Nom, float Sol)
{
	this->NumCompte = Num;
	this->NomProp = new char[strlen(Nom) + 1];
	strcpy(this->NomProp, Nom);
	this->Solde = Sol;
}



bool Compte::retirerArgent(float s)
{
	if (this->Solde >= s) {
		this->Solde -= s; 
		return true;
	}



	else
	{ 
		cout << " Votre solde est insuffisant pour effectuer le retrait !!" << endl;
		return false;
	}



}



void Compte::deposerArgent(float x)
{
	this->Solde += x; 
}


void Compte::consulterSold()
{

	cout << "===================ETAT DU COMPTE======================\n\n";
	cout << "Votre numero de compte: " << this->NumCompte << endl;
	cout << "Votre Nom proprietaire: " << this->NomProp << endl;
	cout << "Votre solde est: " << this->Solde << " MAD" << endl;
}



bool Compte::transfarg(Compte* x, float sm)
{
	if (this->retirerArgent(sm)) {
		x->Solde += sm;
		return true;
	}
	else {
		return false;
	}
}



Compte::~Compte()
{
	delete this->NomProp;
	this->NomProp = nullptr;
	cout << "the object was deleted" << endl;
}