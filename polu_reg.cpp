#include<iostream>
#include<math.h>
#include<vector>

#include "equasol.cpp"

using namespace std;

#define e 2.71828

int main(){
	
	float x[] = {-1,0,1,2};
	float y[] = {-2,1,2,4};
	
	int n = sizeof(x) / sizeof(x[0]);
	
	float co_xy = 0,co_x=0,co_y=0,co_x2=0,co_x3=0,co_x4=0,co_x2y=0;
	
	float a0,a1;
	
	cout<<"x	y	x^2	  xy	x^3    x^2y    x^4";
	for(int i=0;i<n;i++){
		cout<<"\n"<<x[i]<<"\t"<<y[i]<<"\t"<<(x[i] * x[i])<<"\t"<<(x[i] * y[i])<<"\t"<<(x[i] * x[i] * x[i])<<"\t"<<(x[i] * x[i] * y[i])<<"\t"<<(x[i] * x[i] * x[i] * x[i]);
		
		co_x += x[i];
		co_y += y[i];
		co_x2 += x[i] * x[i];
		co_xy += x[i] * y[i];
		co_x3 += x[i] * x[i] * x[i];
		co_x2y += x[i] * x[i] * y[i];
		co_x4 += x[i] * x[i] * x[i] * x[i];
	}
	
	cout<<"\n\n"<<co_x<<"\t"<<co_y<<"\t"<<co_x2<<"\t"<<co_xy<<"\t"<<co_x3<<"\t"<<co_x2y<<"\t"<<co_x4;
	
	cout<<"\n\nEquations : ";
	cout<<"\n"<<co_y<<" = "<<n<<"a0 + "<<co_x<<"a1 + "<<co_x2<<"a2";
	cout<<"\n"<<co_xy<<" = "<<co_x<<"a0 + "<<co_x2<<"a1 + "<<co_x3<<"a2";
	cout<<"\n"<<co_x2y<<" = "<<co_x2<<"a0 + "<<co_x3<<"a1 + "<<co_x4<<"a2";
	cout<<"\n\nSolving equations : ";
	
	
	vector<double> ans;
//	ans = gj(eq,4);

	cout<<"\n\nAns : y = "<<ans[0]<<" + "<<ans[1]<<"x + "<<ans[2]<<"x^2";
	
eturn 0;
}