#include "carre.h"
#include <iostream>
using namespace std;
void CCarre::Setsx(int sx1)
{
	sx = sx1;
}
void CCarre::Setsy(int sy1)
{
	sy = sy1;
}
void CCarre::Setcote(int cote1)
{
	cote = cote1;
}
void CCarre::Afficher()
{
	cout << "\n-La longueur horizontal choisi est : "<< sx;
	cout << "\n-La longueur vertical choisi est : "<< sy;
	cout << "\n-La longueur du cote choisi est :"<< cote;
}

int CCarre::Getsx()
{
	
	return sx;
}

int CCarre::Getsy()
{
	return sy;
}

int CCarre::Getcote()
{
	
	return cote;
}

void CCarre::Deplacer(char direction, int saut)
{
	if (direction == 'n')
		sy = saut;
	else if (direction == 's')
		sy = saut;
	else if (direction == 'e')
		sx = saut;
	else if (direction == 'o')
		sx = saut;
	

	
}

void CCarre::Deplacer(unsigned int dx, unsigned int dy)
{
	sx += dx;
	sy += dy;
}
