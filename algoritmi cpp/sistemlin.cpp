#include <iostream>
#include <cmath>

using namespace std;

void setZero2 (int a[][3]) {
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			a[i][j] = 0;
		}
	}
}

void setZero (int a[]) {
	for (int i=0; i<3; i++) {
		a[i] = 0;
	}
}

void setUno (int a[]) {
	for (int i=0; i<3; i++) {
		a[i] = 1;
	}
}


int main() {
	int n=3, s=0;

	int a[3][3] ={{1,1,1},{0,1,1},{0,0,1}};
	int b[3] = {1,1,1};
	int det = 0;
	int x[3];
	det = a[0][0];

	for (int i=1; i<3; i++) {
		det*=a[i][i];
	}
	cout<<"\n\ndet = "<<det<<endl;


	if (det!=0) {
		x[2] = b[2]/a[2][2];
		for(int i=1; i>=0; i--) {
			s=0;
			for (int j = i+1; j<n; j++) {
				s+=a[i][j]*x[j];
			}
			x[i] = (b[i]-s)/a[i][i];
		}

		for(int i=0; i<n; i++) {
			cout<<"x["<<i<<"] vale = "<<x[i]<<endl;
		}
	} else cout<<"determinante = 0\n";
}
