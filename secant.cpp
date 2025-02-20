#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

#define e 2.718281828

double fx(double x){
	
	return (cos(x) - (x * pow(e,x)));
}


double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}

double xf(double xn,double xn_1){
	return (xn - ((xn - xn_1) / (fx(xn) - fx(xn_1))) * fx(xn));
}

int main(){
	double x0 = 0;
	double x_1 = 1;

	int deci;
	
	double xn;
	cout<<"f(x) = xlogx - 1.2";
	cout<<"\n\nEnter decimal places : ";
	cin>>deci;
//	getch();
	
	cout<<"\n\n\nIteration\txn\t(xn-xn-1)\tf(xn)\tf(xn) - f(xn-1)\t   f(x)";
	int i=1;
	
	
	while(1){
		double x = xf(x0,x_1);
		x = rd(x);
//		cout<<"  Xf : "<<x;
	
		cout<<"\n"<<setw(2)<<i++<<setw(16)<<x<<" \t"<<(x_1 - x0)<<" \t"<<fx(x_1)<<" \t"<<(fx(x_1) - fx(x0))<<" \t"<<fx(x);	
		if(i>1){
			if(rd(x,deci) == rd(x0,deci)){
				cout<<"\n\nRoot is "<<x<<" correct upto "<<deci<<" decimal places.";
				break;
			}
		}
		x0 = x;
	}
		
	return 0;
}