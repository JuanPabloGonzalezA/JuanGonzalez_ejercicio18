#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	double y=1;
	double x=0;
	double z=0;
	double h=0.1;
	int N=100;
	double zant=0;
	double yant=0;
	
	int i = 0;
	for(i=0;i<N;i++){
		z=zant-h*yant;	
		y=yant+h*zant;			
		x=x+h;
		
		cout << x << " " << y << " " << z << endl;
		zant=z;
		yant=y;
	}
	return 0;
}
