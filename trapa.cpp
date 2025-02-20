#include<iostream>

#include<math.h>

using namespace std;



double fx(double x){
	
	return (1 / (pow(x,2) + 1));
}

double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}

double trapa(double a,double b,int p){
	int n = p - 1;
	double ans,c=0;
	double h = (b - a) / n;
	double y[p];
	h = (b - a) / n;
	cout<<"X\tY";
	for(int i=a;i<p;i++){
		y[i] = fx(h*i);
		cout<<"\n"<<(h*i)<<"\t"<<y[i];
		c += y[i];
	}
	ans = (((2 * c) - (y[0] + y[p-1])) * h / 2);

	return ans;
}

int main(){
	cout<<"\n\nAnswer : "<<trapa(0,10,11);
}
