#include<iostream>
#include<math.h>

using namespace std;

#define e 2.71828

int main(){
	
	float x[] = {1,5,7,9,12};
	float y[] = {10,15,12,15,21};
	
	int n = sizeof(x) / sizeof(x[0]);
	
	float co_xy = 0,co_x=0,co_y=0,co_x2=0;
	
	float a0,a1;
	
	cout<<"x	y	lny	xy	x^2";
	for(int i=0;i<n;i++){
		cout<<"\n"<<x[i]<<"\t"<<y[i]<<"\t"<<log(y[i])<<"\t"<<(x[i] * log(y[i]))<<"\t"<<(x[i] * x[i]);
		co_x += x[i];
		co_y += log(y[i]);
		co_xy += (x[i] * log(y[i]));
		co_x2 += (x[i] * x[i]);
	}
	
	cout<<"\n\n"<<co_x<<"\t\t"<<co_y<<"\t"<<co_xy<<"\t"<<co_x2;
	
	cout<<"\n\nEquations : ";
	cout<<"\n"<<co_y<<" = "<<n<<"a0 + "<<co_x<<"a1";
	cout<<"\n"<<co_xy<<" = "<<co_x<<"a0 + "<<co_x2<<"a1";

	cout<<"\n\nSolving equations : ";
	
	float t0 = co_x,t1 = co_x,t2 = co_x2;
	float y0 = co_y,y1 = co_xy;
	
	y0 *= t0;
	t0 *= t0;
	
	y1 *= n;
	t2 *= n;
	
	a1 = (y1 - y0) / (t2 - t0);
	
	cout<<"\na1 = "<<a1;
	
	a0 = (co_y - (a1 * co_x)) / n;
	cout<<",a0 = "<<a0;
	
	float alpha = pow(e,a0);
	
	cout<<"\n\nAns : y = "<<alpha<<"e^"<<a1<<"x";
	
	return 0;
}