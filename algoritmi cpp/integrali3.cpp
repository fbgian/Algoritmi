

#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
	return (x*x*x)+1;
}


int main() {
	double a, b, h, sp=0, sd=0, diff=0;
	double nit = 0, nmax = 0, area, area1;
	double E = 0.0001;
	//bool cont = false;

	int n;

	cout<<"Questo programma fa l'integrale tra 'a' e 'b' della funzione x^2\n";
	cout<<"Inserisci gli estremi 'a' e 'b' \n";
	//cin>>a>>b;
	cout<<"Inserisci il numero di intervalli 'n' : \n\n";
	//cin>>n;
	a = 0;
	b = 3;
	n = 10;
	h=(b-a)/n;
	double fab = (f(a) + f(b))/2;
	double x = a;
	for(int i=1; i<(n-2)/2; i++) {
		x+=h;
		sd+=f(x);
		x+=h;
		sp+=f(x);
	}
	x+=h;
	sd+=f(x);
	area = (h/3)*(fab+4*sd+2*sp);
	do {
		sp+=sd;
		sd = 0;
		x=a+h/2;
		for(int i=1; i<n; i++) {
			sd+=f(x);
			x+=h;
		}
		area1 = (fab + 4*sd + 2*sp)*(h/6);
		diff = abs(area1-area);
		area=area1;
		h=h/2;
		n*=2;
		nit++;
	} while(diff>E);
	cout<<area<<endl;
}
