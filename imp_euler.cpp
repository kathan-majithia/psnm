#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

#define e 2.718281828

double fx(double x,double y){
	
	return (log(x + y));
}

double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}

int main(){
	
	double x=0,y=2;
	
	double xn = 0.8;	
	double y1;
	
	double yi;
		
	double h = 0.2;	
		
	double yn;
	for(double i=x+h;i<=xn;i = i + h){
		
		y1 = y + (h * fx(x,y));
		
		for(int j=0;j<2;j++){
//		while(1){
			yi = y + (h / 2 * (fx(x,y) + fx(i,y1)));
		
			cout<<" "<<yi;
			
//			if(rd(yi) == rd(y1))
//				break;
			
			y1 = yi;
		}
		cout<<" "<<i<<"\n";		
	}	
	
	cout<<"\nAnswer : "<<yi;	
	return 0;
}
