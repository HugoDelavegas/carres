#include "carre.h"
#include <iostream>
using namespace std;
void main()
{
	CCarre Carre1;
	int dec_hori;
	int dec_vert;
	int long_cote;
	char direction;
	int saut;
	unsigned int dx;
	unsigned int dy;
	dx = 0;
	dy = 0;
	saut = 0;
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
	cout << "Selectionner qu'elle direction vous souhaitez N/S/E/O: ";
	cin >> direction;
	cout << "Selectionner le saut a effectuer: ";
	cin >> saut;
	cout << "Veuillez selectionner dx: ";
	cin >> dx;
	cout << "Veuillez selectionner dy: ";
	cin >> dy;

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
	
	Carre1.Deplacer(direction, saut);
	cout <<"\n-Programme Deplacement" << "\nSx=" << Carre1.Getsx() << "\nSy=" << Carre1.Getsy() << "\nCote=" << Carre1.Getcote();
	Carre1.Setsx(dec_hori);
	Carre1.Setsy(dec_vert);
	Carre1.Deplacer(dx, dy);
	cout <<"\n-Programme Surcharge" << "\nSx=" << Carre1.Getsx() << "\nSy=" << Carre1.Getsy() << "\nCote=" << Carre1.Getcote();

}