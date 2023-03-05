//TP1 
 
//Exercice 3 : Tableaux et fonctions

#include <iostream>
using namespace std;

void sum(float tab[], int *taille, float *s){ //pas besoin de préciser la taille du tableau 
	int i = 0;
	for(i=0; i<*taille;i++){
		*s = *s + tab[i];
	}
}

int main(){
	float tab[10] = {1,2,3.5,2,8,19,10,16,5.5,10};
	float s = 0;
	int taille;
	taille = 10;
	sum(tab,&taille,&s);
	cout << "La somme de ce tableau est : " << s << endl;
	return(0);
}