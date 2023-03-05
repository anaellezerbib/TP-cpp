//TP3 

//Exercice 2 : Structure, fonction et tableau

#include <iostream>
using namespace std;


struct complexe{
	float re_part ,im_part;
};


complexe sum(complexe a, complexe b){
  	complexe s;
  	s.re_part = a.re_part + b.re_part;
  	s.im_part = a.im_part + b.im_part;
  	return s;
}

void prod(float t, complexe *c){
	c -> re_part *=t;
 	c -> im_part *=t;
}


complexe tableau(complexe tab[], int taille){
	int i;
	complexe s;
	for(i=0;i<taille;i++){
		s = sum(s,tab[i]);
	}
	return s;
}

int main(){
 	int taille;
 	cout << "Entrez la taille du tableau"<<endl;
  	cin>> taille;

	complexe *tab= new complexe[taille];
	for (int i=0; i<taille; i++){
    	cout <<"entrer la partie réelle du nombre complexe: "<<endl;
    	cin>>tab[i].re_part;
    	cout <<"entrer la partie imaginaire du nombre complexe: "<<endl;
    	cin>>tab[i].im_part;
  }

	complexe s;
	s = tableau(tab,taille);
	cout << "La somme de tout le tableau donne " << s.re_part << "+" << s.im_part << "i" << endl;
	delete[] tab;
	return 0;

}



