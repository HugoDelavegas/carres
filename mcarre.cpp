#include "carre.h"
#include <iostream>
using namespace std;
void main()
{
	CCarre Carre1;
	int dec_hori;
	int dec_vert;
	int long_cote;
	dec_hori = 0;
	dec_vert = 0;
	long_cote = 0;

	cout << "\t\t\t\t\t\t----Bonjour artisan----";
	cout << "\n\nVeuillez selectionner la longueur du decalage horizontal: ";
	cin >> dec_hori;
	cout << "Veuillez selectionner la longueur du decalage vertical: ";
	cin >> dec_vert;
	cout << "Veuillez selectionner la longueur du cote: ";
	cin >> long_cote;

	Carre1.Setsx(dec_hori);
	Carre1.Setsy(dec_vert);
	Carre1.Setcote(long_cote);
	//Carre1.Afficher();
	Carre1.Getsx();
	Carre1.Getsy();
	Carre1.Getcote();
	cout <<"\n-La longueur horizontal choisi est : "<< Carre1.Getsx();
	cout << "\n-La longueur vertical choisi est : " << Carre1.Getsy();
	cout << "\n-La longueur du cote choisi est : " << Carre1.Getcote();
}