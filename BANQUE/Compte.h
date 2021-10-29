#pragma once
namespace banque {
	class Compte
	{
	private:
		int NumCompte;
		char* NomProp;
		float Solde;
	public:
		Compte();
		Compte(int Num, char* Nom, float Sol);
		bool retirerArgent(float s);
		void deposerArgent(float x);
		void consulterSold();
		bool transfarg(Compte* x, float somme);
		~Compte();
	};
}