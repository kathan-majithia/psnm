#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

#define e 2.718281828

double fx(double x){
	
	return (pow(x,3) - 751);
	
}

double f_x(double x,double h = 1e-5){
	return (fx(x + h) - fx(x)) / h;
}

double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}

double xf(double x){
	return (x - (fx(x)/ f_x(x)));
}

int main(){
	double x0 = 9;

	int deci;
	double te;
	
	double xn;
	
	cout<<"\n\nEnter decimal places : ";
	cin>>deci;
//	getch();
	
	cout<<"\n\n\nIteration\txn\t   f(x)";
	int i=1;
	
	
	while(1){
		double x = xf(x0);
		x = rd(x);
//		cout<<"  Xf : "<<x;
	
		cout<<"\n"<<setw(2)<<i++<<setw(16)<<x<<" \t"<<fx(x)<<" \t"<<f_x(x)<<setw(13)<<xf;	
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
