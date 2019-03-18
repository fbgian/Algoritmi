

#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
	return (x*x*x)+1;
}


int main() {
	double a, b, h, s, a2, a1, diff=0;
	double E = 0.0001;
	//bool cont = false;

	int n;

	cout<<"Questo programma fa l'integrale tra 'a' e 'b' della funzione x^2\n";
	cout<<"Inserisci gli estremi 'a' e 'b' \n";
	//cin>>a>>b;
	cout<<"Inserisci il numero di intervalli 'n' : ";
	//cin>>n;
	a = 0;
	b = ;
	n = 10000;
	double fab = (f(a) + f(b))/2;
	double x = a;
	h=(b-a)/n;
	s = 0;

	for (int i=1; i<n; i++) {
		x += h;
		s+= f(x);
	}

	a1 = (fab + s)*h;
	do {
		x = a + h/2;
		for (int i = 1; i<n; i++) {
			s+=f(x);
			x+=h;
		}
		a2 = (fab+s)*(h/2);
		diff = abs(a2-a1);
		cout<<"\nA1 E A2 VALGONO     "<<a1<<"    "<<a2<<"\n LADIFFERENZA E'  "<<diff<<endl;
		if (diff < E) {
			cout<<endl<<a2<<endl;
			return 0;
		}
		else {
			h/=2;
			n*=2;
		}
	}while(diff>E);
}
