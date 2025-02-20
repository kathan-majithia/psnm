#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

#define e 2.718281828

double fx(double x){
	return ((sin(x + 1) * log(x)) - 1);
}

double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}

double xf(double a,double b){
	return (((a * fx(b)) - (b * fx(a))) / (fx(b) - fx(a)));
}

int main(){
	double a=5,b=6;

//	double fx = 

	int deci=4;
	double te;
	double fa = rd(fx(a)),fb = rd(fx(b));
	
	double xn;
	if(fx(a) > 0){
		te = a;
		a = b;
		b = te;
	}
	int lo=0;
	cout<<"Enter function : ";
	while(lo){
		cout<<"\n1 for polynomial,2 for trigno,3 for log,4 for e : ";
		int ch;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter cofficient and power of polynomial : ";
				int co,po;
				cin>>co>>po;
//				fx += co * pow(x,po);
				
		}
	}

	cout<<"\n\nEnter decimal places : ";
	cin>>deci;
//	getch();
	
	cout<<"\n\n\nIteration\t a\t   b\t\txn\t   f(x)";
	int i=1;
	
	
	while(1){
		double x = xf(a,b);
		x = rd(x);
//		cout<<"  Xf : "<<x;
	
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
