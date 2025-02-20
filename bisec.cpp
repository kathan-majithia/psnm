#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

#define e 2.718

double fx(double x){
	
//	return (pow(e,-x) * ((3.2 * sin(x)) - (0.5 * cos(x))));
	return (2 * sin(x)) - x;
}

double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}

int main(){
	double a=1.9063,b=1.8907;

	int deci=2;
	double te;
	double fa = rd(fx(a)),fb = rd(fx(b));
	
	double xn;
	if(fx(a) > 0){
		te = a;
		a = b;
		b = te;
	}
//	cout<<"f(x) = 2x^5 - cosx - xe^x";
	cout<<"f(x) = e^-x * (3.2sinx - 0.5cosx)";
	cout<<"\n\nEnter decimal places : ";
	cin>>deci;
//	getch();
	
	cout<<"\n\n\nIteration\t a\t   b\t x=(a+b)/2\t   f(x)";
	int i=1;
	
	while(1){
		double x = (a + b) / 2;
		x = rd(x);
	
		double xf = fx(x);
		xf = rd(xf);
		
		
		cout<<"\n"<<setw(2)<<i++<<setw(16)<<a<<setw(10)<<b<<setw(14)<<x<<setw(13)<<xf;	
		if(i>1){
			if(rd(x,deci) == rd(xn,deci)){
				cout<<"\n\nRoot is "<<x<<" correct upto "<<deci<<" decimal places.";
				break;
			}
		}
		if(xf > 0)
			b = x;
		else
			a = x;
		xn = x;
	}
		
	return 0;
}
