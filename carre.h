#pragma once


class CCarre
{
private:
	int sx;
	int sy;
	int cote;

public:
	void Setsx(int sx1);//Sert a implémenter la valeur sx 
	void Setsy(int sy1);//Sert a implémenter la valeur sy
	void Setcote(int cote1);//sert a implementer la valeur cote
	void Afficher();//Permet d'afficher la class CCcarre avec tous ce qui est contenu dans le public
	int Getsx();//permet de recupérer et retourner sx
	int Getsy();//permet de recupérer et retourner sy
	int Getcote();//permet de recupérer et retourner cote
	void Deplacer(char direction, int saut);//Permet de modifier les valeurs que l'on a choisis selon la direction 
	void Deplacer(unsigned int direction, unsigned int saut);//Permet de modifier les valeurs que l'on a choisis selon la direction 
	CCarre(int x, int y, int cote);
	CCarre();
};

