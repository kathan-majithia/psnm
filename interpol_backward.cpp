#include<iostream>

using namespace std;

double per(double p,int r){
//	double p=1;
	if (r == 0)
		return 1;
	for(int i=1;i<r;i++){
		p *= (p + i);
	}
	return p;
}

int fact(int a){
	
	if(a == 1 || a == 0)
		return 1;
	
	return a * fact(a-1);	
}

int main(){
	double x[] = {0,0.1,0.2,0.3,0.4};
	double y[] = {1,1.1052,1.2214,1.3499,1.4918};
	
	int n = sizeof(x) / sizeof(x[0]);
	
	double fx = 0.38;
	
	double *dely = y;
//	dely[0] = y[0];
	
	double p = (x[n-1] - fx) / (x[1] - x[0]);
	double ans = 0,t;
	p = -p;
//	cout<<" p : "<<p; 
//	int j = n-1;
	for(int i=0;i<n;i++){
		t = ans;
		ans += (per(p,i) * dely[n-1-i]) / fact(i);
		for(int j=0;j<n-1-i;j++){
			dely[j] = dely[j+1] - dely[j];
//			cout<<"\n"<<dely[j];
		}
		cout<<" "<<(ans-t)<<"\n";
	}
	
	cout<<"Answer : "<<ans;
}