//TP3 

//Exercice 3 : Structure contenant des tableaux

#include <iostream>
using namespace std;

const int NMOIS = 12;

struct enreg{
	int stock;
	float prix;
	int ventes[NMOIS];

};


void zero(enreg &prod){
	prod.stock = 0;
	int i;
	for(i=0;i<NMOIS;i++){
		prod.ventes[i] = 0;
	}
}


int main(){
	enreg produit;
	produit.stock = 5;
	produit.prix = 15;
	for (int j=0;j<NMOIS;j++){
  		produit.ventes[j]=j+1;
	}
	zero(produit);
	cout << "Le stock est maintenant de :" << produit.stock << endl;
	cout << "La vente est maintenant de :" << endl;
	int i;
	for(i=0;i<NMOIS;i++){
		cout << produit.ventes[i] << " ";
	}
	cout << endl;
	return 0;
}