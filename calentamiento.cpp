#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	double y=1;
	double x=0;
	double h=0.1;
	int N=30;
	
	int i = 0;
	for(i=0;i<N;i++){
		y=y-h*y;
		x=x+h;
		
		cout << x << " " << y << endl;
	}
	return 0;
}
