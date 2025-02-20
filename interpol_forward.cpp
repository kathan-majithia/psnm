#include<iostream>

using namespace std;

double per(double p,int r){
//	double p=1;
	if (r == 0)
		return 1;
	for(int i=1;i<r;i++){
		p *= (p - i);
	}
	return p;
}

int fact(int a){
	
	if(a == 1 || a == 0)
		return 1;
	
	return a * fact(a-1);	
}

int main(){
	double x[] = {4,6,8,10};
	double y[] = {1,3,8,16};
	
	int n = sizeof(x) / sizeof(x[0]);
	
	double fx = 5;
	
	double *dely = y;
	dely[0] = y[0];
	
	double p = (fx - x[0]) / (x[1] - x[0]);
	
	double ans = 0,t;
//	int j = n-1;
	for(int i=0;i<n;i++){
		t = ans;
		ans += (per(p,i) * dely[0]) / fact(i);
		for(int j=0;j<n-1-i;j++){
			dely[j] = dely[j+1] - dely[j];
//			cout<<"\n"<<dely[j];
		}
		cout<<" "<<(ans-t)<<"\n";
	}
	
	cout<<"Answer : "<<ans;
}
