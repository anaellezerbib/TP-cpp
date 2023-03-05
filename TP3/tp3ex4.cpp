//TP3 

//Exercice 4 : Structure de structure

#include <iostream>
using namespace std;

const int LMAX_NOM =30;

struct date{
	int jour; 
	int mois; 
	int annee;
};

struct personne{
	char *nom; 
	date date_inscr;
};

void inscr_personne(personne &p){ //toujours mettre & pour une structure ?
	char *tab = new char[LMAX_NOM];
	cout << "Rentrer le nom d'une personne :" << endl;
	cin >> tab;
	p.nom = tab;
	cout << "Rentrer le jour :" << endl;
	cin >> p.date_inscr.jour;
	cout << "Rentrer le mois :" << endl;
	cin >> p.date_inscr.mois;
	cout << "Rentrer l'année :" << endl;
	cin >> p.date_inscr.annee;
}


int main(){
  personne p;
  inscr_personne(p);
  cout <<"Nom: "<< p.nom <<endl;
  cout << "Date d'inscription: "
        << p.date_inscr.jour<<"/"<<p.date_inscr.mois<<"/"<<p.date_inscr.annee<<endl;
  delete[] p.nom;
  return 0;
}
