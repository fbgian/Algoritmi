#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
	return sin(x);
}


int main() {
	double a, b, h, s;
	int n;

	cout<<"Questo programma fa l'integrale tra 'a' e 'b' della funzione x^2\n";
	cout<<"Inserisci gli estremi 'a' e 'b' \n";
	cin>>a>>b;
	cout<<"Inserisci il numero di intervalli 'n' : ";
	cin>>n;

	double x = a;
	h=(b-a)/n;
	s=(f(a)+f(b))/2;

	for (int i=1; i<n; i++) {
		x+=h;
		s+=f(x);
	}

	double area=s*h;

	cout<<"\nL'area corrisponde a: "<<area<<endl<<endl;

}
