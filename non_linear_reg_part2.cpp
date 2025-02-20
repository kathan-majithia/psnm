#include<iostream>
#include<math.h>

using namespace std;

#define e 2.71828

int main(){
	
	float x[] = {1,2,3,4,5,6};
	float y[] = {2.98,4.26,5.21,6.1,6.8,7.5};
	
	int n = sizeof(x) / sizeof(x[0]);
	
	float co_xy = 0,co_x=0,co_y=0,co_x2=0;
	
	float a0,a1;
	
	cout<<"x	y	lny	   lnx          XY       X^2";
	for(int i=0;i<n;i++){
		cout<<"\n"<<x[i]<<"\t"<<y[i]<<"\t"<<log(y[i])<<"\t"<<log(x[i])<<"  \t"<<(log(x[i]) * log(y[i]))<<"\t "<<(log(x[i]) * log(x[i]));
		co_x += log(x[i]);
		co_y += log(y[i]);
		co_xy += (log(x[i]) * log(y[i]));
		co_x2 += (log(x[i]) * log(x[i]));
	}
	
	cout<<"\n\n\t\t"<<co_y<<"\t"<<co_x<<"\t\t"<<co_xy<<"\t"<<co_x2;
	
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
	
	a0 = pow(e,a0);
	cout<<",a0 = "<<a0;
	
	cout<<"\n\nAns : y = "<<a0<<"x^"<<a1;
	
	return 0;
}