#include <iostream>
#include "Compte.h"
#include <string.h>

using namespace banque;
using namespace std;
int main()
{
	char ah[20] = "Ahmed Amine";
	char bh[20] = "Fahd Benzinane";
	Compte A(50003, ah, 8050.175);
	A.consulterSold();
	A.deposerArgent(12000);
	cout << endl;
	cout << "le solde apres ajout du montant : \n" << endl;
	A.consulterSold();
	cout << endl;
	cout << endl;
	A.retirerArgent(1000);
	A.consulterSold();
	cout << endl;
	Compte* B = new Compte(1200, bh, 180000.78);
	A.transfarg(B, 10000);
	cout << "solde du compte A:" << endl;
	A.consulterSold();
	cout << endl;
	cout << endl;
	cout << "solde du compte B:" << endl;
	B->consulterSold();
	cout << endl;
	cout << endl;
}