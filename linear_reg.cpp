#include<iostream>

using namespace std;

int main(){
	
	double x[] = {0,5,10,15,20};
	double y[] = {150,500,1850,6400,22200};
	
	int n = sizeof(x) / sizeof(x[0]);
	
	double co_xy = 0,co_x=0,co_y=0,co_x2=0;
	
	float a0,a1;
	
	cout<<"x	y	xy	x^2";
	for(int i=0;i<n;i++){
		cout<<"\n"<<x[i]<<"\t"<<y[i]<<"\t"<<(x[i] * y[i])<<"\t"<<(x[i] * x[i]);
		co_x += x[i];
		co_y += y[i];
		co_xy += (x[i] * y[i]);
		co_x2 += (x[i] * x[i]);
	}
	
	cout<<"\n\n"<<co_x<<"\t"<<co_y<<"\t"<<co_xy<<"\t"<<co_x2;
	
	cout<<"\n\nEquations : ";
	cout<<"\n"<<co_y<<" = "<<n<<"a0 + "<<co_x<<"a1";
	cout<<"\n"<<co_xy<<" = "<<co_x<<"a0 + "<<co_x2<<"a1";

	cout<<"\n\nSolving equations : ";
	
	double t0 = co_x,t1 = co_x,t2 = co_x2;
	double y0 = co_y,y1 = co_xy;
	
	y0 *= t1;
	t0 *= t1;
	
	y1 *= n;
	t2 *= n;
	
	a1 = ((float)y1 - (float)y0) / ((float)t2 - (float)t0);
	
	cout<<"\na1 = "<<a1;
	
	a0 = (co_y - (a1 * co_x)) / n;
	cout<<",a0 = "<<a0;
	
	cout<<"\n\nAns : y = "<<a1<<"x + "<<a0;
	
	return 0;
}
