#include "carre.h"
#include <iostream>
using namespace std;
void main()
{
	CCarre Carre[4];
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

	Carre[0].Setsx(dec_hori);
	Carre[0].Setsy(dec_vert);
	Carre[0].Setcote(long_cote);
	//Carre1.Afficher();
	Carre[0].Getsx();
	Carre[0].Getsy();
	Carre[0].Getcote();
	cout <<"\n-La longueur horizontal choisi est : "<< Carre[0].Getsx();
	cout << "\n-La longueur vertical choisi est : " << Carre[0].Getsy();
	cout << "\n-La longueur du cote choisi est : " << Carre[0].Getcote();
	
	Carre[0].Deplacer(direction, saut);
	cout <<"\n-Programme Carre 1" << "\nSx=" << Carre[0].Getsx() << "\nSy=" << Carre[0].Getsy() << "\nCote=" << Carre[0].Getcote();
	Carre[1].Setsx(dec_hori);
	Carre[1].Setsy(dec_vert);
	Carre[1].Setcote(long_cote);
	Carre[1].Deplacer(dx, dy);
	cout <<"\n-Programme Carre 2" << "\nSx=" << Carre[1].Getsx() << "\nSy=" << Carre[1].Getsy() << "\nCote=" << Carre[1].Getcote();
	Carre[2].Setsx(dec_hori);
	Carre[2].Setsy(dec_vert);
	Carre[2].Setcote(long_cote);
	Carre[2].Deplacer(dx*2, dy-3);
	cout << "\n-Programme Carre 3" << "\nSx=" << Carre[2].Getsx() << "\nSy=" << Carre[2].Getsy() << "\nCote=" << Carre[2].Getcote();
	Carre[3].Setsx(dec_hori);
	Carre[3].Setsy(dec_vert);
	Carre[3].Setcote(long_cote);
	Carre[3].Deplacer('o', saut+3-8);
	cout << "\n-Programme Carre 4" << "\nSx=" << Carre[3].Getsx() << "\nSy=" << Carre[3].Getsy() << "\nCote=" << Carre[3].Getcote();

}