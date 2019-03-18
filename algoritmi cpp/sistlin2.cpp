#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int n=3, s=0;

	int a[3][3] ={{1,1,1},{0,1,1},{0,0,1}};
	int b[3] = {1,1,1};
	int det = 0;
	int x[3];

	det = 1;

	for (int i=1; i<n; i++) {
		if(a[i][i]==0) return 0;
		det*=a[i][i];
	}
	cout<<"\n\ndet = "<<det<<endl;
	for(int i=2; i>=0; i--) {
		s=0;
		for(int j=i+1; j<n; j++) {
			s+=a[i][j]*x[j];
		}
		x[i]=(b[i]-s)/a[i][i];
	}
	/*
*/

	for(int i=0; i<n; i++) {
		cout<<"x["<<i<<"] vale = "<<x[i]<<endl;
	}
}
