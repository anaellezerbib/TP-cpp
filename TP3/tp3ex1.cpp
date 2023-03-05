//TP3 

//Exercice 1 : Structures et fonctions

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


int main(){
	complexe a,b,c;
	float x;
	cout << "Entrez la partie rélle du premier nombre complexe: "<<endl;
  	cin>> a.re_part;
  	cout << "Entrez la partie imaginaire du premier nombre complexe: "<<endl;
  	cin>> a.im_part;
  	cout << "Entrez la partie rélle du deuxieme nombre complexe: "<<endl;
  	cin>> b.re_part;
  	cout << "Entrez la partie imaginaire du deuxieme nombre complexe: "<<endl;
  	cin>> b.im_part;
	c = sum(a,b);
	cout << "la somme des 2 complexes est: "<< c.re_part << "+" << c.im_part << "i" << endl;
	cout << "Entrez la valeur du réel : "<< endl;
	cin >>x;
	prod(x,&a);
	cout << "le nombre complexe multiplié par le réel : "<< a.re_part << " + "<< a.im_part<< "i"<<endl;
	return 0;

}



