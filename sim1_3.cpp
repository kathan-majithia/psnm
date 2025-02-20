#include<iostream>

#include<math.h>

using namespace std;



double fx(double x){
	
	return (1 / (pow(x,2) + 1));
}

double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}

double sim13(double a,double b,int p){
	int n = p - 1;
	double ans=0,c=0;
	double h = (b - a) / n;
	double y[p];
	h = (b - a) / n;
	cout<<"X\tY";
	for(int i=a;i<p;i++){
		y[i] = fx(h*i);
		cout<<"\n"<<(h*i)<<"\t"<<y[i];
		c += y[i];
		if(i <p-1 && i % 2 != 0)
			ans += y[i];
	}
	double t = ans;
	ans = 2 * (c - t);
	ans -= y[0];
	ans -= y[p-1];
	ans += 4 * t;
	ans *= h / 3;

	return ans;
}

int main(){
	cout<<"\n\nAnswer : "<<sim13(0,6,7);
}
