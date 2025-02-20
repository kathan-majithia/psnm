#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

#define e 2.718281828

double fx(double x,double y){
	
	return ((y - x) / (y + x)) + x;
}


double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}

int main(){
	
	double x=1,y=0;
	double k1,k2,k3,k4;
		
	double xn = 1.3;	
		
	double h = 0.1;	
		
	double yn;
	int c=0;
	for(double i=x+h;i<=xn;i = i + h){
		k1 = h * fx(x,y);
		k2 = h * fx(x+(h/2),y + (k1/2));
		k3 = h * fx(x+(h/2),y + (k2/2));
		k4 = h * fx(x + h,y + k3);
		
		yn = y + ((k1 + (2 * k2) + (2 * k3) + k4) / 6);
		
		cout<<"K1 : "<<k1<<", K2 : "<<k2<<", K3 : "<<k3<<", K4 : "<<k4<<", y =  "<<yn<<"\n";

		y = yn;
	}		
	return 0;
}
